struct MVMJitGraph {
    MVMSpeshGraph * spesh;
    MVMJitIns * first_ins;
    MVMJitIns * last_ins;

    MVMint32 num_labels;
    MVMJitLabel * labels;
};

/* A label */
struct MVMJitLabel {
    MVMint32 name;
    MVMSpeshBB *bb;
};

struct MVMJitPrimitive {
    MVMSpeshIns * ins;
};


/* Special branch target for the exit */
#define MVM_JIT_BRANCH_EXIT -1

/* What does a branch need? a label to go to, an instruction to read */

struct MVMJitBranch {
    MVMJitLabel dest;
    MVMSpeshIns * ins;
};

typedef enum {
    MVM_JIT_ADDR_STACK,    // relative to stack base (unused)
    MVM_JIT_ADDR_INTERP,   // interpreter variable
    MVM_JIT_ADDR_REG,      // relative to register base
    MVM_JIT_ADDR_REG_F,    // same, but represents a floating point
    MVM_JIT_ADDR_LITERAL,  // constant value
} MVMJitAddrBase;

/* Some interpreter address definition */
#define MVM_JIT_INTERP_TC     0
#define MVM_JIT_INTERP_FRAME  1
#define MVM_JIT_INTERP_CU     2

struct MVMJitAddr {
    MVMJitAddrBase base;
    MVMint32 idx;
};

/* We support a few operations with return values.
 * (and I might add more :-))
 * a): store value to register 
 * b): store pointer to register
 * c): store register to memory pointer */

typedef enum {
    MVM_JIT_RV_VAL_TO_REG,
    // only for a direct value does the difference 
    // between a float and everything else matter
    MVM_JIT_RV_VAL_TO_REG_F,  
    MVM_JIT_RV_REF_TO_REG,
    MVM_JIT_RV_REG_TO_PTR,
} MVMJitRVMode;;

struct MVMJitRVH { // return value handler
    MVMJitRVMode mode;
    MVMJitAddr   addr;
};


struct MVMJitCallC {
    void * func_ptr;     // what do we call
    MVMJitAddr * args;   // a list of arguments
    MVMuint16 num_args;  // how many arguments we pass
    MVMuint16 has_vargs; // does the receiver consider them variable
};

/* A non-final list of node types */
typedef enum {
    MVM_JIT_INS_PRIMITIVE,
    MVM_JIT_INS_CALL_C,
    MVM_JIT_INS_RVH,
    MVM_JIT_INS_BRANCH,
    MVM_JIT_INS_LABEL,
} MVMJitInsType;

struct MVMJitIns {
    MVMJitIns * next;   // linked list
    MVMJitInsType type; // tag
    union {
        MVMJitPrimitive prim;
        MVMJitCallC     call;
        MVMJitRVH       rvh;
        MVMJitBranch    branch;
        MVMJitLabel     label;
    } u;
};

MVMJitGraph* MVM_jit_try_make_graph(MVMThreadContext *tc, MVMSpeshGraph *spesh);

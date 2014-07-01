/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.3.0, DynASM x64 version 1.3.0
** DO NOT EDIT! The original file is in "src/jit/emit_x64.dasc".
*/

#line 1 "src/jit/emit_x64.dasc"
#include "moar.h"
#include <dasm_proto.h>
#include <dasm_x86.h>
#include "emit.h"

//|.arch x64
#if DASM_VERSION != 10300
#error "Version mismatch between DynASM and included encoding engine"
#endif
#line 7 "src/jit/emit_x64.dasc"
//|.actionlist actions
static const unsigned char actions[759] = {
  85,72,137,229,255,65,86,83,65,84,65,85,255,73,137,252,254,73,137,252,245,
  73,139,142,233,72,139,153,233,76,139,161,233,255,248,10,255,65,93,65,92,91,
  65,94,255,72,137,252,236,93,195,255,72,185,237,237,72,137,139,233,255,72,
  199,131,233,237,255,73,139,142,233,72,139,9,72,139,137,233,72,139,137,233,
  72,137,139,233,255,73,139,142,233,72,139,137,233,72,137,139,233,255,72,139,
  139,233,72,139,137,233,255,73,139,142,233,255,72,139,145,233,255,72,139,146,
  233,255,72,133,210,15,133,244,247,255,82,81,255,76,137,252,247,72,139,116,
  36,8,72,199,194,237,73,186,237,237,65,252,255,210,255,72,131,196,16,255,72,
  137,194,248,1,255,72,137,147,233,255,72,139,137,233,72,139,147,233,72,137,
  145,233,255,73,139,140,253,36,233,72,137,139,233,255,72,139,139,233,72,141,
  137,233,72,131,185,233,0,255,15,132,244,247,72,139,137,233,255,72,131,252,
  249,0,255,15,133,244,248,255,73,139,142,233,72,139,137,233,248,2,255,72,139,
  139,233,72,139,147,233,76,141,129,233,73,131,184,233,0,15,132,244,247,77,
  139,128,233,248,1,255,102,252,247,129,233,236,15,132,244,248,72,131,252,250,
  0,15,132,244,248,255,102,252,247,130,233,236,15,133,244,248,82,65,80,76,137,
  252,247,255,72,139,179,233,73,186,237,237,65,252,255,210,65,88,90,248,2,255,
  73,137,144,233,255,72,139,139,233,72,137,139,233,255,72,139,131,233,255,72,
  3,131,233,255,72,43,131,233,255,72,15,175,131,233,255,72,153,72,252,247,187,
  233,255,72,137,131,233,255,72,252,255,131,233,255,72,252,255,139,233,255,
  252,242,15,16,131,233,255,252,242,15,88,131,233,255,252,242,15,92,131,233,
  255,252,242,15,89,131,233,255,252,242,15,94,131,233,255,252,242,15,17,131,
  233,255,252,242,72,15,42,131,233,252,242,15,17,131,233,255,252,242,72,15,
  44,131,233,72,137,131,233,255,72,59,131,233,255,15,148,208,255,15,149,208,
  255,15,156,208,255,15,158,208,255,15,159,208,255,15,157,208,255,72,15,182,
  192,72,137,131,233,255,72,139,189,233,255,72,139,181,233,255,72,139,149,233,
  255,72,139,141,233,255,76,139,133,233,255,76,139,141,233,255,76,137,252,246,
  255,76,137,252,242,255,76,137,252,241,255,77,137,252,240,255,77,137,252,241,
  255,73,139,190,233,255,73,139,182,233,255,73,139,150,233,255,77,139,134,233,
  255,77,139,142,233,255,76,137,252,239,255,76,137,252,238,255,76,137,252,234,
  255,76,137,252,233,255,77,137,232,255,77,137,252,233,255,72,139,187,233,255,
  72,139,179,233,255,72,139,147,233,255,72,139,139,233,255,76,139,131,233,255,
  76,139,139,233,255,252,242,15,16,139,233,255,252,242,15,16,147,233,255,252,
  242,15,16,155,233,255,252,242,15,16,163,233,255,252,242,15,16,171,233,255,
  252,242,15,16,179,233,255,252,242,15,16,187,233,255,72,199,199,237,255,72,
  199,198,237,255,72,199,194,237,255,72,199,193,237,255,73,199,192,237,255,
  73,199,193,237,255,252,233,244,10,255,252,233,245,255,72,139,131,233,72,133,
  192,15,133,245,255,72,139,131,233,72,133,192,15,132,245,255,249,255,72,139,
  8,72,137,139,233,255,72,139,139,233,72,137,8,255
};

#line 8 "src/jit/emit_x64.dasc"
//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
#line 9 "src/jit/emit_x64.dasc"
//|.globals JIT_LABEL_
enum {
  JIT_LABEL_exit,
  JIT_LABEL__MAX
};
#line 10 "src/jit/emit_x64.dasc"

/* type declarations */
//|.type FRAME, MVMFrame
#define Dt1(_V) (int)(ptrdiff_t)&(((MVMFrame *)0)_V)
#line 13 "src/jit/emit_x64.dasc"
//|.type REGISTER, MVMRegister
#define Dt2(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 14 "src/jit/emit_x64.dasc"
//|.type ARGCTX, MVMArgProcContext
#define Dt3(_V) (int)(ptrdiff_t)&(((MVMArgProcContext *)0)_V)
#line 15 "src/jit/emit_x64.dasc"
//|.type STATICFRAME, MVMStaticFrame
#define Dt4(_V) (int)(ptrdiff_t)&(((MVMStaticFrame *)0)_V)
#line 16 "src/jit/emit_x64.dasc"
//|.type COMPUNIT, MVMCompUnit
#define Dt5(_V) (int)(ptrdiff_t)&(((MVMCompUnit *)0)_V)
#line 17 "src/jit/emit_x64.dasc"
//|.type CUBODY, MVMCompUnitBody
#define Dt6(_V) (int)(ptrdiff_t)&(((MVMCompUnitBody *)0)_V)
#line 18 "src/jit/emit_x64.dasc"
//|.type P6OPAQUE, MVMP6opaque
#define Dt7(_V) (int)(ptrdiff_t)&(((MVMP6opaque *)0)_V)
#line 19 "src/jit/emit_x64.dasc"
//|.type P6OBODY, MVMP6opaqueBody
#define Dt8(_V) (int)(ptrdiff_t)&(((MVMP6opaqueBody *)0)_V)
#line 20 "src/jit/emit_x64.dasc"
//|.type MVMINSTANCE, MVMInstance
#define Dt9(_V) (int)(ptrdiff_t)&(((MVMInstance *)0)_V)
#line 21 "src/jit/emit_x64.dasc"
//|.type OBJECT, MVMObject
#define DtA(_V) (int)(ptrdiff_t)&(((MVMObject *)0)_V)
#line 22 "src/jit/emit_x64.dasc"
//|.type COLLECTABLE, MVMCollectable
#define DtB(_V) (int)(ptrdiff_t)&(((MVMCollectable *)0)_V)
#line 23 "src/jit/emit_x64.dasc"
//|.type STABLE, MVMSTable
#define DtC(_V) (int)(ptrdiff_t)&(((MVMSTable *)0)_V)
#line 24 "src/jit/emit_x64.dasc"
//|.type STRING, MVMString*
#define DtD(_V) (int)(ptrdiff_t)&(((MVMString* *)0)_V)
#line 25 "src/jit/emit_x64.dasc"
//|.type U16, MVMuint16
#define DtE(_V) (int)(ptrdiff_t)&(((MVMuint16 *)0)_V)
#line 26 "src/jit/emit_x64.dasc"
//|.type U32, MVMuint32
#define DtF(_V) (int)(ptrdiff_t)&(((MVMuint32 *)0)_V)
#line 27 "src/jit/emit_x64.dasc"
//|.type U64, MVMuint64
#define Dt10(_V) (int)(ptrdiff_t)&(((MVMuint64 *)0)_V)
#line 28 "src/jit/emit_x64.dasc"



/* Static allocation of relevant types to registers. I pick
 * callee-save registers for efficiency. It is likely we'll be calling
 * quite a C functions, and this saves us the trouble of storing
 * them. Moreover, C compilers preferentially do not use callee-saved
 * registers, and so in most cases, these won't be touched at all. */
//|.type TC, MVMThreadContext, r14
#define Dt11(_V) (int)(ptrdiff_t)&(((MVMThreadContext *)0)_V)
#line 37 "src/jit/emit_x64.dasc"
/* Alternative base pointer. I'll be using this often, so picking rbx
 * here rather than the extended registers will lead to smaller
 * bytecode */
//|.type WORK, MVMRegister, rbx
#define Dt12(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 41 "src/jit/emit_x64.dasc"
//|.type ARGS, MVMRegister, r12
#define Dt13(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 42 "src/jit/emit_x64.dasc"
//|.type CU, MVMCompUnit, r13
#define Dt14(_V) (int)(ptrdiff_t)&(((MVMCompUnit *)0)_V)
#line 43 "src/jit/emit_x64.dasc"


//|.macro saveregs
//| push TC; push WORK; push ARGS; push CU;
//|.endmacro

//|.macro restoreregs
//| pop CU; pop ARGS; pop WORK; pop TC
//|.endmacro


const MVMint32 MVM_jit_support(void) {
    return 1;
}

const unsigned char * MVM_jit_actions(void) {
    return actions;
}

const unsigned int MVM_jit_num_globals(void) {
    return JIT_LABEL__MAX;
}


/* C Call argument registers */
//|.if WIN32
//|.define ARG1, rcx
//|.define ARG2, rdx
//|.define ARG3, r8
//|.define ARG4, r9
//|.else
//|.define ARG1, rdi
//|.define ARG2, rsi
//|.define ARG3, rdx
//|.define ARG4, rcx
//|.define ARG5, r8
//|.define ARG6, r9
//|.endif

/* C call argument registers for floating point */
//|.if WIN32
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.else
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.define ARG5F, xmm4
//|.define ARG6F, xmm5
//|.define ARG7F, xmm6
//|.define ARG8F, xmm7
//|.endif

/* Special register for the function to be invoked 
 * (chosen because it isn't involved in argument passing
 *  and volatile) */
//|.define FUNCTION, r10
/* all-purpose temporary registers */
//|.define TMP1, rcx
//|.define TMP2, rdx
//|.define TMP3, r8
//|.define TMP4, r9
//|.define TMP5, r10
//|.define TMP6, r11

/* return value */
//|.define RV, rax
//|.define RVF, xmm0

//|.macro callp, funcptr
//| mov64 FUNCTION, (uintptr_t)funcptr
//|.if WIN32
//| sub rsp, 32
//| call FUNCTION
//| add rsp, 32
//|.else
//| call FUNCTION
//|.endif
//|.endmacro

//|.macro addarg, i, val
//||switch(i) {
//||    case 0:
//|         mov ARG1, val
//||        break;
//||    case 1:
//|         mov ARG2, val
//||        break;
//||    case 2:
//|         mov ARG3, val
//||        break;
//||    case 3:
//|         mov ARG4, val
//||        break;
//|.if not WIN32
//||    case 4:
//|         mov ARG5, val
//||        break;
//||    case 5:
//|         mov ARG6, val
//||        break;
//|.endif
//||    default:
//||        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
//||}
//|.endmacro

//|.macro addarg_f, i, val
//||switch(i) {
//||    case 0:
//|         movsd ARG1F, qword val
//||        break;
//||    case 1:
//|         movsd ARG2F, qword val
//||        break;
//||    case 2:
//|         movsd ARG3F, qword val
//||        break;
//||    case 3:
//|         movsd ARG4F, qword val
//||        break;
//|.if not WIN32
//||    case 4:
//|         movsd ARG5F, qword val
//||        break;
//||    case 5:
//|         movsd ARG6F, qword val
//||        break;
//||    case 6:
//|         movsd ARG7F, qword val
//||        break;
//||    case 7:
//|         movsd ARG8F, qword val
//||        break;
//|.endif
//||    default:
//||        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
//||}
//|.endmacro

/* A function prologue is always the same in x86 / x64, becuase
 * we do not provide variable arguments, instead arguments are provided
 * via a frame. All JIT entry points receive a prologue. */
void MVM_jit_emit_prologue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    /* Setup stack */
    //| push rbp;
    //| mov rbp, rsp;
    dasm_put(Dst, 0);
#line 194 "src/jit/emit_x64.dasc"
    /* save callee-save registers */
    //| saveregs;
    dasm_put(Dst, 5);
#line 196 "src/jit/emit_x64.dasc"
    /* setup special frame variables */
    //| mov TC,   ARG1;
    //| mov CU,   ARG2;
    //| mov TMP1, TC->cur_frame;
    //| mov WORK, FRAME:TMP1->work;
    //| mov ARGS, FRAME:TMP1->params.args;
    dasm_put(Dst, 13, Dt11(->cur_frame), Dt1(->work), Dt1(->params.args));
#line 202 "src/jit/emit_x64.dasc"
}

/* And a function epilogue is also always the same */
void MVM_jit_emit_epilogue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    //| ->exit:
    dasm_put(Dst, 34);
#line 208 "src/jit/emit_x64.dasc"
    /* restore callee-save registers */
    //| restoreregs;
    dasm_put(Dst, 37);
#line 210 "src/jit/emit_x64.dasc"
    /* Restore stack */
    //| mov rsp, rbp;
    //| pop rbp;
    //| ret;
    dasm_put(Dst, 45);
#line 214 "src/jit/emit_x64.dasc"
}

static MVMuint64 try_emit_gen2_ref(MVMThreadContext *tc, MVMJitGraph *jg,
                                   MVMObject *obj, MVMint16 reg, 
                                   dasm_State **Dst) {
    if (!(obj->header.flags & MVM_CF_SECOND_GEN))
        return 0;
    //| mov64 TMP1, (uintptr_t)obj;
    //| mov WORK[reg], TMP1;
    dasm_put(Dst, 52, (unsigned int)((uintptr_t)obj), (unsigned int)(((uintptr_t)obj)>>32), Dt12([reg]));
#line 223 "src/jit/emit_x64.dasc"
    return 1;
}

/* compile per instruction, can't really do any better yet */
void MVM_jit_emit_primitive(MVMThreadContext *tc, MVMJitGraph *jg,
                            MVMJitPrimitive * prim, dasm_State **Dst) {
    MVMSpeshIns *ins = prim->ins;
    MVMuint16 op = ins->info->opcode;
    MVM_jit_log(tc, "emit opcode: <%s>\n", ins->info->name);
    /* Quite a few of these opcodes are copies. Ultimately, I want to
     * move copies to their own node (MVMJitCopy or such), and reduce
     * the number of copies (and thereby increase the efficiency), but
     * currently that isn't really feasible. */
    switch (op) {
    case MVM_OP_const_i64_16: {
        MVMint32 reg = ins->operands[0].reg.orig;
        /* Upgrade to 64 bit */
        MVMint64 val = (MVMint64)ins->operands[1].lit_i16;
        //| mov WORK[reg], qword val;
        dasm_put(Dst, 61, Dt12([reg]), val);
#line 242 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_i64: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMint64 val = ins->operands[1].lit_i64;
        //| mov64 TMP1, val;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 52, (unsigned int)(val), (unsigned int)((val)>>32), Dt12([reg]));
#line 249 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_n64: {
        MVM_jit_log(tc, "store const %f\n", ins->operands[1].lit_n64);
        MVMint16 reg = ins->operands[0].reg.orig;
        MVMint64 valbytes = ins->operands[1].lit_i64;
        //| mov64 TMP1, valbytes;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 52, (unsigned int)(valbytes), (unsigned int)((valbytes)>>32), Dt12([reg]));
#line 257 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_s: {
         MVMint16 reg = ins->operands[0].reg.orig;
         MVMuint32 idx = ins->operands[1].lit_str_idx;
         MVMStaticFrame *sf = jg->spesh->sf;
         MVMString * s = sf->body.cu->body.strings[idx];
         if (!try_emit_gen2_ref(tc, jg, (MVMObject*)s, reg, Dst)) {
             //| mov TMP1, TC->interp_cu;               // pointer to pointer
             //| mov TMP1, [TMP1];                      // pointer
             //| mov TMP1, COMPUNIT:TMP1->body.strings; // get strings array
             //| mov TMP1, STRING:TMP1[idx];
             //| mov WORK[reg], TMP1;
             dasm_put(Dst, 67, Dt11(->interp_cu), Dt5(->body.strings), DtD([idx]), Dt12([reg]));
#line 270 "src/jit/emit_x64.dasc"
         }
         break;
    }
    case MVM_OP_null: {
        MVMint16 reg = ins->operands[0].reg.orig;
        //| mov TMP1, TC->instance;
        //| mov TMP1, MVMINSTANCE:TMP1->VMNull;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 87, Dt11(->instance), Dt9(->VMNull), Dt12([reg]));
#line 278 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_gethow:
    case MVM_OP_getwhat: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[0].reg.orig;
        //| mov TMP1, WORK[obj];
        //| mov TMP1, OBJECT:TMP1->st;
        dasm_put(Dst, 100, Dt12([obj]), DtA(->st));
#line 286 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_gethow) {
            //| mov TMP1, STABLE:TMP1->HOW;
            dasm_put(Dst, 104, DtC(->HOW));
#line 288 "src/jit/emit_x64.dasc"
        } else {
            //| mov TMP1, STABLE:TMP1->WHAT;
            dasm_put(Dst, 104, DtC(->WHAT));
#line 290 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 56, Dt12([dst]));
#line 292 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getlex: {
        MVMint16 *lexical_types;
        MVMStaticFrame * sf = jg->spesh->sf;
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 idx = ins->operands[1].lex.idx;
        MVMint16 out = ins->operands[1].lex.outers;
        MVMint16 i;
        //| mov TMP1, TC->cur_frame;
        dasm_put(Dst, 109, Dt11(->cur_frame));
#line 302 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            /* I'm going to skip compiling the check whether the outer
             * node really exists, because if the code has run N times
             * correctly, then the outer frame must have existed then,
             * and since this chain is static, it should still exist now.
             * If it doesn't exist, that means we crash. */
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 104, Dt1(->outer));
#line 309 "src/jit/emit_x64.dasc"
            sf = sf->body.outer;
        }
        /* get array of lexicals */
        //| mov TMP2, FRAME:TMP1->env;
        dasm_put(Dst, 114, Dt1(->env));
#line 313 "src/jit/emit_x64.dasc"
        /* read value */
        //| mov TMP2, REGISTER:TMP2[idx];
        dasm_put(Dst, 119, Dt2([idx]));
#line 315 "src/jit/emit_x64.dasc"
        lexical_types = (jg->spesh->lexical_types ? jg->spesh->lexical_types :
                         sf->body.lexical_types);
        if (lexical_types[idx] == MVM_reg_obj) {
           /* NB: this code path hasn't been checked. */
            /* if it is zero, check if we need to auto-vivify */        
            //| test TMP2, TMP2;
            //| jnz >1; 
            dasm_put(Dst, 124);
#line 322 "src/jit/emit_x64.dasc"
            /* save frame and value */
            //| push TMP2;
            //| push TMP1;
            dasm_put(Dst, 132);
#line 325 "src/jit/emit_x64.dasc"
            /* setup args */
            //| mov ARG1, TC;
            //| mov ARG2, [rsp+8]; // the frame, which i just pushed
            //| mov ARG3, idx;
            //| callp &MVM_frame_vivify_lexical;
            dasm_put(Dst, 135, idx, (unsigned int)((uintptr_t)&MVM_frame_vivify_lexical), (unsigned int)(((uintptr_t)&MVM_frame_vivify_lexical)>>32));
#line 330 "src/jit/emit_x64.dasc"
            /* restore stack pointer */
            //| add rsp, 16;
            dasm_put(Dst, 157);
#line 332 "src/jit/emit_x64.dasc"
            /* use return value for the result */
            //| mov TMP2, RV;
            //|1:
            dasm_put(Dst, 162);
#line 335 "src/jit/emit_x64.dasc"
        } 
        /* store the value */
        //| mov WORK[dst], TMP2;
        dasm_put(Dst, 168, Dt12([dst]));
#line 338 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_bindlex: {
        MVMint16 idx = ins->operands[0].lex.idx;
        MVMint16 out = ins->operands[0].lex.outers;
        MVMint16 src = ins->operands[1].reg.orig;
        MVMint16 i;
        //| mov TMP1, TC->cur_frame;
        dasm_put(Dst, 109, Dt11(->cur_frame));
#line 346 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 104, Dt1(->outer));
#line 348 "src/jit/emit_x64.dasc"
        }
        //| mov TMP1, FRAME:TMP1->env;
        //| mov TMP2, WORK[src];
        //| mov REGISTER:TMP1[idx], TMP2;
        dasm_put(Dst, 173, Dt1(->env), Dt12([src]), Dt2([idx]));
#line 352 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_getarg_o:
    case MVM_OP_sp_getarg_n:
    case MVM_OP_sp_getarg_s:
    case MVM_OP_sp_getarg_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].callsite_idx;
        //| mov TMP1, ARGS[idx];
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 186, Dt13([idx]), Dt12([reg]));
#line 362 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6oget_i:
    case MVM_OP_sp_p6oget_n:
    case MVM_OP_sp_p6oget_s:
    case MVM_OP_sp_p6oget_o: {
        MVMint16 dst    = ins->operands[0].reg.orig;
        MVMint16 obj    = ins->operands[1].reg.orig;
        MVMint16 offset = ins->operands[2].callsite_idx;
        //| mov TMP1, WORK[obj];
        //| lea TMP1, P6OPAQUE:TMP1->body;
        //| cmp qword P6OBODY:TMP1->replaced, 0;
        dasm_put(Dst, 197, Dt12([obj]), Dt7(->body), Dt8(->replaced));
#line 374 "src/jit/emit_x64.dasc"
        /* if not zero then load replacement data pointer */
        //| je >1;
        //| mov TMP1, P6OBODY:TMP1->replaced;
        dasm_put(Dst, 211, Dt8(->replaced));
#line 377 "src/jit/emit_x64.dasc"
        /* otherwise do nothing (i.e. the body is our data pointer) */
        //|1:
        dasm_put(Dst, 165);
#line 379 "src/jit/emit_x64.dasc"
        /* load our value */
        //| mov TMP1, [TMP1 + offset];
        dasm_put(Dst, 104, offset);
#line 381 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6oget_o) {
            /* transform null object pointers to VMNull */
            //| cmp TMP1, 0;
            dasm_put(Dst, 220);
#line 384 "src/jit/emit_x64.dasc"
            /* not-null? done */
            //| jne >2;
            dasm_put(Dst, 226);
#line 386 "src/jit/emit_x64.dasc"
            /* store VMNull instead */
            //| mov TMP1, TC->instance;
            //| mov TMP1, MVMINSTANCE:TMP1->VMNull;
            //|2:
            dasm_put(Dst, 231, Dt11(->instance), Dt9(->VMNull));
#line 390 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 56, Dt12([dst]));
#line 392 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6obind_i:
    case MVM_OP_sp_p6obind_n:
    case MVM_OP_sp_p6obind_o:
    case MVM_OP_sp_p6obind_s: {
        MVMint16 obj    = ins->operands[0].reg.orig;
        MVMint16 offset = ins->operands[1].callsite_idx;
        MVMint16 val    = ins->operands[2].reg.orig;
        //| mov TMP1, WORK[obj];            // object
        //| mov TMP2, WORK[val];            // value
        //| lea TMP3, P6OPAQUE:TMP1->body;  // body
        //| cmp qword P6OBODY:TMP3->replaced, 0; 
        //| je >1;
        //| mov TMP3, P6OBODY:TMP3->replaced; // replaced object body
        //|1:
        dasm_put(Dst, 242, Dt12([obj]), Dt12([val]), Dt7(->body), Dt8(->replaced), Dt8(->replaced));
#line 408 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6obind_o) {
            /* this is an assembly-version of MVM_gc_write_barrier
             * TMP1 is root, TMP2 is referenced value. And yes, this
             * should be factored out */
            // is our root second gen?
            //| test word COLLECTABLE:TMP1->flags, MVM_CF_SECOND_GEN; 
            //| jz >2; // if not, skip
            //| cmp TMP2, 0; // is value non-null? (should be)
            //| je >2; // if not, skip
            dasm_put(Dst, 270, DtB(->flags), MVM_CF_SECOND_GEN);
#line 417 "src/jit/emit_x64.dasc"
            // is the reference second gen?
            //| test word COLLECTABLE:TMP2->flags, MVM_CF_SECOND_GEN; 
            //| jnz >2;  // if so, skip
            //| push TMP2; // store value
            //| push TMP3; // store body pointer
            //| mov ARG1, TC;  // set tc as first argument
            dasm_put(Dst, 290, DtB(->flags), MVM_CF_SECOND_GEN);
#line 423 "src/jit/emit_x64.dasc"
            // NB, c call arguments arguments clobber our temporary
            // space (depending on ABI), so I reload the work object
            // from register space 
            //| mov ARG2, WORK[obj]; // object as second
            //| callp &MVM_gc_write_barrier_hit; // call our function
            //| pop TMP3; // restore body pointer
            //| pop TMP2; // restore value
            //|2: // done
            dasm_put(Dst, 308, Dt12([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 431 "src/jit/emit_x64.dasc"
        }
        //| mov [TMP3+offset], TMP2; // store value into body
        dasm_put(Dst, 326, offset);
#line 433 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getwhere:
    case MVM_OP_set: {
         MVMint32 reg1 = ins->operands[0].reg.orig;
         MVMint32 reg2 = ins->operands[1].reg.orig;
         //| mov TMP1, WORK[reg2];
         //| mov WORK[reg1], TMP1;
         dasm_put(Dst, 331, Dt12([reg2]), Dt12([reg1]));
#line 441 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_add_i:
    case MVM_OP_sub_i:
    case MVM_OP_mul_i:
    case MVM_OP_div_i:
    case MVM_OP_mod_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 340, Dt12([reg_b]));
#line 452 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_i:
            //| add rax, WORK[reg_c];
            dasm_put(Dst, 345, Dt12([reg_c]));
#line 455 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_i:
            //| sub rax, WORK[reg_c];
            dasm_put(Dst, 350, Dt12([reg_c]));
#line 458 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_i:
            //| imul rax, WORK[reg_c];
            dasm_put(Dst, 355, Dt12([reg_c]));
#line 461 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_i:
        case MVM_OP_mod_i:
            // Convert Quadword to Octoword, i.e. use rax:rdx as one
            // single 16 byte register
            //| cqo; 
            //| idiv qword WORK[reg_c];
            dasm_put(Dst, 361, Dt12([reg_c]));
#line 468 "src/jit/emit_x64.dasc"
            break;
        }
        if (ins->info->opcode == MVM_OP_mod_i) {
            // result of modula is stored in rdx
            //| mov WORK[reg_a], rdx;
            dasm_put(Dst, 168, Dt12([reg_a]));
#line 473 "src/jit/emit_x64.dasc"
        } else {
            // all others in rax
            //| mov WORK[reg_a], rax;
            dasm_put(Dst, 369, Dt12([reg_a]));
#line 476 "src/jit/emit_x64.dasc"
        }
        break;
    }
    case MVM_OP_inc_i: {
         MVMint32 reg = ins->operands[0].reg.orig;
         //| inc qword WORK[reg];
         dasm_put(Dst, 374, Dt12([reg]));
#line 482 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_dec_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        //| dec qword WORK[reg];
        dasm_put(Dst, 380, Dt12([reg]));
#line 487 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_add_n:
    case MVM_OP_sub_n:
    case MVM_OP_mul_n:
    case MVM_OP_div_n: {
        MVMint16 reg_a = ins->operands[0].reg.orig;
        MVMint16 reg_b = ins->operands[1].reg.orig;
        MVMint16 reg_c = ins->operands[2].reg.orig;
        /* Copying data to xmm (floating point) registers requires
         * a special move instruction */
        //| movsd xmm0, qword WORK[reg_b];
        dasm_put(Dst, 386, Dt12([reg_b]));
#line 499 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_n:
            //| addsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 393, Dt12([reg_c]));
#line 502 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_n:
            //| subsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 400, Dt12([reg_c]));
#line 505 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_n:
            //| mulsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 407, Dt12([reg_c]));
#line 508 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_n:
            //| divsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 414, Dt12([reg_c]));
#line 511 "src/jit/emit_x64.dasc"
            break;
        }
        //| movsd qword WORK[reg_a], xmm0;
        dasm_put(Dst, 421, Dt12([reg_a]));
#line 514 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_in: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert simple integer to double precision */
        //| cvtsi2sd xmm0, qword WORK[src];
        //| movsd qword WORK[dst], xmm0;
        dasm_put(Dst, 428, Dt12([src]), Dt12([dst]));
#line 522 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_ni: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert double precision to simple intege */
        //| cvttsd2si rax, qword WORK[src];
        //| mov WORK[dst], rax;
        dasm_put(Dst, 442, Dt12([src]), Dt12([dst]));
#line 530 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_eq_i:
    case MVM_OP_eqaddr:
    case MVM_OP_ne_i:
    case MVM_OP_lt_i:
    case MVM_OP_le_i:
    case MVM_OP_gt_i:
    case MVM_OP_ge_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 340, Dt12([reg_b]));
#line 543 "src/jit/emit_x64.dasc"
        /* comparison result in the setting bits in the rflags register */
        //| cmp rax, WORK[reg_c];
        dasm_put(Dst, 454, Dt12([reg_c]));
#line 545 "src/jit/emit_x64.dasc"
        /* copy the right comparison bit to the lower byte of the rax register */
        switch(ins->info->opcode) {
        case MVM_OP_eqaddr:
        case MVM_OP_eq_i:
            //| sete al;
            dasm_put(Dst, 459);
#line 550 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ne_i:
            //| setne al;
            dasm_put(Dst, 463);
#line 553 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_lt_i:
            //| setl al;
            dasm_put(Dst, 467);
#line 556 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_le_i:
            //| setle al;
            dasm_put(Dst, 471);
#line 559 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_gt_i:
            //| setg al;
            dasm_put(Dst, 475);
#line 562 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ge_i:
            //| setge al;
            dasm_put(Dst, 479);
#line 565 "src/jit/emit_x64.dasc"
            break;
        }
        /* zero extend al (lower byte) to rax (whole register) */
        //| movzx rax, al;
        //| mov WORK[reg_a], rax; 
        dasm_put(Dst, 483, Dt12([reg_a]));
#line 570 "src/jit/emit_x64.dasc"
        break;
    }
    default:
        MVM_exception_throw_adhoc(tc, "Can't JIT opcode");
    }
}

void MVM_jit_emit_call_c(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitCallC * call_spec, dasm_State **Dst) {
    int i;
    MVMJitAddr *args = call_spec->args;
    MVM_jit_log(tc, "emit c call <%d args>\n", call_spec->num_args);
    if (call_spec->has_vargs) {
        MVM_exception_throw_adhoc(tc, "JIT can't handle varargs yet");
    }
    /* first, add arguments */
    for (i = 0; i < call_spec->num_args; i++) {
        switch (args[i].base) {
        case MVM_JIT_ADDR_STACK: /* unlikely to use this now, though */
            //| addarg i, [rbp-args[i].idx];
            switch(i) {
                case 0:
            dasm_put(Dst, 492, -args[i].idx);
                    break;
                case 1:
            dasm_put(Dst, 497, -args[i].idx);
                    break;
                case 2:
            dasm_put(Dst, 502, -args[i].idx);
                    break;
                case 3:
            dasm_put(Dst, 507, -args[i].idx);
                    break;
                case 4:
            dasm_put(Dst, 512, -args[i].idx);
                    break;
                case 5:
            dasm_put(Dst, 517, -args[i].idx);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 590 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_ADDR_INTERP:
            MVM_jit_log(tc, "emit interp call arg %d %d \n", i, args[i].idx);
            switch (args[i].idx) {
            case MVM_JIT_INTERP_TC:
                //| addarg i, TC;
                switch(i) {
                    case 0:
                dasm_put(Dst, 303);
                        break;
                    case 1:
                dasm_put(Dst, 522);
                        break;
                    case 2:
                dasm_put(Dst, 527);
                        break;
                    case 3:
                dasm_put(Dst, 532);
                        break;
                    case 4:
                dasm_put(Dst, 537);
                        break;
                    case 5:
                dasm_put(Dst, 542);
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 596 "src/jit/emit_x64.dasc"
                 break;
            case MVM_JIT_INTERP_FRAME:
                //| addarg i, TC->cur_frame;
                switch(i) {
                    case 0:
                dasm_put(Dst, 547, Dt11(->cur_frame));
                        break;
                    case 1:
                dasm_put(Dst, 552, Dt11(->cur_frame));
                        break;
                    case 2:
                dasm_put(Dst, 557, Dt11(->cur_frame));
                        break;
                    case 3:
                dasm_put(Dst, 109, Dt11(->cur_frame));
                        break;
                    case 4:
                dasm_put(Dst, 562, Dt11(->cur_frame));
                        break;
                    case 5:
                dasm_put(Dst, 567, Dt11(->cur_frame));
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 599 "src/jit/emit_x64.dasc"
                break;
            case MVM_JIT_INTERP_CU:
                //| addarg i, CU;
                switch(i) {
                    case 0:
                dasm_put(Dst, 572);
                        break;
                    case 1:
                dasm_put(Dst, 577);
                        break;
                    case 2:
                dasm_put(Dst, 582);
                        break;
                    case 3:
                dasm_put(Dst, 587);
                        break;
                    case 4:
                dasm_put(Dst, 592);
                        break;
                    case 5:
                dasm_put(Dst, 596);
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 602 "src/jit/emit_x64.dasc"
                break;
            }
            break;
        case MVM_JIT_ADDR_REG:
            //| addarg i, WORK[args[i].idx];
            switch(i) {
                case 0:
            dasm_put(Dst, 601, Dt12([args[i].idx]));
                    break;
                case 1:
            dasm_put(Dst, 606, Dt12([args[i].idx]));
                    break;
                case 2:
            dasm_put(Dst, 611, Dt12([args[i].idx]));
                    break;
                case 3:
            dasm_put(Dst, 616, Dt12([args[i].idx]));
                    break;
                case 4:
            dasm_put(Dst, 621, Dt12([args[i].idx]));
                    break;
                case 5:
            dasm_put(Dst, 626, Dt12([args[i].idx]));
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 607 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_ADDR_REG_F:
            //| addarg_f i, WORK[args[i].idx];
            switch(i) {
                case 0:
            dasm_put(Dst, 386, Dt12([args[i].idx]));
                    break;
                case 1:
            dasm_put(Dst, 631, Dt12([args[i].idx]));
                    break;
                case 2:
            dasm_put(Dst, 638, Dt12([args[i].idx]));
                    break;
                case 3:
            dasm_put(Dst, 645, Dt12([args[i].idx]));
                    break;
                case 4:
            dasm_put(Dst, 652, Dt12([args[i].idx]));
                    break;
                case 5:
            dasm_put(Dst, 659, Dt12([args[i].idx]));
                    break;
                case 6:
            dasm_put(Dst, 666, Dt12([args[i].idx]));
                    break;
                case 7:
            dasm_put(Dst, 673, Dt12([args[i].idx]));
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 610 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_ADDR_LITERAL:
            //| addarg i, args[i].idx;
            switch(i) {
                case 0:
            dasm_put(Dst, 680, args[i].idx);
                    break;
                case 1:
            dasm_put(Dst, 685, args[i].idx);
                    break;
                case 2:
            dasm_put(Dst, 690, args[i].idx);
                    break;
                case 3:
            dasm_put(Dst, 695, args[i].idx);
                    break;
                case 4:
            dasm_put(Dst, 700, args[i].idx);
                    break;
                case 5:
            dasm_put(Dst, 705, args[i].idx);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 613 "src/jit/emit_x64.dasc"
            break;
        }
    }
    /* Emit the call. I think we should be able to do something smarter than
     * store the constant into the bytecode, like a data segment. But I'm
     * not sure. */
     //| callp call_spec->func_ptr
     dasm_put(Dst, 148, (unsigned int)((uintptr_t)call_spec->func_ptr), (unsigned int)(((uintptr_t)call_spec->func_ptr)>>32));
#line 620 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_branch(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitBranch * branch, dasm_State **Dst) {
    MVMSpeshIns *ins = branch->ins;
    MVMint32 name = branch->dest.name;
    if (ins == NULL || ins->info->opcode == MVM_OP_goto) {
        MVM_jit_log(tc, "emit jump to label %d\n", name);
        if (name == MVM_JIT_BRANCH_EXIT) {
            //| jmp ->exit
            dasm_put(Dst, 710);
#line 630 "src/jit/emit_x64.dasc"
        } else {
            //| jmp =>(name)
            dasm_put(Dst, 715, (name));
#line 632 "src/jit/emit_x64.dasc"
        }
    } else {
        MVMint16 reg = ins->operands[0].reg.orig;
        MVM_jit_log(tc, "emit branch <%s> to label %d\n",
                    ins->info->name, name);
        switch(ins->info->opcode) {
        case MVM_OP_if_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jnz =>(name); // jump to dynamic label
            dasm_put(Dst, 719, Dt12([reg]), (name));
#line 642 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_unless_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jz =>(name);
            dasm_put(Dst, 730, Dt12([reg]), (name));
#line 647 "src/jit/emit_x64.dasc"
            break;
        default:
            MVM_exception_throw_adhoc(tc, "JIT: Can't handle conditional <%s>",
                                      ins->info->name);
        }
    }
}

void MVM_jit_emit_label(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitLabel *label, dasm_State **Dst) {
    //| =>(label->name):
    dasm_put(Dst, 741, (label->name));
#line 658 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_rvh(MVMThreadContext *tc, MVMJitGraph *jg,
                      MVMJitRVH *rvh, dasm_State **Dst) {
    switch(rvh->mode) {
    case MVM_JIT_RV_VAL_TO_REG:
        //| mov WORK[rvh->addr.idx], RV;
        dasm_put(Dst, 369, Dt12([rvh->addr.idx]));
#line 665 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_VAL_TO_REG_F:
        //| movsd qword WORK[rvh->addr.idx], RVF;
        dasm_put(Dst, 421, Dt12([rvh->addr.idx]));
#line 668 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_REF_TO_REG:
        //| mov TMP1, [RV]; // maybe add an offset?
        //| mov WORK[rvh->addr.idx], TMP1;
        dasm_put(Dst, 743, Dt12([rvh->addr.idx]));
#line 672 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_REG_TO_PTR:
        //| mov TMP1, WORK[rvh->addr.idx];
        //| mov [RV], TMP1;
        dasm_put(Dst, 751, Dt12([rvh->addr.idx]));
#line 676 "src/jit/emit_x64.dasc"
        break;
    }
}

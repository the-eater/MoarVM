MVMObject * MVM_thread_new(MVMThreadContext *tc, MVMObject *invokee, MVMint64 app_lifetime);
void MVM_thread_run(MVMThreadContext *tc, MVMObject *thread);
void MVM_thread_join(MVMThreadContext *tc, MVMObject *thread);
MVMint64 MVM_thread_id(MVMThreadContext *tc, MVMObject *thread);
void MVM_thread_yield(MVMThreadContext *tc);
MVMObject * MVM_thread_current(MVMThreadContext *tc);
void MVM_thread_cleanup_threads_list(MVMThreadContext *tc, MVMThread **head);
void MVM_thread_join_foreground(MVMThreadContext *tc);

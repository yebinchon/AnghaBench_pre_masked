
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int redis; } ;
struct conn {int proxy; int (* ref ) (struct conn*,void*) ;int * dequeue_outq; int * enqueue_outq; int * dequeue_inq; int * enqueue_inq; int unref; int * active; int close; int * send_done; int * send_next; int * send; int * recv_done; int * recv_next; int recv; int redis; } ;


 int VAR_0 ;
 struct conn* FUNC_0 () ;
 int FUNC_1 (int ,char*,struct conn*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct conn*,void*) ;
 int VAR_3 ;
 int FUNC_3 (struct conn*,void*) ;

struct conn *
FUNC_4(void *VAR_4)
{
    struct server_pool *VAR_5 = VAR_4;
    struct conn *VAR_6;

    VAR_6 = FUNC_0();
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6->redis = VAR_5->redis;

    VAR_6->proxy = 1;

    VAR_6->recv = VAR_2;
    VAR_6->recv_next = ((void*)0);
    VAR_6->recv_done = ((void*)0);

    VAR_6->send = ((void*)0);
    VAR_6->send_next = ((void*)0);
    VAR_6->send_done = ((void*)0);

    VAR_6->close = VAR_1;
    VAR_6->active = ((void*)0);

    VAR_6->ref = FUNC_2;
    VAR_6->unref = VAR_3;

    VAR_6->enqueue_inq = ((void*)0);
    VAR_6->dequeue_inq = ((void*)0);
    VAR_6->enqueue_outq = ((void*)0);
    VAR_6->dequeue_outq = ((void*)0);

    VAR_6->ref(VAR_6, VAR_4);

    FUNC_1(VAR_0, "get conn %p proxy %d", VAR_6, VAR_6->proxy);

    return VAR_6;
}

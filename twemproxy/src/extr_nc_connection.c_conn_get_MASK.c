
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {int redis; int client; int (* ref ) (struct conn*,void*) ;int * swallow_msg; int * post_connect; int dequeue_outq; int enqueue_outq; int * dequeue_inq; int * enqueue_inq; int unref; int active; int close; int send_done; int send_next; void* send; int recv_done; int recv_next; void* recv; } ;


 int VAR_0 ;
 struct conn* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct conn*,void*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,struct conn*,int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (struct conn*,void*) ;
 int VAR_27 ;
 int FUNC_4 (struct conn*,void*) ;

struct conn *
FUNC_5(void *VAR_28, bool VAR_29, bool VAR_30)
{
    struct conn *VAR_31;

    VAR_31 = FUNC_0();
    if (VAR_31 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_31->redis = VAR_30 ? 1 : 0;

    VAR_31->client = VAR_29 ? 1 : 0;

    if (VAR_31->client) {




        VAR_31->recv = VAR_6;
        VAR_31->recv_next = VAR_14;
        VAR_31->recv_done = VAR_13;

        VAR_31->send = VAR_7;
        VAR_31->send_next = VAR_24;
        VAR_31->send_done = VAR_23;

        VAR_31->close = VAR_2;
        VAR_31->active = VAR_1;

        VAR_31->ref = FUNC_1;
        VAR_31->unref = VAR_3;

        VAR_31->enqueue_inq = ((void*)0);
        VAR_31->dequeue_inq = ((void*)0);
        VAR_31->enqueue_outq = VAR_12;
        VAR_31->dequeue_outq = VAR_11;
        VAR_31->post_connect = ((void*)0);
        VAR_31->swallow_msg = ((void*)0);

        VAR_8++;
    } else {




        VAR_31->recv = VAR_6;
        VAR_31->recv_next = VAR_22;
        VAR_31->recv_done = VAR_21;

        VAR_31->send = VAR_7;
        VAR_31->send_next = VAR_16;
        VAR_31->send_done = VAR_15;

        VAR_31->close = VAR_26;
        VAR_31->active = VAR_25;

        VAR_31->ref = FUNC_3;
        VAR_31->unref = VAR_27;

        VAR_31->enqueue_inq = VAR_19;
        VAR_31->dequeue_inq = VAR_17;
        VAR_31->enqueue_outq = VAR_20;
        VAR_31->dequeue_outq = VAR_18;
        if (VAR_30) {
          VAR_31->post_connect = VAR_9;
          VAR_31->swallow_msg = VAR_10;
        } else {
          VAR_31->post_connect = VAR_4;
          VAR_31->swallow_msg = VAR_5;
        }
    }

    VAR_31->ref(VAR_31, VAR_28);
    FUNC_2(VAR_0, "get conn %p client %d", VAR_31, VAR_31->client);

    return VAR_31;
}

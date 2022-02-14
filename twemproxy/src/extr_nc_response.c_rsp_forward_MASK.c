
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msg {int done; struct conn* owner; int (* pre_coalesce ) (struct msg*) ;struct msg* peer; scalar_t__ request; int mlen; } ;
struct context {int evb; } ;
struct conn {int owner; int err; int omsg_q; int proxy; scalar_t__ client; int (* dequeue_outq ) (struct context*,struct conn*,struct msg*) ;} ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct msg* FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct conn*) ;
 scalar_t__ FUNC_3 (struct conn*,struct msg*) ;
 int FUNC_4 (struct context*,int ,struct msg*,int ) ;
 int FUNC_5 (struct context*,struct conn*) ;
 int FUNC_6 (struct context*,struct conn*,struct msg*) ;
 int FUNC_7 (struct msg*) ;

__attribute__((used)) static void
FUNC_8(struct context *VAR_2, struct conn *VAR_3, struct msg *VAR_4)
{
    rstatus_t VAR_5;
    struct msg *VAR_6;
    struct conn *VAR_7;
    uint32_t VAR_8;

    FUNC_0(!VAR_3->client && !VAR_3->proxy);
    VAR_8 = VAR_4->mlen;


    FUNC_5(VAR_2, VAR_3);


    VAR_6 = FUNC_1(&VAR_3->omsg_q);
    FUNC_0(VAR_6 != ((void*)0) && VAR_6->peer == ((void*)0));
    FUNC_0(VAR_6->request && !VAR_6->done);

    VAR_3->dequeue_outq(VAR_2, VAR_3, VAR_6);
    VAR_6->done = 1;


    VAR_6->peer = VAR_4;
    VAR_4->peer = VAR_6;

    VAR_4->pre_coalesce(VAR_4);

    VAR_7 = VAR_6->owner;
    FUNC_0(VAR_7->client && !VAR_7->proxy);

    if (FUNC_3(VAR_7, FUNC_1(&VAR_7->omsg_q))) {
        VAR_5 = FUNC_2(VAR_2->evb, VAR_7);
        if (VAR_5 != VAR_0) {
            VAR_7->err = VAR_1;
        }
    }

    FUNC_4(VAR_2, VAR_3->owner, VAR_4, VAR_8);
}

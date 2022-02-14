
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int ncontinuum; } ;
struct msg_tqh {int dummy; } ;
struct msg {int request; scalar_t__ (* reply ) (struct msg*) ;scalar_t__ (* fragment ) (struct msg*,int ,struct msg_tqh*) ;int noreply; scalar_t__ noforward; struct conn* owner; } ;
struct context {int evb; } ;
struct conn {int (* enqueue_outq ) (struct context*,struct conn*,struct msg*) ;struct server_pool* owner; void* err; struct msg* rmsg; int proxy; scalar_t__ client; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct msg_tqh*) ;
 struct msg* FUNC_2 (struct msg_tqh*) ;
 int FUNC_3 (struct msg_tqh*) ;
 struct msg* FUNC_4 (struct msg*,int ) ;
 int FUNC_5 (struct msg_tqh*,struct msg*,int ) ;
 void* VAR_1 ;
 scalar_t__ FUNC_6 (int ,struct conn*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct context*,struct conn*,struct msg*) ;
 int FUNC_8 (struct context*,struct conn*,struct msg*) ;
 int FUNC_9 (struct context*,struct conn*,struct msg*) ;
 scalar_t__ FUNC_10 (struct context*,struct conn*,struct msg*) ;
 scalar_t__ FUNC_11 (struct msg*) ;
 scalar_t__ FUNC_12 (struct msg*,int ,struct msg_tqh*) ;
 int FUNC_13 (struct context*,struct conn*,struct msg*) ;
 int FUNC_14 (struct context*,struct conn*,struct msg*) ;

void
FUNC_15(struct context *VAR_3, struct conn *VAR_4, struct msg *VAR_5,
              struct msg *VAR_6)
{
    rstatus_t VAR_7;
    struct server_pool *VAR_8;
    struct msg_tqh VAR_9;
    struct msg *VAR_10;
    struct msg *VAR_11;

    FUNC_0(VAR_4->client && !VAR_4->proxy);
    FUNC_0(VAR_5->request);
    FUNC_0(VAR_5->owner == VAR_4);
    FUNC_0(VAR_4->rmsg == VAR_5);
    FUNC_0(VAR_6 == ((void*)0) || VAR_6->request);


    VAR_4->rmsg = VAR_6;

    if (FUNC_7(VAR_3, VAR_4, VAR_5)) {
        return;
    }

    if (VAR_5->noforward) {
        VAR_7 = FUNC_10(VAR_3, VAR_4, VAR_5);
        if (VAR_7 != VAR_0) {
            VAR_4->err = VAR_1;
            return;
        }

        VAR_7 = VAR_5->reply(VAR_5);
        if (VAR_7 != VAR_0) {
            VAR_4->err = VAR_1;
            return;
        }

        VAR_7 = FUNC_6(VAR_3->evb, VAR_4);
        if (VAR_7 != VAR_0) {
            VAR_4->err = VAR_1;
        }

        return;
    }


    VAR_8 = VAR_4->owner;
    FUNC_3(&VAR_9);
    VAR_7 = VAR_5->fragment(VAR_5, VAR_8->ncontinuum, &VAR_9);
    if (VAR_7 != VAR_0) {
        if (!VAR_5->noreply) {
            VAR_4->enqueue_outq(VAR_3, VAR_4, VAR_5);
        }
        FUNC_9(VAR_3, VAR_4, VAR_5);
    }


    if (FUNC_1(&VAR_9)) {
        FUNC_8(VAR_3, VAR_4, VAR_5);
        return;
    }

    VAR_7 = FUNC_10(VAR_3, VAR_4, VAR_5);
    if (VAR_7 != VAR_0) {
        if (!VAR_5->noreply) {
            VAR_4->enqueue_outq(VAR_3, VAR_4, VAR_5);
        }
        FUNC_9(VAR_3, VAR_4, VAR_5);
    }

    for (VAR_10 = FUNC_2(&VAR_9); VAR_10 != ((void*)0); VAR_10 = VAR_11) {
        VAR_11 = FUNC_4(VAR_10, VAR_2);

        FUNC_5(&VAR_9, VAR_10, VAR_2);
        FUNC_8(VAR_3, VAR_4, VAR_10);
    }

    FUNC_0(FUNC_1(&VAR_9));
    return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct msg {scalar_t__ frag_id; scalar_t__ err; struct msg* peer; scalar_t__ request; struct conn* owner; } ;
struct context {int dummy; } ;
struct conn {int redis; int (* dequeue_outq ) (struct context*,struct conn*,struct msg*) ;int proxy; scalar_t__ client; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (int) ;
 struct msg* FUNC_1 (struct msg*,int ) ;
 int VAR_0 ;
 struct msg* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct conn*,struct msg*) ;
 int FUNC_4 (struct msg*) ;
 int FUNC_5 (struct msg*) ;
 int FUNC_6 (struct context*,struct conn*,struct msg*) ;

__attribute__((used)) static struct msg *
FUNC_7(struct context *VAR_1, struct conn *VAR_2, struct msg *VAR_3)
{
    struct msg *VAR_4;
    struct msg *VAR_5, *VAR_6;
    uint64_t VAR_7;
    err_t VAR_8;

    FUNC_0(VAR_2->client && !VAR_2->proxy);
    FUNC_0(VAR_3->request && FUNC_3(VAR_2, VAR_3));
    FUNC_0(VAR_3->owner == VAR_2);

    VAR_7 = VAR_3->frag_id;
    if (VAR_7 != 0) {
        for (VAR_8 = 0, VAR_5 = FUNC_1(VAR_3, VAR_0);
             VAR_5 != ((void*)0) && VAR_5->frag_id == VAR_7;
             VAR_5 = VAR_6) {
            VAR_6 = FUNC_1(VAR_5, VAR_0);


            VAR_2->dequeue_outq(VAR_1, VAR_2, VAR_5);
            if (VAR_8 == 0 && VAR_5->err != 0) {
                VAR_8 = VAR_5->err;
            }

            FUNC_4(VAR_5);
        }
    } else {
        VAR_8 = VAR_3->err;
    }

    VAR_4 = VAR_3->peer;
    if (VAR_4 != ((void*)0)) {
        FUNC_0(!VAR_4->request && VAR_4->peer == VAR_3);
        VAR_3->peer = ((void*)0);
        VAR_4->peer = ((void*)0);
        FUNC_5(VAR_4);
    }

    return FUNC_2(VAR_2->redis, VAR_8);
}

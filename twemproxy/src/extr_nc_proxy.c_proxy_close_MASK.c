
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int dummy; } ;
struct conn {int sd; int (* unref ) (struct conn*) ;int omsg_q; int imsg_q; int * smsg; int * rmsg; scalar_t__ proxy; int client; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct conn*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct conn*) ;
 int FUNC_7 (struct conn*) ;

void
FUNC_8(struct context *VAR_1, struct conn *VAR_2)
{
    rstatus_t VAR_3;

    FUNC_0(!VAR_2->client && VAR_2->proxy);

    if (VAR_2->sd < 0) {
        VAR_2->unref(VAR_2);
        FUNC_3(VAR_2);
        return;
    }

    FUNC_0(VAR_2->rmsg == ((void*)0));
    FUNC_0(VAR_2->smsg == ((void*)0));
    FUNC_0(FUNC_1(&VAR_2->imsg_q));
    FUNC_0(FUNC_1(&VAR_2->omsg_q));

    VAR_2->unref(VAR_2);

    VAR_3 = FUNC_2(VAR_2->sd);
    if (VAR_3 < 0) {
        FUNC_4("close p %d failed, ignored: %s", VAR_2->sd, FUNC_5(VAR_0));
    }
    VAR_2->sd = -1;

    FUNC_3(VAR_2);
}

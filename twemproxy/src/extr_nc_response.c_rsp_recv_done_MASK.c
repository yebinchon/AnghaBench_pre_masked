
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int request; struct conn* owner; } ;
struct context {int dummy; } ;
struct conn {struct msg* rmsg; int proxy; int client; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct context*,struct conn*,struct msg*) ;
 int FUNC_2 (struct context*,struct conn*,struct msg*) ;

void
FUNC_3(struct context *VAR_0, struct conn *VAR_1, struct msg *VAR_2,
              struct msg *VAR_3)
{
    FUNC_0(!VAR_1->client && !VAR_1->proxy);
    FUNC_0(VAR_2 != ((void*)0) && VAR_1->rmsg == VAR_2);
    FUNC_0(!VAR_2->request);
    FUNC_0(VAR_2->owner == VAR_1);
    FUNC_0(VAR_3 == ((void*)0) || !VAR_3->request);


    VAR_1->rmsg = VAR_3;

    if (FUNC_1(VAR_0, VAR_1, VAR_2)) {
        return;
    }

    FUNC_2(VAR_0, VAR_1, VAR_2);
}

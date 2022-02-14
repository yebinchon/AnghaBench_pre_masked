
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int request; struct msg* peer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct msg*) ;
 int FUNC_2 (struct msg*) ;
 int FUNC_3 (struct msg*) ;
 int FUNC_4 (struct msg*) ;

void
FUNC_5(struct msg *VAR_0)
{
    struct msg *VAR_1;

    FUNC_0(VAR_0->request);

    FUNC_3(VAR_0);

    VAR_1 = VAR_0->peer;
    if (VAR_1 != ((void*)0)) {
        FUNC_0(!VAR_1->request && VAR_1->peer == VAR_0);
        VAR_0->peer = ((void*)0);
        VAR_1->peer = ((void*)0);
        FUNC_4(VAR_1);
    }

    FUNC_2(VAR_0);

    FUNC_1(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int type; scalar_t__ ferror; scalar_t__ error; struct msg* frag_owner; scalar_t__ request; struct msg* peer; } ;


 int FUNC_0 (int) ;



 int FUNC_1 () ;
 void FUNC_2 (struct msg*) ;
 void FUNC_3 (struct msg*) ;
 void FUNC_4 (struct msg*) ;

void
FUNC_5(struct msg *VAR_0)
{
    struct msg *VAR_1 = VAR_0->peer;

    FUNC_0(!VAR_1->request);
    FUNC_0(VAR_0->request && (VAR_0->frag_owner == VAR_0));
    if (VAR_0->error || VAR_0->ferror) {

        return;
    }

    switch (VAR_0->type) {
    case 129:
        return FUNC_3(VAR_0);

    case 130:
        return FUNC_2(VAR_0);

    case 128:
        return FUNC_4(VAR_0);

    default:
        FUNC_1();
    }
}

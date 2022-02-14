
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int type; int request; } ;


 int FUNC_0 (int) ;




bool
FUNC_1(struct msg *VAR_0)
{
    FUNC_0(!VAR_0->request);

    switch (VAR_0->type) {
    case 128:
    case 130:
    case 129:
        return 1;

    default:
        break;
    }

    return 0;
}

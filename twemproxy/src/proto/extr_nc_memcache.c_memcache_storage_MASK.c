
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int type; } ;
__attribute__((used)) static bool
FUNC_0(struct msg *VAR_0)
{
    switch (VAR_0->type) {
    case 128:
    case 131:
    case 133:
    case 129:
    case 132:
    case 130:
        return 1;

    default:
        break;
    }

    return 0;
}

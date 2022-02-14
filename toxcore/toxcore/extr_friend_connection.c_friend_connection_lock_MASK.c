
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_count; } ;
typedef int Friend_Connections ;
typedef TYPE_1__ Friend_Conn ;


 TYPE_1__* FUNC_0 (int *,int) ;

int FUNC_1(Friend_Connections *VAR_0, int VAR_1)
{
    Friend_Conn *VAR_2 = FUNC_0(VAR_0, VAR_1);

    if (!VAR_2)
        return -1;

    ++VAR_2->lock_count;
    return 0;
}

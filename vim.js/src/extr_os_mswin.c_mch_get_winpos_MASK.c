
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int top; } ;
typedef TYPE_1__ RECT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2(int *VAR_2, int *VAR_3)
{
    RECT VAR_4;

    FUNC_0();
    FUNC_1(VAR_1, &VAR_4);
    *VAR_2 = VAR_4.left;
    *VAR_3 = VAR_4.top;
    return VAR_0;
}

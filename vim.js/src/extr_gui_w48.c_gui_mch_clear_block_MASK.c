
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* bottom; void* right; void* top; void* left; } ;
typedef TYPE_1__ RECT ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(
    int VAR_1,
    int VAR_2,
    int VAR_3,
    int VAR_4)
{
    RECT VAR_5;






    VAR_5.left = FUNC_0(VAR_2);
    VAR_5.top = FUNC_1(VAR_1);
    VAR_5.right = FUNC_0(VAR_4 + 1) + (VAR_4 == VAR_0 - 1);
    VAR_5.bottom = FUNC_1(VAR_3 + 1);
    FUNC_2(&VAR_5);
}

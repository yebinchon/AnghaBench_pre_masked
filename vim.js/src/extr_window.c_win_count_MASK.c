
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* w_next; } ;
typedef TYPE_1__ win_T ;


 TYPE_1__* VAR_0 ;

int
FUNC_0()
{
    win_T *VAR_1;
    int VAR_2 = 0;

    for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->w_next)
 ++VAR_2;
    return VAR_2;
}

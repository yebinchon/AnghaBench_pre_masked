
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* cp_prev; struct TYPE_3__* cp_next; } ;
typedef TYPE_1__ compl_T ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0()
{
    compl_T *VAR_1;
    int VAR_2 = 0;

    if (VAR_0 != ((void*)0))
    {



 VAR_1 = VAR_0;

 while (VAR_1->cp_next != ((void*)0) && VAR_1->cp_next != VAR_0)
 {
     VAR_1 = VAR_1->cp_next;
     ++VAR_2;
 }
 VAR_1->cp_next = VAR_0;
 VAR_0->cp_prev = VAR_1;
    }
    return VAR_2;
}

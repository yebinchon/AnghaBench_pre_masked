
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int win_T ;
struct TYPE_5__ {TYPE_3__* tab; } ;
typedef TYPE_1__ TabPageObject ;
struct TYPE_6__ {int * tp_firstwin; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_3__* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static win_T *
FUNC_1(TabPageObject *VAR_2)
{
    if (VAR_2)
    {
 if (FUNC_0(VAR_2))
     return ((void*)0);


 else if (VAR_2->tab == VAR_0)
     return VAR_1;
 else
     return VAR_2->tab->tp_firstwin;
    }
    else
 return VAR_1;
}

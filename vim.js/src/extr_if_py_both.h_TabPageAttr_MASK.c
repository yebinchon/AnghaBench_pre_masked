
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tab; } ;
typedef TYPE_1__ TabPageObject ;
struct TYPE_8__ {int tp_curwin; int tp_vars; } ;
typedef int PyObject ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (long) ;
 int VAR_0 ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ,TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_7(TabPageObject *VAR_3, char *VAR_4)
{
    if (FUNC_6(VAR_4, "windows") == 0)
 return FUNC_3(VAR_3);
    else if (FUNC_6(VAR_4, "number") == 0)
 return FUNC_2((long) FUNC_5(VAR_3->tab));
    else if (FUNC_6(VAR_4, "vars") == 0)
 return FUNC_0(VAR_3->tab->tp_vars);
    else if (FUNC_6(VAR_4, "window") == 0)
    {


 if (VAR_3->tab == VAR_1)
     return FUNC_4(VAR_2, VAR_1);
 else
     return FUNC_4(VAR_3->tab->tp_curwin, VAR_3->tab);
    }
    else if (FUNC_6(VAR_4, "__members__") == 0)
 return FUNC_1(((void*)0), VAR_0);
    return ((void*)0);
}

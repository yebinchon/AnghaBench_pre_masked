
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* tp_prev_which_scrollbars; int tp_ch_used; int tp_diff_invalid; int tp_winvar; int * tp_vars; } ;
typedef TYPE_1__ tabpage_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static tabpage_T *
FUNC_4()
{
    tabpage_T *VAR_3;





    VAR_3 = (tabpage_T *)FUNC_0((unsigned)sizeof(tabpage_T));
    if (VAR_3 == ((void*)0))
 return ((void*)0);
    VAR_3->tp_ch_used = VAR_2;

    return VAR_3;
}

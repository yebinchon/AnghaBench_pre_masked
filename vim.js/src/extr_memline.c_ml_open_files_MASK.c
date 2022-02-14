
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ b_changed; int b_p_ro; struct TYPE_4__* b_next; } ;
typedef TYPE_1__ buf_T ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1()
{
    buf_T *VAR_1;

    for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->b_next)
 if (!VAR_1->b_p_ro || VAR_1->b_changed)
     FUNC_0(VAR_1);
}

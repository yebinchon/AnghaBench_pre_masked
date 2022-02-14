
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_father; struct TYPE_4__* p_last; struct TYPE_4__* p_next; struct TYPE_4__* p_first; } ;
typedef TYPE_1__ MP4_Box_t ;



__attribute__((used)) static void FUNC_0( MP4_Box_t *VAR_0, MP4_Box_t *VAR_1 )
{
    if( !VAR_0->p_first )
            VAR_0->p_first = VAR_1;
    else
            VAR_0->p_last->p_next = VAR_1;
    VAR_0->p_last = VAR_1;
    VAR_1->p_father = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** pp_append; } ;
struct TYPE_6__ {struct TYPE_6__* p_next; TYPE_1__ specifiers; } ;
typedef TYPE_2__ vlc_css_selector_t ;



void
FUNC_0( vlc_css_selector_t *VAR_0, vlc_css_selector_t *VAR_1 )
{
    *VAR_0->specifiers.pp_append = VAR_1;
    while(VAR_1)
    {
        VAR_0->specifiers.pp_append = &VAR_1->p_next;
        VAR_1 = VAR_1->p_next;
    }
}

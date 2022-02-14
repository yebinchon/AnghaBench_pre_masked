
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_first; } ;
struct TYPE_6__ {struct TYPE_6__* p_matchsel; TYPE_1__ specifiers; struct TYPE_6__* psz_name; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ vlc_css_selector_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1( vlc_css_selector_t *VAR_0 )
{
    while( VAR_0 )
    {
        vlc_css_selector_t *VAR_1 = VAR_0->p_next;
        FUNC_0( VAR_0->psz_name );
        FUNC_1( VAR_0->specifiers.p_first );
        FUNC_1( VAR_0->p_matchsel );
        FUNC_0( VAR_0 );
        VAR_0 = VAR_1;
    }
}

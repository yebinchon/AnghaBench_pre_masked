
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_first; } ;
struct TYPE_5__ {int combinator; struct TYPE_5__* p_next; TYPE_1__ specifiers; struct TYPE_5__* p_matchsel; int psz_name; } ;
typedef TYPE_2__ vlc_css_selector_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1( const vlc_css_selector_t *VAR_0, int VAR_1 )
{
    while( VAR_0 )
    {
        for(int VAR_2=0;VAR_2<VAR_1;VAR_2++) FUNC_0(" "); FUNC_0("selector %c%s:\n", VAR_0->combinator, VAR_0->psz_name );
        FUNC_1( VAR_0->p_matchsel, VAR_1 + 1 );
        FUNC_1( VAR_0->specifiers.p_first, VAR_1 + 1 );
        VAR_0 = VAR_0->p_next;
    }
}

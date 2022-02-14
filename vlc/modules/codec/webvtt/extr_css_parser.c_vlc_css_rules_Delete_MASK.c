
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_declarations; int p_selectors; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ vlc_css_rule_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( vlc_css_rule_t *VAR_0 )
{
    while(VAR_0)
    {
        vlc_css_rule_t *VAR_1 = VAR_0->p_next;
        FUNC_2( VAR_0->p_selectors );
        FUNC_1( VAR_0->p_declarations );
        FUNC_0(VAR_0);
        VAR_0 = VAR_1;
    }
}

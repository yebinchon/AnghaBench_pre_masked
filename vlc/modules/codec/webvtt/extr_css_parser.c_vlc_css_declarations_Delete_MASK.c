
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* psz_property; int expr; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ vlc_css_declaration_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2( vlc_css_declaration_t *VAR_0 )
{
    while( VAR_0 )
    {
        vlc_css_declaration_t *VAR_1 = VAR_0->p_next;
        FUNC_1( VAR_0->expr );
        FUNC_0( VAR_0->psz_property );
        FUNC_0( VAR_0 );
        VAR_0 = VAR_1;
    }
}

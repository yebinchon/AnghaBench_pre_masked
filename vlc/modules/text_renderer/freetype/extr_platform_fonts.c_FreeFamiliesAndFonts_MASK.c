
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* psz_name; struct TYPE_5__* psz_fontfile; struct TYPE_5__* p_next; struct TYPE_5__* p_fonts; } ;
typedef TYPE_1__ vlc_font_t ;
typedef TYPE_1__ vlc_family_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( vlc_family_t *VAR_0 )
{
    if( VAR_0->p_next )
        FUNC_1( VAR_0->p_next );

    for( vlc_font_t *VAR_1 = VAR_0->p_fonts; VAR_1; )
    {
        vlc_font_t *VAR_2 = VAR_1->p_next;
        FUNC_0( VAR_1->psz_fontfile );
        FUNC_0( VAR_1 );
        VAR_1 = VAR_2;
    }

    FUNC_0( VAR_0->psz_name );
    FUNC_0( VAR_0 );
}

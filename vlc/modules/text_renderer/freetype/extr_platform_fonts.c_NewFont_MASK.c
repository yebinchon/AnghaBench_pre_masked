
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* psz_fontfile; int i_index; int b_bold; int b_italic; struct TYPE_8__* p_next; } ;
typedef TYPE_1__ vlc_font_t ;
struct TYPE_9__ {TYPE_1__* p_fonts; } ;
typedef TYPE_2__ vlc_family_t ;


 int FUNC_0 (TYPE_1__**,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

vlc_font_t *FUNC_4( char *VAR_0, int VAR_1,
                     bool VAR_2, bool VAR_3,
                     vlc_family_t *VAR_4 )
{
    vlc_font_t *VAR_5 = FUNC_1( 1, sizeof( *VAR_5 ) );

    if( FUNC_3( !VAR_5 ) )
    {
        FUNC_2( VAR_0 );
        return ((void*)0);
    }

    VAR_5->psz_fontfile = VAR_0;
    VAR_5->i_index = VAR_1;
    VAR_5->b_bold = VAR_2;
    VAR_5->b_italic = VAR_3;

    if( VAR_4 )
    {

        if( VAR_4->p_fonts
         && ( VAR_4->p_fonts->b_bold || VAR_4->p_fonts->b_italic )
         && !VAR_2 && !VAR_3 )
        {
            VAR_5->p_next = VAR_4->p_fonts;
            VAR_4->p_fonts = VAR_5;
        }
        else
            FUNC_0( &VAR_4->p_fonts, VAR_5 );
    }

    return VAR_5;
}

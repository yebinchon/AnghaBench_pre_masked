
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b_italic; int b_bold; struct TYPE_6__* p_next; } ;
typedef TYPE_1__ vlc_font_t ;
struct TYPE_7__ {TYPE_1__* p_fonts; } ;
typedef TYPE_2__ vlc_family_t ;
typedef scalar_t__ uni_char_t ;
typedef int filter_t ;
typedef scalar_t__ FT_Face ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static vlc_font_t *FUNC_2( filter_t *VAR_0, const vlc_family_t *VAR_1,
                                bool VAR_2, bool VAR_3, uni_char_t VAR_4 )
{
    int VAR_5 = 0;
    vlc_font_t *VAR_6 = VAR_1->p_fonts;

    for( vlc_font_t *VAR_7 = VAR_1->p_fonts; VAR_7; VAR_7 = VAR_7->p_next )
    {
        int VAR_8 = 0;

        if( VAR_4 )
        {
            FT_Face VAR_9 = FUNC_1( VAR_0, VAR_7 );
            if( VAR_9 && FUNC_0( VAR_9, VAR_4 ) )
                VAR_8 += 1000;
        }

        if( !!VAR_7->b_bold == !!VAR_2 )
            VAR_8 += 100;
        if( !!VAR_7->b_italic == !!VAR_3 )
            VAR_8 += 10;

        if( VAR_8 > VAR_5 )
        {
            VAR_6 = VAR_7;
            VAR_5 = VAR_8;
        }
    }

    return VAR_6;
}

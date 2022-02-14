
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_direction_set; scalar_t__ display; int i_direction; scalar_t__ font_style; } ;
typedef TYPE_1__ ttml_style_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2( const ttml_style_t *VAR_1, ttml_style_t *VAR_2 )
{
    if( VAR_1 && VAR_2 )
    {
        if( VAR_1->font_style )
        {
            if( VAR_2->font_style )
                FUNC_1( VAR_2->font_style, VAR_1->font_style, 1 );
            else
                VAR_2->font_style = FUNC_0( VAR_1->font_style );
        }

        if( VAR_1->b_direction_set )
        {
            VAR_2->b_direction_set = 1;
            VAR_2->i_direction = VAR_1->i_direction;
        }

        if( VAR_1->display != VAR_0 )
            VAR_2->display = VAR_1->display;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int i_background_color; int i_features; int i_font_color; int i_font_alpha; int i_font_size; scalar_t__ i_style_flags; int i_background_alpha; } ;
typedef TYPE_2__ text_style_t ;
struct TYPE_5__ {int i_extra; int * p_extra; } ;
struct TYPE_7__ {TYPE_1__ fmt_in; scalar_t__ p_sys; } ;
typedef TYPE_3__ decoder_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_5 )
{
    text_style_t *VAR_6 = (text_style_t *) VAR_5->p_sys;
    const uint8_t *VAR_7 = VAR_5->fmt_in.p_extra;

    if( VAR_5->fmt_in.i_extra < 32 )
        return;





    VAR_6->i_background_color = FUNC_1(&VAR_7[6]) >> 8;
    VAR_6->i_background_alpha = VAR_7[9];
    VAR_6->i_features |= VAR_1|VAR_0;




    VAR_6->i_style_flags = FUNC_0( VAR_7[24] );
    if( VAR_6->i_style_flags )
        VAR_6->i_features |= VAR_2;
    VAR_6->i_font_size = VAR_7[25];
    VAR_6->i_font_color = FUNC_1(&VAR_7[26]) >> 8;
    VAR_6->i_font_alpha = VAR_7[29];
    VAR_6->i_features |= VAR_4 | VAR_3;


}

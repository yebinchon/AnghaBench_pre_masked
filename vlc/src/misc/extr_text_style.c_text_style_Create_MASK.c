
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_font_color; int i_outline_color; int i_shadow_color; int i_background_color; int i_outline_width; int i_spacing; int e_wrapinfo; scalar_t__ i_shadow_width; void* i_background_alpha; void* i_shadow_alpha; void* i_outline_alpha; void* i_font_alpha; int i_font_size; int f_font_relsize; int i_style_flags; int i_features; int * psz_monofontname; int * psz_fontname; } ;
typedef TYPE_1__ text_style_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int) ;

text_style_t *FUNC_1( int VAR_7 )
{
    text_style_t *VAR_8 = FUNC_0( 1, sizeof(*VAR_8) );
    if( !VAR_8 )
        return ((void*)0);

    if( VAR_7 == VAR_4 )
        return VAR_8;


    VAR_8->psz_fontname = ((void*)0);
    VAR_8->psz_monofontname = ((void*)0);
    VAR_8->i_features = VAR_3;
    VAR_8->i_style_flags = VAR_5;
    VAR_8->f_font_relsize = VAR_2;
    VAR_8->i_font_size = VAR_1;
    VAR_8->i_font_color = 0xffffff;
    VAR_8->i_font_alpha = VAR_0;
    VAR_8->i_outline_color = 0x000000;
    VAR_8->i_outline_alpha = VAR_0;
    VAR_8->i_shadow_color = 0x808080;
    VAR_8->i_shadow_alpha = VAR_0;
    VAR_8->i_background_color = 0x000000;
    VAR_8->i_background_alpha = VAR_0;
    VAR_8->i_outline_width = 1;
    VAR_8->i_shadow_width = 0;
    VAR_8->i_spacing = -1;
    VAR_8->e_wrapinfo = VAR_6;

    return VAR_8;
}

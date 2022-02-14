
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_features; int i_background_color; int f_font_relsize; scalar_t__ i_font_size; int i_background_alpha; } ;
typedef TYPE_1__ text_style_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static text_style_t * FUNC_1()
{
    text_style_t *VAR_6 = FUNC_0(VAR_5);
    if(VAR_6)
    {
        VAR_6->i_features = VAR_4|VAR_2|VAR_3;

        VAR_6->i_background_alpha = VAR_0;
        VAR_6->i_background_color = 0x000000;
        VAR_6->i_font_size = 0;
        VAR_6->f_font_relsize = VAR_1;
    }
    return VAR_6;
}

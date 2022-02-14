
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_style; } ;
typedef TYPE_2__ stl_sg_t ;
struct TYPE_4__ {int i_background_color; int i_style_flags; int f_font_relsize; int i_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(stl_sg_t *VAR_4)
{
    if(VAR_4->p_style)
    {
        VAR_4->p_style->i_features &= ~VAR_3;
        VAR_4->p_style->i_background_color = 0x000000;
        VAR_4->p_style->f_font_relsize = VAR_0;
        VAR_4->p_style->i_style_flags &= ~(VAR_1|VAR_2);
    }
}

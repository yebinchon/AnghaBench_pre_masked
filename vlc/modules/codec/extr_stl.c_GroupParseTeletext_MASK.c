
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {TYPE_3__* p_style; } ;
typedef TYPE_1__ stl_sg_t ;
struct TYPE_5__ {int i_style_flags; int f_font_relsize; int i_background_color; int i_font_color; int i_features; } ;


 TYPE_3__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(stl_sg_t *VAR_5, uint8_t VAR_6)
{
    if(VAR_5->p_style == ((void*)0) &&
      !(VAR_5->p_style = FUNC_0()))
        return;




    static const uint32_t VAR_7[] =
    {
        0x000000,
        0xFF0000,
        0x00FF00,
        0xFFFF00,
        0x0000FF,
        0xFF00FF,
        0x00FFFF,
        0xFFFFFF,
    };


    VAR_5->p_style->i_style_flags |= VAR_0;

    switch(VAR_6)
    {
        case 0x0c:
            VAR_5->p_style->f_font_relsize = VAR_1;
            VAR_5->p_style->i_style_flags &= ~(VAR_2|VAR_3);
            break;

        case 0x0d:
            VAR_5->p_style->f_font_relsize = VAR_1 * 2;
            VAR_5->p_style->i_style_flags &= ~VAR_2;
            VAR_5->p_style->i_style_flags |= VAR_3;
            break;

        case 0x0e:
            VAR_5->p_style->f_font_relsize = VAR_1;
            VAR_5->p_style->i_style_flags &= ~VAR_3;
            VAR_5->p_style->i_style_flags |= VAR_2;
            break;

        case 0x0f:
            VAR_5->p_style->f_font_relsize = VAR_1 * 2;
            VAR_5->p_style->i_style_flags &= ~(VAR_2|VAR_3);
            break;

        case 0x1d:
            VAR_5->p_style->i_background_color = VAR_5->p_style->i_font_color;
            VAR_5->p_style->i_features &= ~VAR_4;
            break;

        case 0x1c:
            VAR_5->p_style->i_background_color = VAR_7[0];
            break;

        default:
            if(VAR_6 < 8)
            {
                VAR_5->p_style->i_font_color = VAR_7[VAR_6];
                VAR_5->p_style->i_features |= VAR_4;
            }


            break;
    }

}

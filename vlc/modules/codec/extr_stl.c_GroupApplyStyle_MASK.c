
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_3__* p_style; } ;
typedef TYPE_1__ stl_sg_t ;
struct TYPE_5__ {int i_style_flags; } ;


 TYPE_3__* FUNC_0 () ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(stl_sg_t *VAR_2, uint8_t VAR_3)
{
    if(VAR_2->p_style == ((void*)0) &&
      !(VAR_2->p_style = FUNC_0()))
        return;

    switch(VAR_3)
    {
        case 130:
            VAR_2->p_style->i_style_flags |= VAR_0;
            break;
        case 131:
            VAR_2->p_style->i_style_flags &= ~VAR_0;
            break;
        case 128:
            VAR_2->p_style->i_style_flags |= VAR_1;
            break;
        case 129:
            VAR_2->p_style->i_style_flags &= ~VAR_1;
            break;
        case 132:
        case 133:
        default:
            break;
    }
}

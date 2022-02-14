
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int i_font_size; int f_font_relsize; } ;
typedef TYPE_3__ text_style_t ;
struct TYPE_9__ {scalar_t__ i_height; } ;
struct TYPE_8__ {TYPE_2__ video; } ;
struct TYPE_11__ {TYPE_1__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_12__ {int i_scale; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;

int FUNC_0( filter_t *VAR_1, const text_style_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;

    int VAR_4 = VAR_0;
    if( VAR_2->i_font_size )
    {
        VAR_4 = VAR_2->i_font_size;
    }
    else if ( VAR_2->f_font_relsize )
    {
        VAR_4 = (int) VAR_1->fmt_out.video.i_height * VAR_2->f_font_relsize / 100;
    }

    if( VAR_3->i_scale != 100 )
        VAR_4 = VAR_4 * VAR_3->i_scale / 100;

    return VAR_4;
}

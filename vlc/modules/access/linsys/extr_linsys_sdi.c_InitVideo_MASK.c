
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_anc_size; int i_active_size; int i_width; int i_nb_lines; int i_frame_rate; int i_frame_rate_base; int i_height; int i_aspect; int b_hd; int b_vbi; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    int VAR_3 = (VAR_2->i_anc_size + VAR_2->i_active_size) * 4 / 5;
    VAR_2->i_width = (VAR_2->i_active_size - 5) * 4 / 10;
    if ( VAR_2->i_nb_lines == 625 )
    {

        VAR_2->i_frame_rate = 25;
        VAR_2->i_frame_rate_base = 1;
        VAR_2->i_height = 576;
        VAR_2->i_aspect = 4 * VAR_0 / 3;
        VAR_2->b_hd = 0;
    }
    else if ( VAR_2->i_nb_lines == 525 )
    {

        VAR_2->i_frame_rate = 30000;
        VAR_2->i_frame_rate_base = 1001;
        VAR_2->i_height = 480;
        VAR_2->i_aspect = 4 * VAR_0 / 3;
        VAR_2->b_hd = 0;
    }
    else if ( VAR_2->i_nb_lines == 1125 && VAR_3 == 2640 )
    {

        VAR_2->i_frame_rate = 25;
        VAR_2->i_frame_rate_base = 1;
        VAR_2->i_height = 1080;
        VAR_2->i_aspect = 16 * VAR_0 / 9;
        VAR_2->b_hd = 1;
    }
    else if ( VAR_2->i_nb_lines == 1125 && VAR_3 == 2200 )
    {

        VAR_2->i_frame_rate = 30000;
        VAR_2->i_frame_rate_base = 1001;
        VAR_2->i_height = 1080;
        VAR_2->i_aspect = 16 * VAR_0 / 9;
        VAR_2->b_hd = 1;
    }
    else if ( VAR_2->i_nb_lines == 750 && VAR_3 == 1980 )
    {

        VAR_2->i_frame_rate = 50;
        VAR_2->i_frame_rate_base = 1;
        VAR_2->i_height = 720;
        VAR_2->i_aspect = 16 * VAR_0 / 9;
        VAR_2->b_hd = 1;
    }
    else if ( VAR_2->i_nb_lines == 750 && VAR_3 == 1650 )
    {

        VAR_2->i_frame_rate = 60000;
        VAR_2->i_frame_rate_base = 1001;
        VAR_2->i_height = 720;
        VAR_2->i_aspect = 16 * VAR_0 / 9;
        VAR_2->b_hd = 1;
    }
    else
    {
        FUNC_0( VAR_1, "unable to determine video type" );

        VAR_2->i_frame_rate = 25;
        VAR_2->i_frame_rate_base = 1;
        VAR_2->i_height = VAR_2->i_nb_lines;
        VAR_2->i_aspect = 16 * VAR_0 / 9;
        VAR_2->b_hd = 1;
    }
    VAR_2->b_vbi = !VAR_2->b_hd;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_double_rate; int b_half_height; int b_use_frame_history; int b_custom_pts; } ;
struct deinterlace_ctx {int ** pp_history; scalar_t__ i_frame_offset; TYPE_2__* meta; TYPE_1__ settings; } ;
struct TYPE_4__ {int pi_nb_fields; int pb_top_field_first; int pi_date; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0( struct deinterlace_ctx *VAR_3 )
{
    VAR_3->settings.b_double_rate = 0;
    VAR_3->settings.b_half_height = 0;
    VAR_3->settings.b_use_frame_history = 0;
    VAR_3->settings.b_custom_pts = 0;

    VAR_3->meta[0].pi_date = VAR_2;
    VAR_3->meta[0].pi_nb_fields = 2;
    VAR_3->meta[0].pb_top_field_first = 1;
    for( int VAR_4 = 1; VAR_4 < VAR_1; VAR_4++ )
        VAR_3->meta[VAR_4] = VAR_3->meta[VAR_4-1];

    VAR_3->i_frame_offset = 0;

    for( int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
        VAR_3->pp_history[VAR_5] = ((void*)0);
}

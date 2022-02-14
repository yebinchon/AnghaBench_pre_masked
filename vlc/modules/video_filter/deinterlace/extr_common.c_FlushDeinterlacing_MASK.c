
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct deinterlace_ctx {int ** pp_history; scalar_t__ i_frame_offset; TYPE_1__* meta; } ;
struct TYPE_2__ {int pi_nb_fields; int pb_top_field_first; int pi_date; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct deinterlace_ctx *VAR_3)
{
    VAR_3->meta[0].pi_date = VAR_2;
    VAR_3->meta[0].pi_nb_fields = 2;
    VAR_3->meta[0].pb_top_field_first = 1;
    for( int VAR_4 = 1; VAR_4 < VAR_1; VAR_4++ )
        VAR_3->meta[VAR_4] = VAR_3->meta[VAR_4-1];

    VAR_3->i_frame_offset = 0;

    for( int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
    {
        if( VAR_3->pp_history[VAR_5] )
            FUNC_0( VAR_3->pp_history[VAR_5] );
        VAR_3->pp_history[VAR_5] = ((void*)0);
    }
}

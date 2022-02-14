
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* pi_value; scalar_t__ i_index; } ;
struct TYPE_6__ {int b_has_reference; int b_has_external_clock; float rate; int b_paused; void* i_pause_date; scalar_t__ i_pts_delay; TYPE_1__ late; int drift; void* i_next_drift_update; scalar_t__ i_buffering_duration; void* i_ts_max; void* last; void* ref; int lock; } ;
typedef TYPE_2__ input_clock_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_1 (void*,void*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

input_clock_t *FUNC_4( float VAR_2 )
{
    input_clock_t *VAR_3 = FUNC_2( sizeof(*VAR_3) );
    if( !VAR_3 )
        return ((void*)0);

    FUNC_3( &VAR_3->lock );
    VAR_3->b_has_reference = 0;
    VAR_3->ref = FUNC_1( VAR_1, VAR_1 );
    VAR_3->b_has_external_clock = 0;

    VAR_3->last = FUNC_1( VAR_1, VAR_1 );

    VAR_3->i_ts_max = VAR_1;

    VAR_3->i_buffering_duration = 0;

    VAR_3->i_next_drift_update = VAR_1;
    FUNC_0( &VAR_3->drift, 10 );

    VAR_3->late.i_index = 0;
    for( int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
        VAR_3->late.pi_value[VAR_4] = 0;

    VAR_3->rate = VAR_2;
    VAR_3->i_pts_delay = 0;
    VAR_3->b_paused = 0;
    VAR_3->i_pause_date = VAR_1;

    return VAR_3;
}

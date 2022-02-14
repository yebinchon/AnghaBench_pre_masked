
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ i_default_sample_duration; scalar_t__ i_default_sample_size; } ;
struct TYPE_8__ {TYPE_1__ context; } ;
typedef TYPE_3__ mp4_track_t ;
struct TYPE_7__ {scalar_t__ i_current_box_type; int * p_fragment_atom; } ;
struct TYPE_9__ {size_t i_tracks; TYPE_3__* track; TYPE_2__ context; int * p_moov; } ;
typedef TYPE_4__ demux_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( demux_sys_t *VAR_0 )
{
    if( VAR_0->context.p_fragment_atom )
    {
        if( VAR_0->context.p_fragment_atom != VAR_0->p_moov )
            FUNC_0( VAR_0->context.p_fragment_atom );
        VAR_0->context.p_fragment_atom = ((void*)0);
    }
    VAR_0->context.i_current_box_type = 0;

    for ( uint32_t VAR_1=0; VAR_1<VAR_0->i_tracks; VAR_1++ )
    {
        mp4_track_t *VAR_2 = &VAR_0->track[VAR_1];
        VAR_2->context.i_default_sample_size = 0;
        VAR_2->context.i_default_sample_duration = 0;
    }
}

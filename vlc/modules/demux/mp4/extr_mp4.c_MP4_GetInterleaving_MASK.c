
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {size_t i_chunk_count; size_t i_chunk; TYPE_1__* chunk; int i_timescale; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_9__ {unsigned int i_tracks; TYPE_2__* track; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_6__ {scalar_t__ i_offset; scalar_t__ i_virtual_run_number; scalar_t__ i_duration; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_0, vlc_tick_t *VAR_1, bool *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;
    *VAR_1 = 0;
    *VAR_2 = 1;


    mp4_track_t *VAR_4 = ((void*)0);
    uint64_t VAR_5 = 0;
    for( unsigned VAR_6=0; VAR_6 < VAR_3->i_tracks; VAR_6++ )
    {
        mp4_track_t *VAR_7 = &VAR_3->track[VAR_6];
        if( !VAR_7->i_chunk_count )
            continue;

        if( VAR_4 == ((void*)0) || VAR_7->chunk[0].i_offset < VAR_4->chunk[0].i_offset )
            VAR_4 = VAR_7;
    }

    for( ; VAR_4 != ((void*)0); )
    {
        VAR_5 += VAR_4->chunk[VAR_4->i_chunk].i_duration;
        VAR_4->i_chunk++;


        mp4_track_t *VAR_8 = ((void*)0);
        for( unsigned VAR_9=0; VAR_9 < VAR_3->i_tracks; VAR_9++ )
        {
            mp4_track_t *VAR_10 = &VAR_3->track[VAR_9];
            if( VAR_10->i_chunk == VAR_10->i_chunk_count )
                continue;

            if( VAR_8 == ((void*)0) ||
                VAR_10->chunk[VAR_10->i_chunk].i_offset < VAR_8->chunk[VAR_8->i_chunk].i_offset )
                VAR_8 = VAR_10;
        }


        if( VAR_8 && VAR_8->i_chunk > 0 )
            VAR_8->chunk[VAR_8->i_chunk].i_virtual_run_number =
                    VAR_8->chunk[VAR_8->i_chunk - 1].i_virtual_run_number;

        if( VAR_4 != VAR_8 )
        {
            vlc_tick_t VAR_11 = FUNC_0( VAR_5, VAR_4->i_timescale );
            if( VAR_11 > *VAR_1 )
                *VAR_1 = VAR_11;
            VAR_5 = 0;

            if( VAR_4->i_chunk != VAR_4->i_chunk_count )
                *VAR_2 = 0;

            if( VAR_8 && VAR_8->i_chunk > 0 )
                VAR_8->chunk[VAR_8->i_chunk].i_virtual_run_number++;
        }

        VAR_4 = VAR_8;
    }


    for( unsigned VAR_12=0; VAR_12 < VAR_3->i_tracks; VAR_12++ )
        VAR_3->track[VAR_12].i_chunk = 0;
}

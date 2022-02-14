
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int i_elst; scalar_t__ i_elst_time; int i_next_block_flags; TYPE_4__* (* BOXDATA ) (int ) ;scalar_t__ p_elst; } ;
typedef TYPE_1__ mp4_track_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {int i_timescale; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {scalar_t__ i_entry_count; scalar_t__* i_segment_duration; scalar_t__* i_media_time; } ;
typedef TYPE_4__ MP4_Box_data_elst_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int,int) ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_2, mp4_track_t *VAR_3,
                              vlc_tick_t VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;
    int VAR_6 = VAR_3->i_elst;


    VAR_3->i_elst = 0;
    VAR_3->i_elst_time = 0;
    if( VAR_3->p_elst && VAR_3->BOXDATA(VAR_1)->i_entry_count > 0 )
    {
        MP4_Box_data_elst_t *VAR_7 = VAR_3->BOXDATA(VAR_1);
        int64_t VAR_8= FUNC_0( VAR_4, VAR_5->i_timescale );

        for( VAR_3->i_elst = 0; (unsigned int)VAR_3->i_elst < VAR_7->i_entry_count; VAR_3->i_elst++ )
        {
            uint64_t VAR_9 = VAR_7->i_segment_duration[VAR_3->i_elst];

            if( VAR_3->i_elst_time <= VAR_8
             && VAR_8 < (int64_t)(VAR_3->i_elst_time + VAR_9) )
            {
                break;
            }
            VAR_3->i_elst_time += VAR_9;
        }

        if( (unsigned int)VAR_3->i_elst >= VAR_7->i_entry_count )
        {

            VAR_3->i_elst = VAR_7->i_entry_count - 1;
            VAR_3->i_elst_time -= VAR_7->i_segment_duration[VAR_3->i_elst];
        }

        if( VAR_7->i_media_time[VAR_3->i_elst] < 0 )
        {

            VAR_3->i_elst_time += VAR_7->i_segment_duration[VAR_3->i_elst];
        }
    }
    if( VAR_6 != VAR_3->i_elst )
    {
        FUNC_1( VAR_2, "elst old=%d new=%d", VAR_6, VAR_3->i_elst );
        VAR_3->i_next_block_flags |= VAR_0;
    }
}

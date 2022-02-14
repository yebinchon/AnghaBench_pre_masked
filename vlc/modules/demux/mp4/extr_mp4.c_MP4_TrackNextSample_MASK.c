
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_20__ {scalar_t__ i_sample; scalar_t__ i_sample_count; size_t i_chunk; size_t i_elst; scalar_t__ i_elst_time; TYPE_5__* (* BOXDATA ) (int ) ;scalar_t__ p_elst; int i_track_ID; TYPE_1__* chunk; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_21__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_22__ {int i_timescale; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_23__ {scalar_t__ i_entry_count; scalar_t__* i_segment_duration; } ;
struct TYPE_19__ {scalar_t__ i_sample_first; scalar_t__ i_sample_count; } ;
typedef TYPE_5__ MP4_Box_data_elst_t ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*,char*,int ) ;
 int VAR_3 ;
 TYPE_5__* FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_4, mp4_track_t *VAR_5, uint32_t VAR_6 )
{
    if ( VAR_0 - VAR_5->i_sample < VAR_6 )
    {
        VAR_5->i_sample = VAR_0;
        return VAR_1;
    }

    VAR_5->i_sample += VAR_6;

    if( VAR_5->i_sample >= VAR_5->i_sample_count )
        return VAR_1;


    if( VAR_5->i_sample >=
            VAR_5->chunk[VAR_5->i_chunk].i_sample_first +
            VAR_5->chunk[VAR_5->i_chunk].i_sample_count )
    {
        if( FUNC_4( VAR_4, VAR_5, VAR_5->i_chunk + 1,
                                  VAR_5->i_sample ) )
        {
            FUNC_5( VAR_4, "track[0x%x] will be disabled "
                      "(cannot restart decoder)", VAR_5->i_track_ID );
            FUNC_1( VAR_4, VAR_5, 0 );
            return VAR_1;
        }
    }


    if( VAR_5->p_elst && VAR_5->BOXDATA(VAR_3)->i_entry_count > 0 )
    {
        demux_sys_t *VAR_7 = VAR_4->p_sys;
        MP4_Box_data_elst_t *VAR_8 = VAR_5->BOXDATA(VAR_3);
        uint64_t VAR_9 = FUNC_3( FUNC_0( VAR_4, VAR_5 ),
                                            VAR_7->i_timescale );
        if( (unsigned int)VAR_5->i_elst < VAR_8->i_entry_count &&
            VAR_9 >= VAR_5->i_elst_time +
                     VAR_8->i_segment_duration[VAR_5->i_elst] )
        {
            FUNC_2( VAR_4, VAR_5,
                              FUNC_0( VAR_4, VAR_5 ) );
        }
    }

    return VAR_2;
}

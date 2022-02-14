
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ stime_t ;
struct TYPE_12__ {int i_timescale; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_14__ {int p_root; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_16__ {unsigned int i_track_ID; int i_number_of_entries; int i_version; scalar_t__* p_time; scalar_t__* p_moof_offset; } ;
struct TYPE_15__ {scalar_t__ i_type; struct TYPE_15__* p_next; } ;
typedef TYPE_4__ MP4_Box_t ;
typedef TYPE_5__ MP4_Box_data_tfra_t ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int const,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3, const vlc_tick_t VAR_4, unsigned VAR_5,
                                   uint64_t *VAR_6, vlc_tick_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_3->p_sys;
    MP4_Box_t *VAR_9 = FUNC_1( VAR_8->p_root, "mfra/tfra" );
    for( ; VAR_9; VAR_9 = VAR_9->p_next )
    {
        if ( VAR_9->i_type == VAR_0 )
        {
            const MP4_Box_data_tfra_t *VAR_10 = FUNC_0(VAR_9);
            if( !VAR_10 || VAR_10->i_track_ID != VAR_5 )
                continue;

            uint64_t VAR_11 = 0;
            mp4_track_t *VAR_12 = FUNC_2( VAR_3, VAR_10->i_track_ID );
            if ( VAR_12 )
            {
                stime_t VAR_13 = FUNC_4( VAR_4, VAR_12->i_timescale );
                for ( uint32_t VAR_14 = 0; VAR_14<VAR_10->i_number_of_entries; VAR_14 += ( VAR_10->i_version == 1 ) ? 2 : 1 )
                {
                    stime_t VAR_15;
                    uint64_t VAR_16;
                    if ( VAR_10->i_version == 1 )
                    {
                        VAR_15 = *((uint64_t *)(VAR_10->p_time + VAR_14));
                        VAR_16 = *((uint64_t *)(VAR_10->p_moof_offset + VAR_14));
                    }
                    else
                    {
                        VAR_15 = VAR_10->p_time[VAR_14];
                        VAR_16 = VAR_10->p_moof_offset[VAR_14];
                    }

                    if ( VAR_15 >= VAR_13 )
                    {
                        if ( VAR_11 == 0 )
                            break;

                        *VAR_6 = VAR_11;
                        *VAR_7 = FUNC_3( VAR_15, VAR_12->i_timescale );
                        return VAR_2;
                    }
                    else
                        VAR_11 = VAR_16;
                }
            }
        }
    }
    return VAR_1;
}

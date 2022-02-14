
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
typedef size_t stime_t ;
struct TYPE_19__ {int i_flags; size_t i_sample_count; TYPE_2__* p_samples; } ;
struct TYPE_16__ {TYPE_4__* p_trun; } ;
struct TYPE_18__ {scalar_t__ i_type; struct TYPE_18__ const* p_next; TYPE_1__ data; } ;
struct TYPE_17__ {scalar_t__ i_duration; } ;
struct TYPE_15__ {unsigned int i_track_ID; size_t i_default_sample_duration; size_t i_timescale; int i_flags; } ;
typedef TYPE_3__ const MP4_Box_t ;
typedef TYPE_4__ MP4_Box_data_trun_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_13__* FUNC_0 (TYPE_3__ const*) ;
 TYPE_3__ const* FUNC_1 (TYPE_3__ const*,char*) ;
 TYPE_3__ const* FUNC_2 (TYPE_3__ const*,unsigned int) ;
 TYPE_3__ const* FUNC_3 (TYPE_3__ const*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_4( MP4_Box_t *VAR_4, MP4_Box_t *VAR_5,
                                  unsigned VAR_6, stime_t *VAR_7 )
{
    if ( !VAR_5 || !VAR_4 )
        return 0;

    MP4_Box_t *VAR_8 = FUNC_1( VAR_5, "traf" );
    while ( VAR_8 )
    {
        if ( VAR_8->i_type != VAR_0 )
        {
           VAR_8 = VAR_8->p_next;
           continue;
        }

        const MP4_Box_t *VAR_9 = FUNC_1( VAR_8, "tfhd" );
        const MP4_Box_t *VAR_10 = FUNC_1( VAR_8, "trun" );
        if ( !VAR_9 || !VAR_10 || VAR_6 != FUNC_0(VAR_9)->i_track_ID )
        {
           VAR_8 = VAR_8->p_next;
           continue;
        }

        uint32_t VAR_11 = 0;
        uint32_t VAR_12 = 0;


        MP4_Box_t *VAR_13 = FUNC_3( VAR_4, FUNC_0(VAR_9)->i_track_ID );
        if ( VAR_13 )
        {
            VAR_12 = FUNC_0(VAR_13)->i_default_sample_duration;
        }

        MP4_Box_t *VAR_14 = FUNC_2( VAR_4, FUNC_0(VAR_9)->i_track_ID );
        if ( VAR_14 )
        {
            MP4_Box_t *VAR_15 = FUNC_1( VAR_14, "mdia/mdhd" );
            if ( VAR_15 )
                VAR_11 = FUNC_0(VAR_15)->i_timescale;
        }

        if ( !VAR_11 )
        {
           VAR_8 = VAR_8->p_next;
           continue;
        }

        uint64_t VAR_16 = 0;
        while ( VAR_10 && VAR_9 )
        {
            if ( VAR_10->i_type != VAR_1 )
            {
               VAR_10 = VAR_10->p_next;
               continue;
            }
            const MP4_Box_data_trun_t *VAR_17 = VAR_10->data.p_trun;


            if ( VAR_17->i_flags & VAR_3 )
            {
                for( uint32_t VAR_18=0; VAR_18< VAR_17->i_sample_count; VAR_18++ )
                    VAR_16 += VAR_17->p_samples[VAR_18].i_duration;
            }
            else if ( FUNC_0(VAR_9)->i_flags & VAR_2 )
            {
                VAR_16 += VAR_17->i_sample_count *
                        FUNC_0(VAR_9)->i_default_sample_duration;
            }
            else
            {
                VAR_16 += VAR_17->i_sample_count *
                        VAR_12;
            }

            VAR_10 = VAR_10->p_next;
        }

        *VAR_7 = VAR_16;
        break;
    }

    return 1;
}

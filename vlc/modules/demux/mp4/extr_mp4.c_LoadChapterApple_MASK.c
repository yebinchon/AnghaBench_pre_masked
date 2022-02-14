
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_19__ {scalar_t__ i_time_offset; int * psz_name; } ;
typedef TYPE_2__ seekpoint_t ;
typedef int p_buffer ;
struct TYPE_20__ {scalar_t__ i_sample; scalar_t__ i_sample_count; size_t i_chunk; TYPE_1__* chunk; } ;
typedef TYPE_3__ mp4_track_t ;
struct TYPE_21__ {int s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_22__ {TYPE_8__* p_title; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_23__ {int seekpoint; int i_seekpoint; } ;
struct TYPE_18__ {scalar_t__ i_sample_first; scalar_t__ i_sample_count; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char const*,scalar_t__ const) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,scalar_t__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__*) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 scalar_t__ const FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int,scalar_t__ const) ;
 int FUNC_10 (char const*,char*,int) ;
 scalar_t__ FUNC_11 (int ,char*,scalar_t__) ;
 int * FUNC_12 (char const*,scalar_t__ const) ;
 TYPE_8__* FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 () ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17( demux_t *VAR_0, mp4_track_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    for( VAR_1->i_sample = 0; VAR_1->i_sample < VAR_1->i_sample_count; VAR_1->i_sample++ )
    {
        const vlc_tick_t VAR_3 = FUNC_3( VAR_0, VAR_1 );
        vlc_tick_t VAR_4;
        if ( !FUNC_4( VAR_0, VAR_1, &VAR_4 ) )
            VAR_4 = 0;
        uint32_t VAR_5 = 0;
        const uint32_t VAR_6 = FUNC_6( VAR_1, &VAR_5 );

        if( VAR_6 > 0 && !FUNC_16( VAR_0->s, FUNC_5( VAR_1 ) ) )
        {
            char VAR_7[256];
            const uint32_t VAR_8 = FUNC_11( VAR_0->s, VAR_7,
                                                    FUNC_9( sizeof(VAR_7), VAR_6 ) );
            if( VAR_8 > 2 )
            {
                const uint32_t VAR_9 = FUNC_9( FUNC_2(VAR_7), VAR_8-2 );
                const char *VAR_10 = &VAR_7[2];

                seekpoint_t *VAR_11 = FUNC_15();
                if( VAR_11 == ((void*)0) ) continue;

                if( VAR_9 > 1 && !FUNC_10( VAR_10, "\xFF\xFE", 2 ) )
                    VAR_11->psz_name = FUNC_1( "UTF-16LE", VAR_10, VAR_9 );
                else
                    VAR_11->psz_name = FUNC_12( VAR_10, VAR_9 );

                if( VAR_11->psz_name == ((void*)0) )
                {
                    FUNC_14( VAR_11 );
                    continue;
                }

                FUNC_0( VAR_11->psz_name );
                VAR_11->i_time_offset = VAR_3 + FUNC_8( VAR_4, 0 );

                if( !VAR_2->p_title )
                    VAR_2->p_title = FUNC_13();
                FUNC_7( VAR_2->p_title->i_seekpoint, VAR_2->p_title->seekpoint, VAR_11 );
            }
        }
        if( VAR_1->i_sample+1 >= VAR_1->chunk[VAR_1->i_chunk].i_sample_first +
                              VAR_1->chunk[VAR_1->i_chunk].i_sample_count )
            VAR_1->i_chunk++;
    }
}

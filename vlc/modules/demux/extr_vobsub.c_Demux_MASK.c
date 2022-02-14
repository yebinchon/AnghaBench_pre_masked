
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {size_t i_current_subtitle; size_t i_subtitles; TYPE_1__* p_subtitles; } ;
typedef TYPE_2__ vobsub_track_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_14__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_15__ {int i_tracks; scalar_t__ i_next_demux_date; int p_vobsub_stream; TYPE_2__* track; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_16__ {int i_buffer; scalar_t__ i_pts; } ;
typedef TYPE_5__ block_t ;
struct TYPE_12__ {scalar_t__ i_start; int i_vobsub_location; } ;


 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 TYPE_5__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    vlc_tick_t VAR_3;

    for( int VAR_4 = 0; VAR_4 < VAR_2->i_tracks; VAR_4++ )
    {
        vobsub_track_t *VAR_5 = &VAR_2->track[VAR_4];

        if( VAR_5->i_current_subtitle >= VAR_5->i_subtitles )
            continue;

        VAR_3 = VAR_2->i_next_demux_date;
        if( VAR_3 <= 0 && VAR_5->i_current_subtitle < VAR_5->i_subtitles )
        {

            VAR_3 = VAR_5->p_subtitles[VAR_5->i_current_subtitle].i_start + 1;
        }

        while( VAR_5->i_current_subtitle < VAR_5->i_subtitles &&
               VAR_5->p_subtitles[VAR_5->i_current_subtitle].i_start < VAR_3 )
        {
            int VAR_6 = VAR_5->p_subtitles[VAR_5->i_current_subtitle].i_vobsub_location;
            block_t *VAR_7;
            int VAR_8 = 0;


            if( VAR_5->i_current_subtitle + 1 < VAR_5->i_subtitles )
            {
                VAR_8 = VAR_5->p_subtitles[VAR_5->i_current_subtitle+1].i_vobsub_location - VAR_6;
            }
            if( VAR_8 <= 0 ) VAR_8 = 65535;


            if( FUNC_4( VAR_2->p_vobsub_stream, VAR_6 ) )
            {
                FUNC_2( VAR_1,
                          "cannot seek in the VobSub to the correct time %d", VAR_6 );
                VAR_5->i_current_subtitle++;
                continue;
            }


            VAR_7 = FUNC_3( VAR_2->p_vobsub_stream, VAR_8 );
            if( VAR_7 )
            {
                if( VAR_7->i_buffer > 6 )
                {

                    VAR_7->i_pts = VAR_0 + VAR_5->p_subtitles[VAR_5->i_current_subtitle].i_start;


                    FUNC_0( VAR_1, VAR_7 );
                }
                FUNC_1( VAR_7 );
            }

            VAR_5->i_current_subtitle++;
        }
    }


    VAR_2->i_next_demux_date = 0;

    return 1;
}

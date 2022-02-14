
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint64_t ;
struct TYPE_13__ {scalar_t__ i_cat; scalar_t__ i_codec; } ;
struct TYPE_15__ {int i_use_flags; TYPE_1__ fmt; scalar_t__ b_ok; } ;
typedef TYPE_3__ mp4_track_t ;
struct TYPE_16__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_17__ {unsigned int i_tracks; int i_timescale; TYPE_2__* p_title; int i_cumulated_duration; int i_duration; TYPE_3__* track; int p_root; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_14__ {int i_length; } ;
struct TYPE_12__ {scalar_t__ i_chapter; scalar_t__ i_chapter_count; scalar_t__ pi_chapter_start; } ;
typedef int MP4_Box_t ;


 TYPE_11__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int const,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    MP4_Box_t *VAR_5;
    MP4_Box_t *VAR_6;

    if( ( VAR_5 = FUNC_4( VAR_4->p_root, "/moov/udta/chpl" ) ) &&
          FUNC_0(VAR_5) && FUNC_0(VAR_5)->i_chapter > 0 )
    {
        FUNC_3( VAR_3, VAR_5 );
    }
    else if( ( VAR_6 = FUNC_4( VAR_4->p_root, "/moov/udta/HMMT" ) ) &&
             FUNC_0(VAR_6) && FUNC_0(VAR_6)->pi_chapter_start && FUNC_0(VAR_6)->i_chapter_count > 0 )
    {
        FUNC_2( VAR_3, VAR_6 );
    }
    else
    {

        for( unsigned VAR_7 = 0; VAR_7 < VAR_4->i_tracks; VAR_7++ )
        {
            mp4_track_t *VAR_8 = &VAR_4->track[VAR_7];
            if(VAR_8->b_ok && (VAR_8->i_use_flags & VAR_1) &&
               VAR_8->fmt.i_cat == VAR_0 && VAR_8->fmt.i_codec == VAR_2)
            {
                FUNC_1( VAR_3, VAR_8 );
                break;
            }
        }
    }


    if( VAR_4->p_title )
    {
        const uint64_t VAR_9 = FUNC_6(VAR_4->i_duration, VAR_4->i_cumulated_duration);
        VAR_4->p_title->i_length =
                FUNC_5( VAR_9, VAR_4->i_timescale );
    }
}

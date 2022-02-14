
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ stime_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {unsigned int i_tracks; scalar_t__ p_fragsindex; TYPE_1__* track; int p_moov; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_9__ {scalar_t__ i_sample_count; scalar_t__ i_duration; } ;
struct TYPE_6__ {int i_track_ID; } ;
typedef int MP4_Box_t ;


 TYPE_5__* FUNC_0 (int const*) ;
 int * FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned int) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static stime_t FUNC_5( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    stime_t VAR_2 = 0;

    for ( unsigned int VAR_3=0; VAR_3<VAR_1->i_tracks; VAR_3++ )
    {
        stime_t VAR_4 = 0;
        MP4_Box_t *VAR_5 = FUNC_3( VAR_1->p_moov, VAR_1->track[VAR_3].i_track_ID );
        const MP4_Box_t *VAR_6;
        const MP4_Box_t *VAR_7;
        if ( (VAR_7 = FUNC_1( VAR_5, "tkhd" )) &&
             (VAR_6 = FUNC_1( VAR_5, "mdia/minf/stbl/stsz" )) &&

             FUNC_0(VAR_6)->i_sample_count > 0 )
        {
            VAR_2 = FUNC_4( (uint64_t)VAR_2, FUNC_0(VAR_7)->i_duration );
        }

        if( VAR_1->p_fragsindex )
        {
            VAR_4 += FUNC_2( VAR_1->p_fragsindex, VAR_3 );
        }

        VAR_2 = FUNC_4( VAR_2, VAR_4 );
    }

    return VAR_2;
}

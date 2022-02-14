
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_frame; } ;
struct TYPE_6__ {TYPE_1__ asfinfo; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_7__ {unsigned int i_tracks; TYPE_2__* track; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( demux_sys_t *VAR_0 )
{
    for ( unsigned int VAR_1=0; VAR_1<VAR_0->i_tracks; VAR_1++ )
    {
        mp4_track_t *VAR_2 = &VAR_0->track[VAR_1];
        if( VAR_2->asfinfo.p_frame )
        {
            FUNC_0( VAR_2->asfinfo.p_frame );
            VAR_2->asfinfo.p_frame = ((void*)0);
        }
    }
}

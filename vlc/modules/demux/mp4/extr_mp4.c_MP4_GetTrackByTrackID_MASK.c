
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ const i_track_ID; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {unsigned int i_tracks; TYPE_1__* track; } ;
typedef TYPE_3__ demux_sys_t ;



__attribute__((used)) static mp4_track_t *FUNC_0( demux_t *VAR_0, const uint32_t VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    mp4_track_t *VAR_3 = ((void*)0);
    for( unsigned VAR_4 = 0; VAR_4 < VAR_2->i_tracks; VAR_4++ )
    {
        VAR_3 = &VAR_2->track[VAR_4];
        if( VAR_3->i_track_ID == VAR_1 )
            return VAR_3;
    }
    return ((void*)0);
}

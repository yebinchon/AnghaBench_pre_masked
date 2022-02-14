
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_9__ {TYPE_5__* (* BOXDATA ) (int ) ;scalar_t__ p_asf; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_10__ {unsigned int i_tracks; TYPE_2__* track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {TYPE_1__* p_demux; } ;
typedef TYPE_4__ asf_packet_sys_t ;
struct TYPE_12__ {scalar_t__ i_stream_number; } ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;

__attribute__((used)) inline static mp4_track_t *FUNC_1( asf_packet_sys_t *VAR_1,
                                            uint8_t VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_1->p_demux->p_sys;
    for ( unsigned int VAR_4=0; VAR_4<VAR_3->i_tracks; VAR_4++ )
    {
        if ( VAR_3->track[VAR_4].p_asf &&
             VAR_2 == VAR_3->track[VAR_4].BOXDATA(VAR_0)->i_stream_number )
        {
            return &VAR_3->track[VAR_4];
        }
    }
    return ((void*)0);
}

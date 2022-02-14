
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {TYPE_3__** track; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_8__ {int info; } ;
typedef TYPE_3__ asf_track_t ;
typedef int asf_track_info_t ;
struct TYPE_9__ {TYPE_1__* p_demux; } ;
typedef TYPE_4__ asf_packet_sys_t ;



__attribute__((used)) static asf_track_info_t * FUNC_0( asf_packet_sys_t *VAR_0,
                                               uint8_t VAR_1 )
{
    demux_t *VAR_2 = VAR_0->p_demux;
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    asf_track_t *VAR_4 = VAR_3->track[VAR_1];

    if (!VAR_4)
        return ((void*)0);
    else
        return & VAR_4->info;
}

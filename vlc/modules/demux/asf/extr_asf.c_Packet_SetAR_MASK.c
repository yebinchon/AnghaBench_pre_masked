
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_9__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {TYPE_4__** track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {TYPE_6__* p_fmt; scalar_t__ p_es; } ;
typedef TYPE_4__ asf_track_t ;
struct TYPE_12__ {TYPE_2__* p_demux; } ;
typedef TYPE_5__ asf_packet_sys_t ;
struct TYPE_8__ {size_t i_sar_num; size_t i_sar_den; } ;
struct TYPE_13__ {TYPE_1__ video; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,TYPE_6__*) ;

__attribute__((used)) static void FUNC_1( asf_packet_sys_t *VAR_1, uint8_t VAR_2,
                          uint8_t VAR_3, uint8_t VAR_4 )
{
    demux_t *VAR_5 = VAR_1->p_demux;
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    asf_track_t *VAR_7 = VAR_6->track[VAR_2];

    if ( !VAR_7->p_fmt || (VAR_7->p_fmt->video.i_sar_num == VAR_3 && VAR_7->p_fmt->video.i_sar_den == VAR_4 ) )
        return;

    VAR_7->p_fmt->video.i_sar_num = VAR_3;
    VAR_7->p_fmt->video.i_sar_den = VAR_4;
    if( VAR_7->p_es )
        FUNC_0( VAR_5->out, VAR_0, VAR_7->p_es, VAR_7->p_fmt );
}

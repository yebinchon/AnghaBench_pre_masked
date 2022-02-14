
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_sendtime; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_7__ {TYPE_1__* p_demux; } ;
typedef TYPE_3__ asf_packet_sys_t ;



__attribute__((used)) static void FUNC_0( asf_packet_sys_t *VAR_0, vlc_tick_t VAR_1 )
{
    demux_t *VAR_2 = VAR_0->p_demux;
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    VAR_3->i_sendtime = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int clock_rate; size_t channels; } ;
struct TYPE_6__ {int i_mtu; TYPE_1__ rtp_fmt; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;


 size_t FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1 (sout_stream_id_sys_t *VAR_0, unsigned VAR_1, size_t VAR_2)
{

    size_t VAR_3 = (VAR_0->rtp_fmt.clock_rate - 1) * VAR_1 / 1000 + 1;
    VAR_2 *= VAR_0->rtp_fmt.channels;
    VAR_3 *= VAR_2;

    if (VAR_3 < FUNC_0 (VAR_0))
        VAR_0->i_mtu = 12 + VAR_3;
    else
        VAR_0->i_mtu = 12 + (((VAR_0->i_mtu - 12) / VAR_2) * VAR_2);
}

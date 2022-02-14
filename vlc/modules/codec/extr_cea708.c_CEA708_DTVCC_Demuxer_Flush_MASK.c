
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_pkt_sequence; scalar_t__ i_data; scalar_t__ i_total_data; } ;
typedef TYPE_1__ cea708_demux_t ;



void FUNC_0( cea708_demux_t *VAR_0 )
{
    VAR_0->i_pkt_sequence = -1;
    VAR_0->i_total_data = VAR_0->i_data = 0;
}

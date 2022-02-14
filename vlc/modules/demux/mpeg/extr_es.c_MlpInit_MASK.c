
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int i_packet_size; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( demux_t *VAR_1 )

{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    VAR_2->i_packet_size = 4096;

    return VAR_0;
}

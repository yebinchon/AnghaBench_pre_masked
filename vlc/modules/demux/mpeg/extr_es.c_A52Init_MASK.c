
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int b_big_endian; int i_packet_size; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int const*,int*,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    VAR_3->b_big_endian = 0;
    VAR_3->i_packet_size = 1024;

    const uint8_t *VAR_4;


    if( FUNC_1( VAR_2->s, &VAR_4, VAR_0 ) >= VAR_0 )
    {
        FUNC_0( VAR_4, &VAR_3->b_big_endian, ((void*)0), 1 );
    }
    return VAR_1;
}

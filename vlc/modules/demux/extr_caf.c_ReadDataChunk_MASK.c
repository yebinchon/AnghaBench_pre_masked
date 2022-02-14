
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int i_data_size; scalar_t__ i_data_offset; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_3, uint64_t VAR_4 )
{
    if( VAR_4 < 4 )
        return VAR_0;

    demux_sys_t *VAR_5 = VAR_3->p_sys;

    VAR_5->i_data_offset = FUNC_0( VAR_3->s ) + 4;
    VAR_5->i_data_size = VAR_4 == VAR_2 ? VAR_2 : ( VAR_4 - 4 );

    return VAR_1;
}

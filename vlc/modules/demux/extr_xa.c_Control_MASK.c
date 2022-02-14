
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int int64_t ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int i_data_size; int i_frame_size; int i_bitrate; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_1, int VAR_2, va_list VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_1->p_sys;

    return FUNC_0( VAR_1->s, VAR_0,
        VAR_4->i_data_size ? (int64_t)VAR_0 + VAR_4->i_data_size : -1,
                                  VAR_4->i_bitrate, VAR_4->i_frame_size,
                                  VAR_2, VAR_3 );
}

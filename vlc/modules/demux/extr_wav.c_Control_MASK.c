
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
typedef int int64_t ;
struct TYPE_8__ {int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_6__ {int i_blockalign; } ;
struct TYPE_7__ {TYPE_1__ audio; int i_bitrate; } ;
struct TYPE_9__ {scalar_t__ i_data_size; int i_data_pos; TYPE_2__ fmt; } ;
typedef TYPE_4__ demux_sys_t ;


 int FUNC_0 (int ,int,int,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_0, int VAR_1, va_list VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;
    int64_t VAR_4 = -1;

    if( VAR_3->i_data_size > 0 )
        VAR_4 = VAR_3->i_data_pos + VAR_3->i_data_size;

    return FUNC_0( VAR_0->s, VAR_3->i_data_pos, VAR_4,
                                   VAR_3->fmt.i_bitrate,
                                   VAR_3->fmt.audio.i_blockalign,
                                   VAR_1, VAR_2 );
}

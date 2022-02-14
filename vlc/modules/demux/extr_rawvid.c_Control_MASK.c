
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
typedef long long int64_t ;
struct TYPE_6__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_5__ {long long i_divider_num; long long i_divider_den; } ;
struct TYPE_7__ {long long frame_size; TYPE_1__ pcr; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int ,int ,int,long long const,long long,int,int ) ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_0, int VAR_1, va_list VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;


    const int64_t VAR_4 = 8LL * VAR_3->frame_size * VAR_3->pcr.i_divider_num /
                                                    VAR_3->pcr.i_divider_den;


    return FUNC_0( VAR_0->s, 0, -1, VAR_4,
                                   VAR_3->frame_size, VAR_1, VAR_2 );
}

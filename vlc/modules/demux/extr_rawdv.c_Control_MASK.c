
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int frame_size; int f_rate; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int ,int ,int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_0, int VAR_1, va_list VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;


    return FUNC_0( VAR_0->s,
                                   0, -1,
                                   VAR_3->frame_size * VAR_3->f_rate * 8,
                                   VAR_3->frame_size, VAR_1, VAR_2 );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {scalar_t__ end; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    vlc_tick_t VAR_3 = FUNC_0();

    if( VAR_3 >= VAR_2->end )
        return 0;

    FUNC_1( VAR_0 );
    return 1;
}

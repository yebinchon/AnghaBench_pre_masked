
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {scalar_t__ i_still_end_time; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    if (VAR_3->i_still_end_time != VAR_1) {
        VAR_3->i_still_end_time = VAR_1;

        FUNC_0(VAR_2, 0, 0);
        FUNC_1( VAR_2->out, VAR_0 );
    }
}

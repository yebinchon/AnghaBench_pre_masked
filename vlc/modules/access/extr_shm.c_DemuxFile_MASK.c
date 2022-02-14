
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int es; int fd; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_8__ {int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4 (void *VAR_0)
{
    demux_t *VAR_1 = VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;


    block_t *VAR_3 = FUNC_0(VAR_2->fd, 1);
    if (VAR_3 == ((void*)0))
        return;
    VAR_3->i_pts = VAR_3->i_dts = FUNC_3 ();


    FUNC_2(VAR_1->out, VAR_3->i_pts);
    FUNC_1 (VAR_1->out, VAR_2->es, VAR_3);
}

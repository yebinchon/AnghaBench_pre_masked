
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int display; int output; int shm; int screenshooter; int thread; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(vlc_object_t *VAR_0)
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_2(VAR_2->thread);
    FUNC_3(VAR_2->thread, ((void*)0));

    FUNC_1(VAR_2->screenshooter);
    FUNC_6(VAR_2->shm);
    FUNC_5(VAR_2->output);
    FUNC_4(VAR_2->display);
    FUNC_0(VAR_2);
}

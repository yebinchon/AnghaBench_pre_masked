
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int fd; int thread; int * input; int playlist; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(vlc_object_t *VAR_1)
{
    intf_thread_t *VAR_2 = (intf_thread_t*)VAR_1;
    intf_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_2(VAR_3->playlist, "input-current", VAR_0, VAR_2);

    if (VAR_3->input != ((void*)0)) {
        FUNC_3(VAR_3->thread);
        FUNC_4(VAR_3->thread, ((void*)0));
    }

    FUNC_1(VAR_3->fd);
    FUNC_0(VAR_3);
}

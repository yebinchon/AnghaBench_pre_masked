
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int read_fd; int write_fd; int wait; int lock; scalar_t__ pid; int thread; } ;
typedef TYPE_2__ stream_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_8 (vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    stream_sys_t *VAR_2 = VAR_1->p_sys;
    int VAR_3;

    FUNC_2 (VAR_2->thread);
    FUNC_3 (VAR_2->read_fd);
    FUNC_5 (VAR_2->thread, ((void*)0));
    if (VAR_2->write_fd != -1)

        FUNC_3 (VAR_2->write_fd);

    FUNC_1 (VAR_0, "waiting for PID %u", (unsigned)VAR_2->pid);
    while (FUNC_7 (VAR_2->pid, &VAR_3, 0) == -1);
    FUNC_1 (VAR_0, "exit status %d", VAR_3);

    FUNC_6 (&VAR_2->lock);
    FUNC_4 (&VAR_2->wait);
    FUNC_0 (VAR_2);
}

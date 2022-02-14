
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int rtcp_fd; int fd; scalar_t__ session; scalar_t__ srtp; int thread; scalar_t__ thread_ready; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6 (vlc_object_t *VAR_0)
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if (VAR_2->thread_ready)
    {
        FUNC_4 (VAR_2->thread);
        FUNC_5 (VAR_2->thread, ((void*)0));
    }





    if (VAR_2->session)
        FUNC_2 (VAR_1, VAR_2->session);
    if (VAR_2->rtcp_fd != -1)
        FUNC_1 (VAR_2->rtcp_fd);
    FUNC_1 (VAR_2->fd);
    FUNC_0 (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int fd; int controls; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4 (vlc_object_t *VAR_0)
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0(FUNC_3(VAR_0), VAR_2->controls);
    FUNC_2 (VAR_2->fd);
    FUNC_1 (VAR_2);
}

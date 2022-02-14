
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int * vbi; int fd; int controls; int bufc; int * bufv; int thread; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_5 (VAR_2->thread);
    FUNC_6 (VAR_2->thread, ((void*)0));
    if (VAR_2->bufv != ((void*)0))
        FUNC_2 (VAR_2->fd, VAR_2->bufv, VAR_2->bufc);
    FUNC_1(FUNC_7(VAR_0), VAR_2->controls);
    FUNC_4 (VAR_2->fd);






    FUNC_3( VAR_2 );
}

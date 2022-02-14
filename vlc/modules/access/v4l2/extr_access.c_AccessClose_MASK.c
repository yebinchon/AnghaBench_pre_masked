
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int fd; int controls; int bufc; int * bufv; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    if (VAR_2->bufv != ((void*)0))
        FUNC_1 (VAR_2->fd, VAR_2->bufv, VAR_2->bufc);
    FUNC_0(FUNC_4(VAR_0), VAR_2->controls);
    FUNC_3 (VAR_2->fd);
    FUNC_2( VAR_2 );
}

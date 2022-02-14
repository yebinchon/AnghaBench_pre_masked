
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (audio_output_t *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_1->sys;
    int VAR_3 = VAR_2->fd;

    FUNC_0 (VAR_3, VAR_0, ((void*)0));
    FUNC_1 (VAR_3);
    VAR_2->fd = -1;
}

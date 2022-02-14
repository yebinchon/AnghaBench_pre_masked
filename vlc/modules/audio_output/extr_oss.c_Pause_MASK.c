
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int *) ;

__attribute__((used)) static void FUNC_1 (audio_output_t *VAR_2, bool VAR_3, vlc_tick_t VAR_4)
{
    aout_sys_t *VAR_5 = VAR_2->sys;
    int VAR_6 = VAR_5->fd;

    (void) VAR_4;
    FUNC_0 (VAR_6, VAR_3 ? VAR_0 : VAR_1, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_6__ {int i_pid_video; int i_pid_audio; int i_pid_spu; } ;
typedef TYPE_2__ sout_mux_sys_t ;



 int FUNC_0 (TYPE_1__*,int) ;



__attribute__((used)) static int FUNC_1( sout_mux_t *VAR_0, int VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_0->p_sys;
    int VAR_3;
    int *VAR_4 = ((void*)0);

    switch( VAR_1 )
    {
    case 128:
        VAR_4 = &VAR_2->i_pid_video;
        break;

    case 130:
        VAR_4 = &VAR_2->i_pid_audio;
        break;

    case 129:
    default:
        VAR_4 = &VAR_2->i_pid_spu;
        break;
    }

    *VAR_4 = FUNC_0( VAR_0, *VAR_4 );
    VAR_3 = (*VAR_4)++;

    return VAR_3;
}

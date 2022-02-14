
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aout_sys_common {int * p_out_chain; int flush_sem; } ;
struct TYPE_5__ {int time_get; int flush; int pause; int play; scalar_t__ sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {scalar_t__ denom; scalar_t__ numer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aout_sys_common*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(audio_output_t *VAR_8)
{
    struct aout_sys_common *VAR_9 = (struct aout_sys_common *) VAR_8->sys;

    if (FUNC_1(&VAR_7) != VAR_0)
    {
        VAR_7.numer = VAR_7.denom = 0;
        return VAR_1;
    }

    FUNC_2(&VAR_9->flush_sem, 0);
    FUNC_0(VAR_9);
    VAR_9->p_out_chain = ((void*)0);

    VAR_8->play = VAR_5;
    VAR_8->pause = VAR_4;
    VAR_8->flush = VAR_3;
    VAR_8->time_get = VAR_6;

    return VAR_2;
}

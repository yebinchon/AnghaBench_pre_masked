
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_4__ {scalar_t__ i_format; } ;
struct TYPE_5__ {int * volume; int filters; TYPE_1__ mixer_format; } ;
typedef TYPE_2__ aout_owner_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (audio_output_t *VAR_0)
{
    aout_owner_t *VAR_1 = FUNC_3 (VAR_0);

    if (VAR_1->mixer_format.i_format)
    {
        FUNC_0(VAR_0);
        FUNC_1 (VAR_0, VAR_1->filters);
        FUNC_2 (VAR_0);
    }
    FUNC_4 (VAR_1->volume);
    VAR_1->volume = ((void*)0);
}

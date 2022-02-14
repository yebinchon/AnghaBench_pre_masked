
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int audio_volume_t ;
struct TYPE_4__ {int * module; int object; } ;
typedef TYPE_1__ aout_volume_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(aout_volume_t *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;

    audio_volume_t *VAR_2 = &VAR_1->object;

    if (VAR_1->module != ((void*)0))
        FUNC_0(VAR_2, VAR_1->module);
    FUNC_1(FUNC_3(VAR_2), "audio-replay-gain-mode",
                    VAR_0, VAR_1);
    FUNC_2(VAR_2);
}

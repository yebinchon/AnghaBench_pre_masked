
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int audio_replay_gain_t ;
struct TYPE_5__ {float output_factor; int replay_gain; int * module; } ;
typedef TYPE_1__ aout_volume_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 TYPE_1__* FUNC_5 (int *,int,char*) ;

aout_volume_t *FUNC_6(vlc_object_t *VAR_1,
                               const audio_replay_gain_t *VAR_2)
{
    aout_volume_t *VAR_3 = FUNC_5(VAR_1, sizeof (aout_volume_t),
                                           "volume");
    if (FUNC_2(VAR_3 == ((void*)0)))
        return ((void*)0);
    VAR_3->module = ((void*)0);
    VAR_3->output_factor = 1.f;




    if (VAR_2 != ((void*)0))
        FUNC_0(&VAR_3->replay_gain, VAR_2, sizeof (VAR_3->replay_gain));
    else
        FUNC_1(&VAR_3->replay_gain, 0, sizeof (VAR_3->replay_gain));

    FUNC_3(VAR_1, "audio-replay-gain-mode",
                    VAR_0, VAR_3);
    FUNC_4(VAR_1, "audio-replay-gain-mode");

    return VAR_3;
}

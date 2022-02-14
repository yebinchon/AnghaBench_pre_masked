
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {float* pf_gain; float* pf_peak; scalar_t__* pb_peak; scalar_t__* pb_gain; } ;
typedef TYPE_1__ audio_replay_gain_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 float FUNC_0 (float,float) ;
 scalar_t__ FUNC_1 (int ) ;
 float FUNC_2 (float,float) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 float FUNC_5 (int *,char*) ;

__attribute__((used)) static float FUNC_6(vlc_object_t *VAR_3, const char *VAR_4,
                                   const audio_replay_gain_t *VAR_5)
{
    unsigned VAR_6 = VAR_1;

    if (FUNC_1(VAR_4 != ((void*)0)))
    {
        if (!FUNC_3 (VAR_4, "track"))
            VAR_6 = VAR_2;
        else
        if (!FUNC_3 (VAR_4, "album"))
            VAR_6 = VAR_0;
    }


    float VAR_7;

    if (VAR_6 == VAR_1)
    {
        VAR_7 = 1.f;
    }
    else
    {
        float VAR_8;


        if (!VAR_5->pb_gain[VAR_6] && VAR_5->pb_gain[!VAR_6])
            VAR_6 = !VAR_6;

        if (VAR_5->pb_gain[VAR_6])
            VAR_8 = VAR_5->pf_gain[VAR_6]
                 + FUNC_5 (VAR_3, "audio-replay-gain-preamp");
        else
            VAR_8 = FUNC_5 (VAR_3, "audio-replay-gain-default");

        VAR_7 = FUNC_2 (10.f, VAR_8 / 20.f);

        if (FUNC_4 (VAR_3, "audio-replay-gain-peak-protection"))
            VAR_7 = FUNC_0 (VAR_7, VAR_5->pb_peak[VAR_6]
                                            ? 1.f / VAR_5->pf_peak[VAR_6]
                                            : 1.f);
    }


    VAR_7 *= FUNC_5 (VAR_3, "gain");

    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * audio_encoder; int audio_bitrate; int audio_channels; int audio_sample_rate; } ;
typedef TYPE_1__ Group_AV ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(Group_AV *VAR_2)
{
    if (VAR_2->audio_encoder) {
        FUNC_5(VAR_2->audio_encoder);
        VAR_2->audio_encoder = ((void*)0);
    }

    int VAR_3 = VAR_1;
    VAR_2->audio_encoder = FUNC_3(VAR_2->audio_sample_rate, VAR_2->audio_channels,
                              VAR_0, &VAR_3);

    if (VAR_3 != VAR_1) {
        FUNC_0("Error while starting audio encoder: %s", FUNC_6(VAR_3));
        VAR_2->audio_encoder = ((void*)0);
        return -1;
    }

    VAR_3 = FUNC_4(VAR_2->audio_encoder, FUNC_1(VAR_2->audio_bitrate));

    if (VAR_3 != VAR_1) {
        FUNC_0("Error while setting encoder ctl: %s", FUNC_6(VAR_3));
        FUNC_5(VAR_2->audio_encoder);
        VAR_2->audio_encoder = ((void*)0);
        return -1;
    }

    VAR_3 = FUNC_4(VAR_2->audio_encoder, FUNC_2(10));

    if (VAR_3 != VAR_1) {
        FUNC_0("Error while setting encoder ctl: %s", FUNC_6(VAR_3));
        FUNC_5(VAR_2->audio_encoder);
        VAR_2->audio_encoder = ((void*)0);
        return -1;
    }

    return 0;
}

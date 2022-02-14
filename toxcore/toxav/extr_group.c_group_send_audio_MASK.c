
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef int encoded ;
struct TYPE_4__ {int audio_channels; unsigned int audio_sample_rate; int audio_bitrate; int audio_encoder; } ;
typedef int Group_Chats ;
typedef TYPE_1__ Group_AV ;


 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ,int const*,unsigned int,int*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int,int*,scalar_t__) ;

int FUNC_4(Group_Chats *VAR_0, int VAR_1, const int16_t *VAR_2, unsigned int VAR_3, uint8_t VAR_4,
                     unsigned int VAR_5)
{
    Group_AV *VAR_6 = FUNC_0(VAR_0, VAR_1);

    if (!VAR_6)
        return -1;

    if (VAR_4 != 1 && VAR_4 != 2)
        return -1;

    if (VAR_5 != 8000 && VAR_5 != 12000 && VAR_5 != 16000 && VAR_5 != 24000 && VAR_5 != 48000)
        return -1;

    if (!VAR_6->audio_encoder || VAR_6->audio_channels != VAR_4 || VAR_6->audio_sample_rate != VAR_5) {
        VAR_6->audio_channels = VAR_4;
        VAR_6->audio_sample_rate = VAR_5;

        if (VAR_4 == 1) {
            VAR_6->audio_bitrate = 32000;
        } else {
            VAR_6->audio_bitrate = 64000;
        }

        if (FUNC_2(VAR_6) == -1)
            return -1;
    }

    uint8_t VAR_7[1024];
    int32_t VAR_8 = FUNC_1(VAR_6->audio_encoder, VAR_2, VAR_3, VAR_7, sizeof(VAR_7));

    if (VAR_8 <= 0)
        return -1;

    return FUNC_3(VAR_0, VAR_1, VAR_7, VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; unsigned int channels; unsigned int nb_streams; unsigned int input_sample_rate; int channel_mapping; scalar_t__ gain; scalar_t__ nb_coupled; } ;
typedef TYPE_1__ OpusHeader ;



void FUNC_0(unsigned VAR_0, unsigned VAR_1, OpusHeader *VAR_2)
{
    VAR_2->version = 1;
    VAR_2->channels = VAR_0;
    VAR_2->nb_streams = VAR_2->channels;
    VAR_2->nb_coupled = 0;
    VAR_2->input_sample_rate = VAR_1;
    VAR_2->gain = 0;
    VAR_2->channel_mapping = VAR_2->channels > 8 ? 255 :
                              VAR_2->channels > 2;
}

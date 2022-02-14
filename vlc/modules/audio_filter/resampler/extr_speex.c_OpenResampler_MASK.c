
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int i_format; scalar_t__ i_channels; int i_rate; } ;
struct TYPE_9__ {TYPE_3__ audio; } ;
struct TYPE_6__ {int i_format; scalar_t__ i_channels; scalar_t__ i_physical_channels; int i_rate; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;
struct TYPE_10__ {int pf_audio_filter; int * p_sys; TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;
typedef int SpeexResamplerState ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (scalar_t__,int ,int ,unsigned int,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5 (vlc_object_t *VAR_4)
{
    filter_t *VAR_5 = (filter_t *)VAR_4;


    if (VAR_5->fmt_in.audio.i_format != VAR_5->fmt_out.audio.i_format

     || VAR_5->fmt_in.audio.i_channels != VAR_5->fmt_out.audio.i_channels
     || VAR_5->fmt_in.audio.i_physical_channels == 0 )
        return VAR_1;

    switch (VAR_5->fmt_in.audio.i_format)
    {
        case 129: break;
        case 128: break;
        default: return VAR_1;
    }

    SpeexResamplerState *VAR_6;

    unsigned VAR_7 = FUNC_4 (VAR_4, "speex-resampler-quality");
    if (FUNC_3(VAR_7 > 10))
        VAR_7 = 3;

    int VAR_8;
    VAR_6 = FUNC_1(VAR_5->fmt_in.audio.i_channels,
                              VAR_5->fmt_in.audio.i_rate,
                              VAR_5->fmt_out.audio.i_rate, VAR_7, &VAR_8);
    if (FUNC_3(VAR_6 == ((void*)0)))
    {
        FUNC_0 (VAR_4, "cannot initialize resampler: %s",
                 FUNC_2 (VAR_8));
        return VAR_2;
    }

    VAR_5->p_sys = VAR_6;
    VAR_5->pf_audio_filter = VAR_0;
    return VAR_3;
}

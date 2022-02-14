
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int i_bitspersample; } ;
struct TYPE_7__ {scalar_t__ i_codec; TYPE_4__ audio; } ;
struct TYPE_6__ {int * pf_audio_filter; TYPE_2__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_1__ filter_t ;
typedef TYPE_2__ es_format_t ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(vlc_object_t *VAR_2)
{
    filter_t *VAR_3 = (filter_t *)VAR_2;

    const es_format_t *VAR_4 = &VAR_3->fmt_in;
    es_format_t *VAR_5 = &VAR_3->fmt_out;

    if (!FUNC_0(&VAR_4->audio, &VAR_5->audio))
        return VAR_0;
    if (VAR_4->i_codec == VAR_5->i_codec)
        return VAR_0;

    VAR_3->pf_audio_filter = FUNC_1(VAR_4->i_codec, VAR_5->i_codec);
    if (VAR_3->pf_audio_filter == ((void*)0))
        return VAR_0;

    FUNC_2(VAR_3, "%4.4s->%4.4s, bits per sample: %i->%i",
            (char *)&VAR_4->i_codec, (char *)&VAR_5->i_codec,
            VAR_4->audio.i_bitspersample, VAR_5->audio.i_bitspersample);
    return VAR_1;
}

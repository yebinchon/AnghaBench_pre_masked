
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int i_channels; int i_format; } ;
struct TYPE_7__ {TYPE_5__ audio; } ;
struct TYPE_6__ {TYPE_5__ audio; } ;
struct TYPE_8__ {int pf_audio_filter; TYPE_2__ fmt_in; TYPE_1__ fmt_out; } ;
typedef TYPE_3__ filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_2 (vlc_object_t *VAR_4)
{
    filter_t *VAR_5 = (filter_t *)VAR_4;

    if (VAR_5->fmt_in.audio.i_channels != 2)
    {
        FUNC_1 (VAR_5, "voice removal requires stereo");
        return VAR_2;
    }

    VAR_5->fmt_in.audio.i_format = VAR_1;
    FUNC_0(&VAR_5->fmt_in.audio);
    VAR_5->fmt_out.audio = VAR_5->fmt_in.audio;
    VAR_5->pf_audio_filter = VAR_0;
    return VAR_3;
}

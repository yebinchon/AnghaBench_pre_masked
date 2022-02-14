
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
struct TYPE_8__ {scalar_t__ i_format; scalar_t__ i_channels; } ;
struct TYPE_9__ {TYPE_3__ audio; } ;
struct TYPE_6__ {scalar_t__ i_format; scalar_t__ i_channels; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;
struct TYPE_10__ {int pf_audio_filter; int * p_sys; TYPE_4__ fmt_in; TYPE_2__ fmt_out; } ;
typedef TYPE_5__ filter_t ;
typedef int SRC_STATE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int,scalar_t__,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4 (vlc_object_t *VAR_4)
{
    filter_t *VAR_5 = (filter_t *)VAR_4;


    if (VAR_5->fmt_in.audio.i_format != VAR_1
     || VAR_5->fmt_out.audio.i_format != VAR_1

     || VAR_5->fmt_in.audio.i_channels != VAR_5->fmt_out.audio.i_channels )
        return VAR_2;

    int VAR_6 = FUNC_3 (VAR_4, "src-converter-type");
    int VAR_7;

    SRC_STATE *VAR_8 = FUNC_1 (VAR_6, VAR_5->fmt_in.audio.i_channels, &VAR_7);
    if (VAR_8 == ((void*)0))
    {
        FUNC_0 (VAR_4, "cannot initialize resampler: %s", FUNC_2 (VAR_7));
        return VAR_2;
    }

    VAR_5->p_sys = VAR_8;
    VAR_5->pf_audio_filter = VAR_0;
    return VAR_3;
}

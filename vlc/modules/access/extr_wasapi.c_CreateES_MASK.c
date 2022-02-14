
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int es_out_id_t ;
struct TYPE_10__ {int i_bitspersample; int i_channels; int i_rate; int i_format; } ;
struct TYPE_8__ {int i_bitrate; TYPE_3__ audio; int i_codec; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_9__ {int out; } ;
typedef TYPE_2__ demux_t ;
typedef int WAVEFORMATEX ;
typedef int REFERENCE_TIME ;
typedef int IAudioClient ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int ,int ,int,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int * FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_8 (int *,TYPE_3__*) ;

__attribute__((used)) static es_out_id_t *FUNC_9(demux_t *VAR_4, IAudioClient *VAR_5, bool VAR_6,
                             vlc_tick_t VAR_7, size_t *restrict VAR_8)
{
    es_format_t VAR_9;
    WAVEFORMATEX *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_2(VAR_5, &VAR_10);
    if (FUNC_1(VAR_11))
    {
        FUNC_7(VAR_4, "cannot get mix format (error 0x%lX)", VAR_11);
        return ((void*)0);
    }

    FUNC_5(&VAR_9, VAR_3, 0);
    if (FUNC_8(VAR_10, &VAR_9.audio))
    {
        FUNC_7(VAR_4, "unsupported mix format");
        FUNC_0(VAR_10);
        return ((void*)0);
    }

    VAR_9.i_codec = VAR_9.audio.i_format;
    VAR_9.i_bitrate = VAR_9.audio.i_bitspersample * VAR_9.audio.i_channels
                                              * VAR_9.audio.i_rate;
    *VAR_8 = VAR_9.audio.i_bitspersample * VAR_9.audio.i_channels / 8;

    DWORD VAR_12 = VAR_1;
    if (VAR_6)
        VAR_12 |= VAR_2;


    REFERENCE_TIME VAR_13 = FUNC_4( VAR_7 ) * 3;

    VAR_11 = FUNC_3(VAR_5, VAR_0, VAR_12,
                                 VAR_13, 0, VAR_10, ((void*)0));
    FUNC_0(VAR_10);
    if (FUNC_1(VAR_11))
    {
        FUNC_7(VAR_4, "cannot initialize audio client (error 0x%lX)", VAR_11);
        return ((void*)0);
    }
    return FUNC_6(VAR_4->out, &VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct demux_sys {scalar_t__ audio_rate; int audio_channels; int audio_packetized; int audio_format; } ;
struct TYPE_11__ {scalar_t__ i_rate; int i_physical_channels; int i_format; } ;
struct TYPE_9__ {TYPE_5__ audio; int i_codec; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_10__ {struct demux_sys* p_sys; } ;
typedef TYPE_2__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,int,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(demux_t *VAR_15, int VAR_16, size_t VAR_17)
{
    struct demux_sys *VAR_18 = VAR_15->p_sys;

    if (VAR_17 == 0)
        return VAR_14;

    const bool VAR_19 = VAR_18->audio_rate > 0 && VAR_18->audio_rate != VAR_11;
    const bool VAR_20 = FUNC_1(VAR_18->audio_format) != 0;
    const bool VAR_21 = VAR_18->audio_channels > 0 &&
                             VAR_18->audio_channels <= VAR_9;

    if (!VAR_19 || !VAR_20 || !VAR_21)
    {
        if (!VAR_19)
            FUNC_4(VAR_15, "Invalid audio rate");
        if (!VAR_20)
            FUNC_4(VAR_15, "Invalid audio format");
        if (!VAR_21)
            FUNC_4(VAR_15, "Invalid audio channels");
        return VAR_12;
    }

    uint16_t VAR_22 = 0;
    switch (VAR_18->audio_channels)
    {
        case 1: VAR_22 = VAR_8; break;
        case 2: VAR_22 = VAR_0; break;
        case 3: VAR_22 = VAR_1; break;
        case 4: VAR_22 = VAR_2; break;
        case 5: VAR_22 = VAR_3; break;
        case 6: VAR_22 = VAR_4; break;
        case 7: VAR_22 = VAR_5; break;
        case 8: VAR_22 = VAR_6; break;
        case 9: VAR_22 = VAR_7; break;
        default: FUNC_5();
    }

    for (size_t VAR_23 = 0; VAR_23 < VAR_17; ++VAR_23)
    {
        es_format_t VAR_24;
        FUNC_3(&VAR_24, VAR_10, VAR_18->audio_format);
        VAR_24.audio.i_format = VAR_24.i_codec;
        VAR_24.audio.i_rate = VAR_18->audio_rate;
        VAR_24.audio.i_physical_channels = VAR_22;
        FUNC_2(&VAR_24.audio);

        if (FUNC_0(VAR_15, &VAR_24, VAR_16, VAR_18->audio_packetized))
            return VAR_13;
    }

    return VAR_14;
}

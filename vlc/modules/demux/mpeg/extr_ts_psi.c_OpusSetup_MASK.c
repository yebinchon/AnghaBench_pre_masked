
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int map ;
struct TYPE_11__ {int i_rate; scalar_t__ i_channels; } ;
struct TYPE_12__ {int* p_extra; int i_extra; TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;
typedef int demux_t ;
struct TYPE_13__ {int i_left; } ;
typedef TYPE_3__ bs_t ;
struct TYPE_14__ {unsigned char* stream_map; int input_sample_rate; int nb_coupled; int nb_streams; int channel_mapping; scalar_t__ channels; scalar_t__ preskip; } ;
typedef TYPE_4__ OpusHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int*,size_t) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (unsigned char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int,int ,TYPE_4__*) ;
 int FUNC_6 (int**,int*,TYPE_4__*,int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(demux_t *VAR_2, uint8_t *VAR_3, size_t VAR_4, es_format_t *VAR_5)
{
    OpusHeader VAR_6;


    static const unsigned char VAR_7[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
    FUNC_3(VAR_6.stream_map, VAR_7, sizeof(VAR_7));

    uint8_t VAR_8;
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = VAR_3[1];
    if (VAR_12 <= 8) {
        VAR_10 = VAR_12;
        if (VAR_10)
            VAR_8 = VAR_10 > 2;
        else {
            VAR_8 = 255;
            VAR_10 = 2;
        }
        static const uint8_t VAR_13[8] = { 0, 1, 1, 2, 2, 2, 3, 3 };
        VAR_9 = VAR_13[VAR_10 - 1];
        VAR_11 = VAR_10 - VAR_9;

        static const uint8_t VAR_14[6][7] = {
            { 2,1 },
            { 1,2,3 },
            { 4,1,2,3 },
            { 4,1,2,3,5 },
            { 4,1,2,3,5,6 },
            { 6,1,2,3,4,5,7 },
        };
        if (VAR_10 > 2)
            FUNC_3(&VAR_6.stream_map[1], VAR_14[VAR_10-3], VAR_10 - 1);
    } else if (VAR_12 == 0x81) {
        if (VAR_4 < 4)
            goto explicit_config_too_short;

        VAR_10 = VAR_3[2];
        VAR_8 = VAR_3[3];
        VAR_9 = 0;
        if (VAR_8) {
            bs_t VAR_15;
            FUNC_0(&VAR_15, &VAR_3[4], VAR_4 - 4);
            VAR_11 = 1;
            if (VAR_10) {
                int VAR_16 = FUNC_7(VAR_10);
                if (VAR_15.i_left < VAR_16)
                    goto explicit_config_too_short;
                VAR_11 = FUNC_1(&VAR_15, VAR_16) + 1;
                VAR_16 = FUNC_7(VAR_11 + 1);
                if (VAR_15.i_left < VAR_16)
                    goto explicit_config_too_short;
                VAR_9 = FUNC_1(&VAR_15, VAR_16);
            }
            int VAR_17 = FUNC_7(VAR_11 + VAR_9 + 1);
            if (VAR_15.i_left < VAR_10 * VAR_17)
                goto explicit_config_too_short;

            unsigned char VAR_18 = (1U << (VAR_11 + VAR_9 + 1)) - 1;
            for (int VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
                unsigned char VAR_20 = FUNC_1(&VAR_15, VAR_17);
                if (VAR_20 == VAR_18)
                    VAR_20 = 0xff;
                VAR_6.stream_map[VAR_19] = VAR_20;
            }
        }
    } else if (VAR_12 >= 0x80 && VAR_12 <= 0x88) {
        VAR_10 = VAR_12 - 0x80;
        if (VAR_10)
            VAR_8 = 1;
        else {
            VAR_8 = 255;
            VAR_10 = 2;
        }
        VAR_9 = 0;
        VAR_11 = VAR_10;
    } else {
        FUNC_4(VAR_2, "Opus channel configuration 0x%.2x is reserved", VAR_12);
    }

    if (!VAR_10) {
        FUNC_4(VAR_2, "Opus channel configuration 0x%.2x not supported yet", VAR_3[1]);
        return;
    }

    FUNC_5(VAR_10, 0, &VAR_6);
    VAR_6.preskip = 0;
    VAR_6.input_sample_rate = 48000;
    VAR_6.nb_coupled = VAR_9;
    VAR_6.nb_streams = VAR_10 - VAR_9;
    VAR_6.channel_mapping = VAR_8;

    if (VAR_6.channels) {
        uint8_t *VAR_21 = ((void*)0);
        int VAR_22 = 0;
        FUNC_6(&VAR_21, &VAR_22, &VAR_6, ((void*)0) );
        if (VAR_21) {
            FUNC_2(VAR_5, VAR_0, VAR_1);
            VAR_5->p_extra = VAR_21;
            VAR_5->i_extra = VAR_22;
            VAR_5->audio.i_channels = VAR_6.channels;
            VAR_5->audio.i_rate = 48000;
        }
    }

    return;

explicit_config_too_short:
    FUNC_4(VAR_2, "Opus descriptor too short");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_4__ {int i_original_picture_width; int i_original_picture_height; int b_absolute; int b_ephemer; int i_start; int i_stop; int * p_region; } ;
typedef TYPE_1__ subpicture_t ;
typedef int subpicture_region_t ;
typedef int decoder_t ;


 int * FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_8(decoder_t *VAR_0,
                                           const uint8_t *VAR_1, int VAR_2,
                                           vlc_tick_t VAR_3)
{
    if (VAR_2 < 12)
        goto error;


    bool VAR_4 = VAR_1[3] & 0x80;
    int VAR_5 = VAR_1[3] & 0x1f;
    int VAR_6 = VAR_1[8] >> 4;
    int VAR_7 = ((VAR_1[8] & 0x07) << 8) | VAR_1[9];
    int VAR_8 = FUNC_1(&VAR_1[10]);

    VAR_2 -= 12;
    VAR_1 += 12;

    if (VAR_8 > VAR_2)
        goto error;

    if (VAR_6 == 1) {
        subpicture_region_t *VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_8);
        if (!VAR_9)
            goto error;
        subpicture_t *VAR_10 = FUNC_4(VAR_0, ((void*)0));
        if (!VAR_10) {
            FUNC_7(VAR_9);
            return ((void*)0);
        }
        vlc_tick_t VAR_11;
        switch (VAR_5) {
        case 0:
            VAR_10->i_original_picture_width = 720;
            VAR_10->i_original_picture_height = 480;
            VAR_11 = FUNC_3(33367);
            break;
        case 1:
            VAR_10->i_original_picture_width = 720;
            VAR_10->i_original_picture_height = 576;
            VAR_11 = FUNC_2(40);
            break;
        case 2:
            VAR_10->i_original_picture_width = 1280;
            VAR_10->i_original_picture_height = 720;
            VAR_11 = FUNC_3(16683);
            break;
        case 3:
            VAR_10->i_original_picture_width = 1920;
            VAR_10->i_original_picture_height = 1080;
            VAR_11 = FUNC_3(16683);
            break;
        default:
            FUNC_6(VAR_0, "Unknown display standard");
            VAR_10->i_original_picture_width = 0;
            VAR_10->i_original_picture_height = 0;
            VAR_11 = FUNC_2(40);
            break;
        }
        VAR_10->b_absolute = 1;
        if (!VAR_4)
            FUNC_6(VAR_0, "SCTE-27 subtitles without pre_clear_display flag are not well supported");
        VAR_10->b_ephemer = 1;
        VAR_10->i_start = VAR_3;
        VAR_10->i_stop = VAR_3 + VAR_7 * VAR_11;
        VAR_10->p_region = VAR_9;

        return VAR_10;
    } else {

        return ((void*)0);
    }

error:
    FUNC_5(VAR_0, "corrupted subtitle_message");
    return ((void*)0);
}

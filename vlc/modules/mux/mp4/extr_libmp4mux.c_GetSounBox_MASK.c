
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;
typedef int uint8_t ;
struct TYPE_9__ {int i_channels; int i_bitspersample; int i_rate; int i_frame_length; } ;
struct TYPE_12__ {scalar_t__ i_codec; size_t i_extra; int * p_extra; TYPE_1__ audio; } ;
struct TYPE_10__ {size_t i_data; int * p_data; } ;
struct TYPE_11__ {TYPE_5__ fmt; TYPE_2__ sample_priv; } ;
typedef TYPE_3__ mp4mux_trackinfo_t ;
typedef int bo_t ;


 int * FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_5__*,char*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (int const*,size_t,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (scalar_t__,char*) ;

__attribute__((used)) static bo_t *FUNC_13(vlc_object_t *VAR_8, mp4mux_trackinfo_t *VAR_9, bool VAR_10)
{
    FUNC_5(VAR_8);

    bool VAR_11 = 1;
    vlc_fourcc_t VAR_12 = VAR_9->fmt.i_codec;
    char VAR_13[4];

    if (VAR_12 == VAR_6 ||
        VAR_12 == VAR_4) {
        if (VAR_10) {
            VAR_11 = 0;
            FUNC_11(VAR_13, ".mp3", 4);
        } else
            FUNC_11(VAR_13, "mp4a", 4);
    } else if (VAR_12 == VAR_0) {
        FUNC_11(VAR_13, "ac-3", 4);
    } else if (VAR_12 == VAR_3) {
        FUNC_11(VAR_13, "ec-3", 4);
    } else if (VAR_12 == VAR_2) {
        FUNC_11(VAR_13, "DTS ", 4);
    } else if (VAR_12 == VAR_7) {
        FUNC_11(VAR_13, "wma ", 4);
    } else
        FUNC_12(VAR_12, VAR_13);

    bo_t *VAR_14 = FUNC_10(VAR_13);
    if(!VAR_14)
        return ((void*)0);
    for (int VAR_15 = 0; VAR_15 < 6; VAR_15++)
        FUNC_8(VAR_14, 0);
    FUNC_6(VAR_14, 1);


    if (VAR_10 && VAR_12 == VAR_5)
        FUNC_6(VAR_14, 1);
    else
        FUNC_6(VAR_14, 0);
    FUNC_6(VAR_14, 0);
    FUNC_7(VAR_14, 0);

    FUNC_6(VAR_14, VAR_9->fmt.audio.i_channels);

    FUNC_6(VAR_14, VAR_9->fmt.audio.i_bitspersample ?
                 VAR_9->fmt.audio.i_bitspersample : 16);
    FUNC_6(VAR_14, -2);
    FUNC_6(VAR_14, 0);
    FUNC_6(VAR_14, VAR_9->fmt.audio.i_rate);
    FUNC_6(VAR_14, 0);


    if (VAR_10 && VAR_9->fmt.i_codec == VAR_5) {

        FUNC_7(VAR_14, VAR_9->fmt.audio.i_frame_length);
        FUNC_7(VAR_14, 1536);
        FUNC_7(VAR_14, 2);

        FUNC_7(VAR_14, 2 );
    }


    if (VAR_11) {
        bo_t *VAR_16;


        const uint8_t *VAR_17 = VAR_9->fmt.p_extra;
        size_t VAR_18 = VAR_9->fmt.i_extra;
        if(VAR_9->sample_priv.i_data)
        {
            VAR_17 = VAR_9->sample_priv.p_data;
            VAR_18 = VAR_9->sample_priv.i_data;
        }

        if (VAR_10 && VAR_12 == VAR_5)
            VAR_16 = FUNC_3(VAR_9);
        else if (VAR_12 == VAR_1)
            VAR_16 = FUNC_0(&VAR_9->fmt);
        else if (VAR_12 == VAR_0 && VAR_18 >= 3)
            VAR_16 = FUNC_4(VAR_17, VAR_18, "dac3");
        else if (VAR_12 == VAR_3 && VAR_18 >= 5)
            VAR_16 = FUNC_4(VAR_17, VAR_18, "dec3");
        else if (VAR_12 == VAR_7)
            VAR_16 = FUNC_2(&VAR_9->fmt, "wfex");
        else
            VAR_16 = FUNC_1(VAR_9);

        if (VAR_16)
            FUNC_9(VAR_14, VAR_16);
    }

    return VAR_14;
}

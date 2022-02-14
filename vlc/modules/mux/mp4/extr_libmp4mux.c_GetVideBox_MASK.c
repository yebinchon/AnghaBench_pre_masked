
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef char uint8_t ;
struct TYPE_12__ {int i_visible_width; int i_visible_height; } ;
struct TYPE_10__ {int i_codec; char* p_extra; size_t i_extra; TYPE_5__ video; } ;
struct TYPE_9__ {size_t i_data; char* p_data; } ;
struct TYPE_11__ {TYPE_2__ fmt; TYPE_1__ sample_priv; } ;
typedef TYPE_3__ mp4mux_trackinfo_t ;
typedef int bo_t ;


 int FUNC_0 (char const*,size_t) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char const*,size_t,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (char const*,size_t) ;
 int FUNC_8 (char const*,size_t,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int,char*) ;
 int FUNC_14 (int *,int ) ;
 int * FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (int,char*) ;

__attribute__((used)) static bo_t *FUNC_18(vlc_object_t *VAR_0, mp4mux_trackinfo_t *VAR_1, bool VAR_2)
{
    FUNC_9(*VAR_0);
    FUNC_9(VAR_2);

    char VAR_3[4];

    switch(VAR_1->fmt.i_codec)
    {
    case 134:
    case 133: FUNC_16(VAR_3, "mp4v", 4); break;
    case 135: FUNC_16(VAR_3, "mjpa", 4); break;
    case 132: FUNC_16(VAR_3, "SVQ1", 4); break;
    case 131: FUNC_16(VAR_3, "SVQ3", 4); break;
    case 138: FUNC_16(VAR_3, "s263", 4); break;
    case 137: FUNC_16(VAR_3, "avc1", 4); break;
    case 130 : FUNC_16(VAR_3, "vc-1", 4); break;


    case 136: FUNC_16(VAR_3, "hev1", 4); break;
    case 128: FUNC_16(VAR_3, "yv12", 4); break;
    case 129: FUNC_16(VAR_3, "yuy2", 4); break;
    default:
        FUNC_17(VAR_1->fmt.i_codec, VAR_3);
        break;
    }

    bo_t *VAR_4 = FUNC_15(VAR_3);
    if(!VAR_4)
        return ((void*)0);
    for (int VAR_5 = 0; VAR_5 < 6; VAR_5++)
        FUNC_12(VAR_4, 0);
    FUNC_10(VAR_4, 1);

    FUNC_10(VAR_4, 0);
    FUNC_10(VAR_4, 0);
    for (int VAR_6 = 0; VAR_6 < 3; VAR_6++)
        FUNC_11(VAR_4, 0);

    FUNC_10(VAR_4, VAR_1->fmt.video.i_visible_width);
    FUNC_10(VAR_4, VAR_1->fmt.video.i_visible_height);

    FUNC_11(VAR_4, 0x00480000);
    FUNC_11(VAR_4, 0x00480000);

    FUNC_11(VAR_4, 0);
    FUNC_10(VAR_4, 1);


    uint8_t VAR_7[32] = {0};
    switch (VAR_1->fmt.i_codec)
    {
        case 139:
            FUNC_16(VAR_7, "\012AOM Coding", 11);
            break;
        default:
            break;
    }
    FUNC_13(VAR_4, 32, VAR_7);

    FUNC_10(VAR_4, 0x18);
    FUNC_10(VAR_4, 0xffff);


    const uint8_t *VAR_8 = VAR_1->fmt.p_extra;
    size_t VAR_9 = VAR_1->fmt.i_extra;
    if(VAR_1->sample_priv.i_data)
    {
        VAR_8 = VAR_1->sample_priv.p_data;
        VAR_9 = VAR_1->sample_priv.i_data;
    }


    switch(VAR_1->fmt.i_codec)
    {
    case 139:
        FUNC_14(VAR_4, FUNC_8(VAR_8, VAR_9, "av1C"));
        FUNC_14(VAR_4, FUNC_2(&VAR_1->fmt.video, VAR_2));
        break;

    case 134:
    case 133:
        FUNC_14(VAR_4, FUNC_4(VAR_1));
        break;

    case 138:
        FUNC_14(VAR_4, FUNC_3());
        break;

    case 131:
        FUNC_14(VAR_4, FUNC_7(VAR_8, VAR_9));
        break;

    case 137:
        FUNC_14(VAR_4, FUNC_0(VAR_8, VAR_9));
        break;

    case 130:
        FUNC_14(VAR_4, FUNC_8(VAR_8, VAR_9, "dvc1"));
            break;

    case 136:

        FUNC_14(VAR_4, FUNC_5(VAR_8, VAR_9, 0));
        break;
    }

    FUNC_14(VAR_4, FUNC_6(&VAR_1->fmt.video));
    FUNC_14(VAR_4, FUNC_1(&VAR_1->fmt.video));

    return VAR_4;
}

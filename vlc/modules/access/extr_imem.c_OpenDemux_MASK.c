
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_17__ {int es; } ;
typedef TYPE_5__ imem_sys_t ;
struct TYPE_15__ {void* i_original_frame_height; void* i_original_frame_width; } ;
struct TYPE_16__ {TYPE_3__ spu; } ;
struct TYPE_14__ {unsigned int i_width; unsigned int i_height; unsigned int i_sar_num; unsigned int i_sar_den; unsigned int i_frame_rate; unsigned int i_frame_rate_base; } ;
struct TYPE_13__ {void* i_rate; void* i_channels; } ;
struct TYPE_18__ {int i_cat; void* psz_language; int i_codec; TYPE_4__ subs; TYPE_2__ video; TYPE_1__ audio; void* i_group; void* i_id; } ;
typedef TYPE_6__ es_format_t ;
struct TYPE_19__ {TYPE_5__* p_sys; int pf_demux; int pf_control; int * out; int psz_location; } ;
typedef TYPE_7__ demux_t ;



 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__**,int ) ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_6__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,char const*,...) ;
 void* FUNC_8 (int *,char*) ;
 void* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,unsigned int*,unsigned int*,char*) ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static int FUNC_12(vlc_object_t *VAR_4)
{
    demux_t *VAR_5 = (demux_t *)VAR_4;
    imem_sys_t *VAR_6;

    if (VAR_5->out == ((void*)0))
        return VAR_2;

    if (FUNC_2(VAR_4, &VAR_6, VAR_5->psz_location))
        return VAR_2;


    es_format_t VAR_7;
    FUNC_4(&VAR_7, FUNC_1(VAR_4), 0);

    VAR_7.i_id = FUNC_8(VAR_4, "imem-id");
    VAR_7.i_group = FUNC_8(VAR_4, "imem-group");

    char *VAR_8 = FUNC_9(VAR_4, "imem-codec");
    if (VAR_8)
        VAR_7.i_codec = FUNC_11(VAR_7.i_cat, VAR_8);
    FUNC_6(VAR_8);

    switch (VAR_7.i_cat) {
    case 130: {
        VAR_7.audio.i_channels = FUNC_8(VAR_4, "imem-channels");
        VAR_7.audio.i_rate = FUNC_8(VAR_4, "imem-samplerate");

        FUNC_7(VAR_4, "Audio %4.4s %d channels %d Hz",
                (const char *)&VAR_7.i_codec,
                VAR_7.audio.i_channels, VAR_7.audio.i_rate);
        break;
    }
    case 128: {
        VAR_7.video.i_width = FUNC_8(VAR_4, "imem-width");
        VAR_7.video.i_height = FUNC_8(VAR_4, "imem-height");
        unsigned VAR_9, VAR_10;
        if (!FUNC_10(VAR_4, &VAR_9, &VAR_10, "imem-dar") && VAR_9 > 0 && VAR_10 > 0) {
            if (VAR_7.video.i_width != 0 && VAR_7.video.i_height != 0) {
                VAR_7.video.i_sar_num = VAR_9 * VAR_7.video.i_height;
                VAR_7.video.i_sar_den = VAR_10 * VAR_7.video.i_width;
            }
        }
        if (!FUNC_10(VAR_4, &VAR_9, &VAR_10, "imem-fps") && VAR_9 > 0 && VAR_10 > 0) {
            VAR_7.video.i_frame_rate = VAR_9;
            VAR_7.video.i_frame_rate_base = VAR_10;
        }

        FUNC_7(VAR_4, "Video %4.4s %dx%d  SAR %d:%d frame rate %u/%u",
                (const char *)&VAR_7.i_codec,
                VAR_7.video.i_width, VAR_7.video.i_height,
                VAR_7.video.i_sar_num, VAR_7.video.i_sar_den,
                VAR_7.video.i_frame_rate, VAR_7.video.i_frame_rate_base);
        break;
    }
    case 129: {
        VAR_7.subs.spu.i_original_frame_width =
            FUNC_8(VAR_4, "imem-width");
        VAR_7.subs.spu.i_original_frame_height =
            FUNC_8(VAR_4, "imem-height");

        FUNC_7(VAR_4, "Subtitle %4.4s",
                (const char *)&VAR_7.i_codec);
        break;
    }
    default:
        FUNC_3(&VAR_7);
        FUNC_0(VAR_6);
        return VAR_2;
    }

    VAR_7.psz_language = FUNC_9(VAR_4, "imem-language");

    VAR_6->es = FUNC_5(VAR_5->out, &VAR_7);
    FUNC_3(&VAR_7);

    if (!VAR_6->es) {
        FUNC_0(VAR_6);
        return VAR_2;
    }


    VAR_5->pf_control = VAR_0;
    VAR_5->pf_demux = VAR_1;
    VAR_5->p_sys = VAR_6;

    return VAR_3;
}

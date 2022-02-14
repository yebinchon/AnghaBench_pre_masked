
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int bitrate; int rateControlMode; } ;
struct TYPE_21__ {int maxCUSize; int fpsNum; int fpsDenom; int frameRate; int sourceWidth; int sourceHeight; TYPE_4__ rc; scalar_t__ bEnableWavefront; int frameNumThreads; } ;
typedef TYPE_6__ x265_param ;
struct TYPE_22__ {scalar_t__ sizeBytes; int payload; } ;
typedef TYPE_7__ x265_nal ;
typedef int vlc_object_t ;
typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_20__ {scalar_t__ i_codec; int i_bitrate; size_t i_extra; int * p_extra; int i_cat; } ;
struct TYPE_17__ {int i_frame_rate; int i_frame_rate_base; int i_visible_width; int i_visible_height; } ;
struct TYPE_18__ {TYPE_2__ video; int i_codec; } ;
struct TYPE_16__ {int force; } ;
struct TYPE_23__ {int * pf_encode_audio; int pf_encode_video; TYPE_5__ fmt_out; TYPE_3__ fmt_in; TYPE_9__* p_sys; TYPE_1__ obj; } ;
typedef TYPE_8__ encoder_t ;
struct TYPE_24__ {int initial_date; scalar_t__ frame_count; int * h; TYPE_6__ param; } ;
typedef TYPE_9__ encoder_sys_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_9__*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (TYPE_8__*,char*,...) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,TYPE_7__**,size_t*) ;
 int * FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_10 (vlc_object_t *VAR_9)
{
    encoder_t *VAR_10 = (encoder_t *)VAR_9;
    encoder_sys_t *VAR_11;

    if (VAR_10->fmt_out.i_codec != VAR_2 && !VAR_10->obj.force)
        return VAR_4;

    VAR_10->fmt_out.i_cat = VAR_1;
    VAR_10->fmt_out.i_codec = VAR_2;
    VAR_10->p_sys = VAR_11 = FUNC_3(sizeof(encoder_sys_t));
    if (!VAR_11)
        return VAR_5;

    VAR_10->fmt_in.i_codec = VAR_3;

    x265_param *VAR_12 = &VAR_11->param;
    FUNC_9(VAR_12);

    VAR_12->frameNumThreads = FUNC_6();
    VAR_12->bEnableWavefront = 0;
    VAR_12->maxCUSize = 16;
    if (VAR_10->fmt_in.video.i_frame_rate_base) {
        VAR_12->frameRate = VAR_10->fmt_in.video.i_frame_rate /
            VAR_10->fmt_in.video.i_frame_rate_base;
    } else {
        VAR_12->frameRate = 25;
    }

    VAR_12->sourceWidth = VAR_10->fmt_in.video.i_visible_width;
    VAR_12->sourceHeight = VAR_10->fmt_in.video.i_visible_height;

    if (VAR_12->sourceWidth & (VAR_12->maxCUSize - 1)) {
        FUNC_5(VAR_10, "Width (%d) must be a multiple of %d",
            VAR_12->sourceWidth, VAR_12->maxCUSize);
        FUNC_2(VAR_11);
        return VAR_4;
    }
    if (VAR_12->sourceHeight & 7) {
        FUNC_5(VAR_10, "Height (%d) must be a multiple of 8", VAR_12->sourceHeight);
        FUNC_2(VAR_11);
        return VAR_4;
    }

    if (VAR_10->fmt_out.i_bitrate > 0) {
        VAR_12->rc.bitrate = VAR_10->fmt_out.i_bitrate / 1000;
        VAR_12->rc.rateControlMode = VAR_8;
    }

    VAR_11->h = FUNC_8(VAR_12);
    if (VAR_11->h == ((void*)0)) {
        FUNC_5(VAR_10, "cannot open x265 encoder");
        FUNC_2(VAR_11);
        return VAR_4;
    }

    x265_nal *VAR_13;
    uint32_t VAR_14;
    if (FUNC_7(VAR_11->h, &VAR_13, &VAR_14) < 0) {
        FUNC_5(VAR_10, "cannot get x265 headers");
        FUNC_0(FUNC_1(VAR_10));
        return VAR_4;
    }

    size_t VAR_15 = 0;
    for (uint32_t VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
        VAR_15 += VAR_13[VAR_16].sizeBytes;

    VAR_10->fmt_out.i_extra = VAR_15;

    uint8_t *VAR_17 = VAR_10->fmt_out.p_extra = FUNC_3(VAR_15);
    if (!VAR_17) {
        FUNC_0(FUNC_1(VAR_10));
        return VAR_5;
    }

    for (uint32_t VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
        FUNC_4(VAR_17, VAR_13[VAR_18].payload, VAR_13[VAR_18].sizeBytes);
        VAR_17 += VAR_13[VAR_18].sizeBytes;
    }

    VAR_11->frame_count = 0;
    VAR_11->initial_date = VAR_7;

    VAR_10->pf_encode_video = VAR_0;
    VAR_10->pf_encode_audio = ((void*)0);

    return VAR_6;
}

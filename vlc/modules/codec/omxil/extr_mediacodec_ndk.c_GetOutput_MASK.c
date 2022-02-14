
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_15__ {int flags; int offset; int size; int presentationTimeUs; } ;
struct TYPE_20__ {int p_codec; TYPE_2__ info; } ;
typedef TYPE_7__ mc_api_sys ;
struct TYPE_18__ {void* sample_rate; void* channel_mask; void* channel_count; } ;
struct TYPE_17__ {void* crop_bottom; void* crop_right; void* crop_top; void* crop_left; void* pixel_format; void* slice_height; void* stride; void* height; void* width; } ;
struct TYPE_19__ {TYPE_5__ audio; TYPE_4__ video; } ;
struct TYPE_14__ {int i_index; int i_size; int * p_ptr; int i_ts; } ;
struct TYPE_21__ {int b_eos; TYPE_6__ conf; int type; TYPE_1__ buf; } ;
typedef TYPE_8__ mc_api_out ;
struct TYPE_22__ {scalar_t__ i_cat; int p_obj; scalar_t__ b_direct_rendering; TYPE_7__* p_sys; } ;
typedef TYPE_9__ mc_api ;
struct TYPE_16__ {int * (* getOutputFormat ) (int ) ;int * (* getOutputBuffer ) (int ,int,size_t*) ;} ;
struct TYPE_13__ {TYPE_3__ AMediaCodec; } ;
typedef int AMediaFormat ;


 int VAR_0 ;
 void* FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int,size_t*) ;
 int * FUNC_3 (int ) ;
 TYPE_10__ VAR_6 ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_7, int VAR_8, mc_api_out *VAR_9)
{
    mc_api_sys *VAR_10 = VAR_7->p_sys;

    if (VAR_8 >= 0)
    {
        VAR_9->type = VAR_3;
        VAR_9->buf.i_index = VAR_8;

        VAR_9->buf.i_ts = VAR_10->info.presentationTimeUs;
        VAR_9->b_eos = VAR_10->info.flags & VAR_0;

        if (VAR_7->b_direct_rendering)
        {
            VAR_9->buf.p_ptr = ((void*)0);
            VAR_9->buf.i_size = 0;
        }
        else
        {
            size_t VAR_11;
            uint8_t *VAR_12 = VAR_6.AMediaCodec.getOutputBuffer(VAR_10->p_codec,
                                                                 VAR_8,
                                                                 &VAR_11);

            if (!VAR_12 && !VAR_9->b_eos)
            {
                FUNC_1(VAR_7->p_obj, "AMediaCodec.getOutputBuffer failed");
                return VAR_1;
            }
            VAR_9->buf.p_ptr = VAR_12 + VAR_10->info.offset;
            VAR_9->buf.i_size = VAR_10->info.size;
        }
        return 1;
    }
    else if (VAR_8 == VAR_2)
    {
        AMediaFormat *VAR_13 = VAR_6.AMediaCodec.getOutputFormat(VAR_10->p_codec);

        VAR_9->type = VAR_4;
        VAR_9->b_eos = 0;
        if (VAR_7->i_cat == VAR_5)
        {
            VAR_9->conf.video.width = FUNC_0(VAR_13, "width");
            VAR_9->conf.video.height = FUNC_0(VAR_13, "height");
            VAR_9->conf.video.stride = FUNC_0(VAR_13, "stride");
            VAR_9->conf.video.slice_height = FUNC_0(VAR_13, "slice-height");
            VAR_9->conf.video.pixel_format = FUNC_0(VAR_13, "color-format");
            VAR_9->conf.video.crop_left = FUNC_0(VAR_13, "crop-left");
            VAR_9->conf.video.crop_top = FUNC_0(VAR_13, "crop-top");
            VAR_9->conf.video.crop_right = FUNC_0(VAR_13, "crop-right");
            VAR_9->conf.video.crop_bottom = FUNC_0(VAR_13, "crop-bottom");
        }
        else
        {
            VAR_9->conf.audio.channel_count = FUNC_0(VAR_13, "channel-count");
            VAR_9->conf.audio.channel_mask = FUNC_0(VAR_13, "channel-mask");
            VAR_9->conf.audio.sample_rate = FUNC_0(VAR_13, "sample-rate");
        }
        return 1;
    }
    return 0;
}

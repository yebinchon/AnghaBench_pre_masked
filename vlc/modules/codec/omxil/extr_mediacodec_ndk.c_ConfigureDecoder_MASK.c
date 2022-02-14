
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int i_sample_rate; int i_channel_count; } ;
struct TYPE_9__ {int i_width; int i_height; int i_angle; scalar_t__ b_adaptive_playback; scalar_t__ b_tunneled_playback; int * p_surface; } ;
union mc_api_args {TYPE_3__ audio; TYPE_1__ video; } ;
struct TYPE_13__ {int p_format; int p_codec; } ;
typedef TYPE_5__ mc_api_sys ;
struct TYPE_14__ {scalar_t__ i_cat; int b_direct_rendering; int p_obj; int psz_mime; scalar_t__ psz_name; TYPE_5__* p_sys; } ;
typedef TYPE_6__ mc_api ;
struct TYPE_12__ {scalar_t__ (* configure ) (int ,int ,int *,int *,int ) ;int (* createCodecByName ) (scalar_t__) ;} ;
struct TYPE_10__ {int (* setInt32 ) (int ,char*,int) ;int (* setString ) (int ,char*,int ) ;int (* new ) () ;} ;
struct TYPE_15__ {TYPE_4__ AMediaCodec; TYPE_2__ AMediaFormat; } ;
typedef int ANativeWindow ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int ,char*,int) ;
 TYPE_7__ VAR_3 ;

__attribute__((used)) static int FUNC_15(mc_api *VAR_4, union mc_api_args *VAR_5)
{
    mc_api_sys *VAR_6 = VAR_4->p_sys;
    ANativeWindow *VAR_7 = ((void*)0);

    FUNC_0(VAR_4->psz_mime && VAR_4->psz_name);

    VAR_6->p_codec = VAR_3.AMediaCodec.createCodecByName(VAR_4->psz_name);
    if (!VAR_6->p_codec)
    {
        FUNC_1(VAR_4->p_obj, "AMediaCodec.createCodecByName for %s failed",
                VAR_4->psz_name);
        return VAR_1;
    }

    VAR_6->p_format = VAR_3.AMediaFormat.new();
    if (!VAR_6->p_format)
    {
        FUNC_1(VAR_4->p_obj, "AMediaFormat.new failed");
        return VAR_1;
    }

    VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "encoder", 0);
    VAR_3.AMediaFormat.setString(VAR_6->p_format, "mime", VAR_4->psz_mime);

    VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "max-input-size", 0);
    if (VAR_4->i_cat == VAR_2)
    {
        VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "width", VAR_5->video.i_width);
        VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "height", VAR_5->video.i_height);
        VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "rotation-degrees", VAR_5->video.i_angle);
        if (VAR_5->video.p_surface)
        {
            VAR_7 = VAR_5->video.p_surface;
            if (VAR_5->video.b_tunneled_playback)
                VAR_3.AMediaFormat.setInt32(VAR_6->p_format,
                                           "feature-tunneled-playback", 1);
            if (VAR_5->video.b_adaptive_playback)
                VAR_3.AMediaFormat.setInt32(VAR_6->p_format,
                                           "feature-adaptive-playback", 1);
        }
    }
    else
    {
        VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "sample-rate", VAR_5->audio.i_sample_rate);
        VAR_3.AMediaFormat.setInt32(VAR_6->p_format, "channel-count", VAR_5->audio.i_channel_count);
    }

    if (VAR_3.AMediaCodec.configure(VAR_6->p_codec, VAR_6->p_format,
                                   VAR_7, ((void*)0), 0) != VAR_0)
    {
        FUNC_1(VAR_4->p_obj, "AMediaCodec.configure failed");
        return VAR_1;
    }

    VAR_4->b_direct_rendering = !!VAR_7;

    return 0;
}

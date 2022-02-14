
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ plane_count; } ;
typedef TYPE_2__ vlc_chroma_description_t ;
struct demux_sys {scalar_t__ video_chroma; scalar_t__ video_frame_rate; scalar_t__ video_frame_rate_base; scalar_t__ video_width; scalar_t__ video_height; int video_packetized; } ;
struct TYPE_11__ {scalar_t__ i_width; scalar_t__ i_visible_width; scalar_t__ i_height; scalar_t__ i_visible_height; scalar_t__ i_frame_rate; scalar_t__ i_frame_rate_base; int i_chroma; } ;
struct TYPE_13__ {TYPE_1__ video; int i_codec; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_14__ {struct demux_sys* p_sys; } ;
typedef TYPE_4__ demux_t ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(demux_t *VAR_5, int VAR_6, size_t VAR_7)
{
    struct demux_sys *VAR_8 = VAR_5->p_sys;

    if (VAR_7 == 0)
        return VAR_4;

    const vlc_chroma_description_t *VAR_9 =
        FUNC_3(VAR_8->video_chroma);
    if (!VAR_9 || VAR_9->plane_count == 0)
        VAR_8->video_chroma = 0;

    const bool VAR_10 =
        VAR_8->video_frame_rate != 0 && VAR_8->video_frame_rate != VAR_0 &&
        VAR_8->video_frame_rate_base != 0 && VAR_8->video_frame_rate_base != VAR_0;
    const bool VAR_11 = VAR_8->video_chroma != 0;
    const bool VAR_12 = VAR_8->video_width != VAR_0 &&
                         VAR_8->video_height != VAR_0;

    if (VAR_8->video_frame_rate == 0 || VAR_8->video_frame_rate_base == 0
     || VAR_8->video_chroma == 0)
    if (!VAR_10 || !VAR_11 || !VAR_12)
    {
        if (!VAR_10)
            FUNC_2(VAR_5, "Invalid video frame rate");
        if (!VAR_11)
            FUNC_2(VAR_5, "Invalid video chroma");
        if (!VAR_12)
            FUNC_2(VAR_5, "Invalid video size");
        return VAR_2;
    }

    for (size_t VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13)
    {
        es_format_t VAR_14;
        FUNC_1(&VAR_14, VAR_1, VAR_8->video_chroma);
        VAR_14.video.i_chroma = VAR_14.i_codec;
        VAR_14.video.i_width = VAR_14.video.i_visible_width = VAR_8->video_width;
        VAR_14.video.i_height = VAR_14.video.i_visible_height = VAR_8->video_height;
        VAR_14.video.i_frame_rate = VAR_8->video_frame_rate;
        VAR_14.video.i_frame_rate_base = VAR_8->video_frame_rate_base;

        if (FUNC_0(VAR_5, &VAR_14, VAR_6, VAR_8->video_packetized))
            return VAR_3;
    }
    return VAR_4;
}

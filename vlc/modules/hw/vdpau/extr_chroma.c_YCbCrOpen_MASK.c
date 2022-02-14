
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int format; } ;
typedef TYPE_5__ vlc_vdp_yuv_getter_t ;
typedef int vlc_object_t ;
struct TYPE_10__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; int i_sar_den; int i_sar_num; int i_chroma; } ;
struct TYPE_11__ {TYPE_3__ video; } ;
struct TYPE_8__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; int i_sar_num; int i_sar_den; int i_chroma; } ;
struct TYPE_9__ {TYPE_1__ video; } ;
struct TYPE_13__ {TYPE_5__* p_sys; int pf_video_filter; TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_6__ filter_t ;
typedef int VdpYCbCrFormat ;
typedef int VdpChromaType ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 TYPE_5__* FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(vlc_object_t *VAR_4)
{
    filter_t *VAR_5 = (filter_t *)VAR_4;
    VdpChromaType VAR_6;
    VdpYCbCrFormat VAR_7;

    if (!FUNC_2(VAR_5->fmt_out.video.i_chroma, &VAR_6, &VAR_7)
      || !FUNC_0(VAR_6, VAR_5->fmt_in.video.i_chroma))
        return VAR_0;

    if (VAR_5->fmt_in.video.i_visible_width
                                       != VAR_5->fmt_out.video.i_visible_width
     || VAR_5->fmt_in.video.i_visible_height
                                      != VAR_5->fmt_out.video.i_visible_height
     || VAR_5->fmt_in.video.i_x_offset != VAR_5->fmt_out.video.i_x_offset
     || VAR_5->fmt_in.video.i_y_offset != VAR_5->fmt_out.video.i_y_offset
     || (VAR_5->fmt_in.video.i_sar_num * VAR_5->fmt_out.video.i_sar_den
          != VAR_5->fmt_in.video.i_sar_den * VAR_5->fmt_out.video.i_sar_num))
        return VAR_0;

    vlc_vdp_yuv_getter_t *VAR_8 = FUNC_3(VAR_4, sizeof (*VAR_8));
    if (FUNC_1(VAR_8 == ((void*)0)))
        return VAR_1;
    VAR_8->format = VAR_7;

    VAR_5->pf_video_filter = VAR_3;
    VAR_5->p_sys = VAR_8;
    return VAR_2;
}

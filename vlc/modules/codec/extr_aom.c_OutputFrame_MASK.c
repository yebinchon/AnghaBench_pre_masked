
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_width; scalar_t__ i_height; int i_sar_num; int i_sar_den; int pose; int multiview_mode; int projection_mode; int color_range; int space; int transfer; int primaries; } ;
typedef TYPE_5__ video_format_t ;
struct aom_image {scalar_t__ d_w; scalar_t__ d_h; scalar_t__ range; scalar_t__ user_priv; int mc; int tc; int cp; } ;
struct TYPE_21__ {int b_progressive; int date; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_17__ {scalar_t__ primaries; int pose; int multiview_mode; int projection_mode; } ;
struct TYPE_18__ {TYPE_2__ video; } ;
struct TYPE_16__ {TYPE_5__ video; } ;
struct TYPE_22__ {TYPE_8__* p_sys; TYPE_3__ fmt_in; TYPE_1__ fmt_out; } ;
typedef TYPE_7__ decoder_t ;
struct TYPE_23__ {TYPE_4__* frame_priv; } ;
typedef TYPE_8__ decoder_sys_t ;
struct TYPE_19__ {int pts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aom_image const*,TYPE_6__*) ;
 TYPE_6__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(decoder_t *VAR_4, const struct aom_image *VAR_5)
{
    video_format_t *VAR_6 = &VAR_4->fmt_out.video;

    if (VAR_5->d_w != VAR_6->i_visible_width || VAR_5->d_h != VAR_6->i_visible_height)
    {
        VAR_6->i_visible_width = VAR_4->fmt_out.video.i_width = VAR_5->d_w;
        VAR_6->i_visible_height = VAR_4->fmt_out.video.i_height = VAR_5->d_h;
    }

    if( !VAR_4->fmt_out.video.i_sar_num || !VAR_4->fmt_out.video.i_sar_den )
    {
        VAR_4->fmt_out.video.i_sar_num = 1;
        VAR_4->fmt_out.video.i_sar_den = 1;
    }

    if(VAR_4->fmt_in.video.primaries == VAR_1)
    {
        VAR_6->primaries = FUNC_4(VAR_5->cp);
        VAR_6->transfer = FUNC_6(VAR_5->tc);
        VAR_6->space = FUNC_5(VAR_5->mc);
        VAR_6->color_range = VAR_5->range == VAR_0 ? VAR_2 : VAR_3;
    }

    VAR_4->fmt_out.video.projection_mode = VAR_4->fmt_in.video.projection_mode;
    VAR_4->fmt_out.video.multiview_mode = VAR_4->fmt_in.video.multiview_mode;
    VAR_4->fmt_out.video.pose = VAR_4->fmt_in.video.pose;

    if (FUNC_3(VAR_4) == 0)
    {
        picture_t *VAR_7 = FUNC_1(VAR_4);
        if (VAR_7)
        {
            decoder_sys_t *VAR_8 = VAR_4->p_sys;
            FUNC_0(VAR_5, VAR_7);



            VAR_7->b_progressive = 1;
            VAR_7->date = VAR_8->frame_priv[(uintptr_t)VAR_5->user_priv].pts;

            FUNC_2(VAR_4, VAR_7);
        }
    }
}

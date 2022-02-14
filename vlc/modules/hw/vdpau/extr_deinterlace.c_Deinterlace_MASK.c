
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ structure; int context; } ;
typedef TYPE_3__ vlc_vdp_video_field_t ;
typedef int vlc_tick_t ;
struct TYPE_21__ {int date; int b_top_field_first; int i_nb_fields; int b_progressive; struct TYPE_21__* p_next; int * context; int format; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_18__ {scalar_t__ i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_22__ {TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_23__ {int last_pts; } ;
typedef TYPE_6__ filter_sys_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static picture_t *FUNC_8(filter_t *VAR_4, picture_t *VAR_5)
{
    filter_sys_t *VAR_6 = VAR_4->p_sys;
    vlc_tick_t VAR_7 = VAR_6->last_pts;

    VAR_6->last_pts = VAR_5->date;

    vlc_vdp_video_field_t *VAR_8 = (vlc_vdp_video_field_t *)VAR_5->context;
    if (FUNC_5(VAR_8 == ((void*)0)))
        return VAR_5;
    if (VAR_8->structure != VAR_1)
        return VAR_5;




    picture_t *VAR_9 = FUNC_3(&VAR_5->format);

    if (VAR_9 == ((void*)0))
        return VAR_5;

    vlc_vdp_video_field_t *VAR_10 = FUNC_7(VAR_8);
    if (FUNC_5(VAR_10 == ((void*)0)))
    {
        FUNC_4(VAR_9);
        return VAR_5;
    }

    FUNC_2(VAR_9, VAR_5);
    VAR_9->context = &VAR_10->context;

    if (VAR_7 != VAR_3)
        VAR_9->date = (3 * VAR_5->date - VAR_7) / 2;
    else
    if (VAR_4->fmt_in.video.i_frame_rate != 0)
        VAR_9->date = VAR_5->date + FUNC_6(VAR_4->fmt_in.video.i_frame_rate_base
                            ,VAR_4->fmt_in.video.i_frame_rate);
    VAR_9->b_top_field_first = !VAR_5->b_top_field_first;
    VAR_9->i_nb_fields = 1;
    VAR_5->i_nb_fields = 1;

    FUNC_0(VAR_5->p_next == ((void*)0));
    VAR_5->p_next = VAR_9;

    if (VAR_5->b_progressive || VAR_5->b_top_field_first)
    {
        VAR_8->structure = VAR_2;
        VAR_10->structure = VAR_0;
    }
    else
    {
        VAR_8->structure = VAR_0;
        VAR_10->structure = VAR_2;
    }

    VAR_5->b_progressive = 1;
    VAR_9->b_progressive = 1;
    return VAR_5;
}

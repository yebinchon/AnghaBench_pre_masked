
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int const i_visible_height; int const i_visible_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_23__ {TYPE_3__ format; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_20__ {int i_visible_width; int i_visible_height; } ;
struct TYPE_21__ {TYPE_1__ video; } ;
struct TYPE_24__ {TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_26__ {int i_alpha; TYPE_4__* p_pic; } ;
struct TYPE_25__ {int i_pos; int i_pos_y; int i_pos_x; int lock; int p_blend; TYPE_7__ p_BarGraph; } ;
typedef TYPE_6__ filter_sys_t ;
typedef TYPE_7__ BarGraph_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,int,int,TYPE_4__ const*,int const) ;
 scalar_t__ FUNC_1 (int ,int const,int const,TYPE_3__ const*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static picture_t *FUNC_8(filter_t *VAR_4, picture_t *VAR_5)
{
    filter_sys_t *VAR_6 = VAR_4->p_sys;
    BarGraph_t *VAR_7 = &(VAR_6->p_BarGraph);

    picture_t *VAR_8 = FUNC_2(VAR_4);
    if (!VAR_8) {
        FUNC_5(VAR_5);
        return ((void*)0);
    }

    FUNC_4(VAR_8, VAR_5);


    FUNC_6(&VAR_6->lock);


    const picture_t *VAR_9 = VAR_7->p_pic;
    if (!VAR_9)
        goto out;

    const video_format_t *VAR_10 = &VAR_9->format;
    const int VAR_11 = VAR_4->fmt_out.video.i_visible_width;
    const int VAR_12 = VAR_4->fmt_out.video.i_visible_height;

    if (VAR_6->i_pos) {
        if (VAR_6->i_pos & VAR_0)
            VAR_6->i_pos_y = VAR_12 - VAR_10->i_visible_height;
        else if (!(VAR_6->i_pos & VAR_3))
            VAR_6->i_pos_y = (VAR_12 - VAR_10->i_visible_height) / 2;
        else
            VAR_6->i_pos_y = 0;

        if (VAR_6->i_pos & VAR_2)
            VAR_6->i_pos_x = VAR_11 - VAR_10->i_visible_width;
        else if (!(VAR_6->i_pos & VAR_1))
            VAR_6->i_pos_x = (VAR_11 - VAR_10->i_visible_width) / 2;
        else
            VAR_6->i_pos_x = 0;
    }


    const int VAR_13 = VAR_7->i_alpha;
    if (FUNC_1(VAR_6->p_blend, VAR_11, VAR_12, VAR_10) ||
            FUNC_0(VAR_6->p_blend, VAR_8, VAR_6->i_pos_x, VAR_6->i_pos_y,
                VAR_9, VAR_13))
        FUNC_3(VAR_4, "failed to blend a picture");

out:
    FUNC_7(&VAR_6->lock);

    FUNC_5(VAR_5);
    return VAR_8;
}

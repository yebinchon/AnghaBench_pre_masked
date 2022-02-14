
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_20__ {int i_sar_num; int i_sar_den; scalar_t__ i_y_offset; scalar_t__ i_x_offset; int i_visible_height; int i_height; int i_visible_width; int i_width; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_21__ {int b_absolute; int b_ephemer; scalar_t__ i_alpha; TYPE_4__* p_region; scalar_t__ i_stop; int i_start; } ;
typedef TYPE_3__ subpicture_t ;
struct TYPE_22__ {int i_align; int i_y; int i_x; int p_picture; } ;
typedef TYPE_4__ subpicture_region_t ;
struct TYPE_23__ {TYPE_1__* p; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_24__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_26__ {scalar_t__ i_alpha; TYPE_5__* p_pic; } ;
struct TYPE_25__ {int b_absolute; int i_pos; int lock; int i_pos_y; int i_pos_x; int b_spu_update; TYPE_8__ p_BarGraph; } ;
typedef TYPE_7__ filter_sys_t ;
struct TYPE_19__ {int i_visible_lines; int i_visible_pitch; } ;
typedef TYPE_8__ BarGraph_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_8(filter_t *VAR_4, vlc_tick_t VAR_5)
{
    filter_sys_t *VAR_6 = VAR_4->p_sys;
    BarGraph_t *VAR_7 = &(VAR_6->p_BarGraph);

    subpicture_t *VAR_8;
    subpicture_region_t *VAR_9;
    video_format_t VAR_10;
    picture_t *VAR_11;

    FUNC_6(&VAR_6->lock);

    if (!VAR_6->b_spu_update) {
        FUNC_7(&VAR_6->lock);
        return ((void*)0);
    }

    VAR_11 = VAR_7->p_pic;


    VAR_8 = FUNC_0(VAR_4);
    if (!VAR_8)
        goto exit;

    VAR_8->b_absolute = VAR_6->b_absolute;
    VAR_8->i_start = VAR_5;
    VAR_8->i_stop = 0;
    VAR_8->b_ephemer = 1;


    if (!VAR_11 || !VAR_7->i_alpha)
        goto exit;


    FUNC_5(&VAR_10, VAR_2);
    VAR_10.i_sar_num = VAR_10.i_sar_den = 1;
    VAR_10.i_width = VAR_10.i_visible_width = VAR_11->p[VAR_3].i_visible_pitch;
    VAR_10.i_height = VAR_10.i_visible_height = VAR_11->p[VAR_3].i_visible_lines;
    VAR_10.i_x_offset = VAR_10.i_y_offset = 0;
    VAR_9 = FUNC_4(&VAR_10);
    if (!VAR_9) {
        FUNC_1(VAR_4, "cannot allocate SPU region");
        FUNC_3(VAR_8);
        VAR_8 = ((void*)0);
        goto exit;
    }


    FUNC_2(VAR_9->p_picture, VAR_11);


    if (VAR_6->i_pos < 0) {
        VAR_9->i_align = VAR_0 | VAR_1;
        VAR_8->b_absolute = 1;
    } else {
        VAR_9->i_align = VAR_6->i_pos;
        VAR_8->b_absolute = 0;
    }

    VAR_9->i_x = VAR_6->i_pos_x;
    VAR_9->i_y = VAR_6->i_pos_y;

    VAR_8->p_region = VAR_9;

    VAR_8->i_alpha = VAR_7->i_alpha ;

exit:
    FUNC_7(&VAR_6->lock);

    return VAR_8;
}

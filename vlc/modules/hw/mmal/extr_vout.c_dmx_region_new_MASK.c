
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_17__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_18__ {scalar_t__ layer; int dmx_handle; } ;
typedef TYPE_4__ vout_display_sys_t ;
struct TYPE_19__ {int i_visible_width; int i_visible_height; } ;
typedef TYPE_5__ video_format_t ;
typedef int uint32_t ;
struct TYPE_20__ {TYPE_2__* p_picture; int i_alpha; int i_y; int i_x; TYPE_5__ fmt; } ;
typedef TYPE_6__ subpicture_region_t ;
struct TYPE_14__ {int flags; int mask; int opacity; } ;
struct TYPE_21__ {int width; int height; } ;
struct dmx_region_t {TYPE_2__* picture; int * next; TYPE_11__ alpha; TYPE_7__ src_rect; int resource; TYPE_7__ dst_rect; int element; TYPE_7__ bmp_rect; int pos_y; int pos_x; } ;
struct TYPE_16__ {TYPE_1__* p; } ;
struct TYPE_15__ {int i_pitch; int p_pixels; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dmx_region_t* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,TYPE_7__*,int ,TYPE_7__*,int ,TYPE_11__*,int *,int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ,int,int) ;
 int FUNC_3 (int ,int,int,int *) ;
 int FUNC_4 (int ,int ,int,int ,TYPE_7__*) ;

__attribute__((used)) static struct dmx_region_t *FUNC_5(vout_display_t *VAR_6,
                DISPMANX_UPDATE_HANDLE_T VAR_7, subpicture_region_t *VAR_8)
{
    vout_display_sys_t *VAR_9 = VAR_6->sys;
    video_format_t *VAR_10 = &VAR_8->fmt;
    struct dmx_region_t *VAR_11 = FUNC_0(sizeof(struct dmx_region_t));
    uint32_t VAR_12;

    VAR_11->pos_x = VAR_8->i_x;
    VAR_11->pos_y = VAR_8->i_y;

    FUNC_2(&VAR_11->bmp_rect, 0, 0, VAR_10->i_visible_width,
                    VAR_10->i_visible_height);
    FUNC_2(&VAR_11->src_rect, 0, 0, VAR_10->i_visible_width << 16,
                    VAR_10->i_visible_height << 16);
    FUNC_2(&VAR_11->dst_rect, VAR_8->i_x, VAR_8->i_y,
                    VAR_10->i_visible_width, VAR_10->i_visible_height);

    VAR_11->resource = FUNC_3(VAR_4,
                    VAR_11->bmp_rect.width | (VAR_8->p_picture->p[0].i_pitch << 16),
                    VAR_11->bmp_rect.height | (VAR_11->bmp_rect.height << 16),
                    &VAR_12);
    FUNC_4(VAR_11->resource, VAR_4,
                    VAR_8->p_picture->p[0].i_pitch,
                    VAR_8->p_picture->p[0].p_pixels, &VAR_11->bmp_rect);

    VAR_11->alpha.flags = VAR_0 | VAR_1;
    VAR_11->alpha.opacity = VAR_8->i_alpha;
    VAR_11->alpha.mask = VAR_2;
    VAR_11->element = FUNC_1(VAR_7, VAR_9->dmx_handle,
                    VAR_9->layer + 1, &VAR_11->dst_rect, VAR_11->resource,
                    &VAR_11->src_rect, VAR_3,
                    &VAR_11->alpha, ((void*)0), VAR_5);

    VAR_11->next = ((void*)0);
    VAR_11->picture = VAR_8->p_picture;

    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int i_x_offset; int i_y_offset; int i_visible_height; int i_visible_width; } ;
struct TYPE_17__ {TYPE_5__ fmt; TYPE_7__* sys; } ;
typedef TYPE_6__ vout_display_t ;
struct TYPE_18__ {int active_buffers; int display_height; int display_width; int * viewport; int shm; TYPE_3__* embed; } ;
typedef TYPE_7__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
struct wl_surface {int dummy; } ;
struct wl_shm_pool {int dummy; } ;
struct wl_display {int dummy; } ;
struct wl_buffer {int dummy; } ;
struct picture_buffer_t {int fd; scalar_t__ offset; } ;
struct buffer_data {int * counter; TYPE_8__* picture; } ;
struct TYPE_19__ {TYPE_4__* p; struct picture_buffer_t* p_sys; } ;
typedef TYPE_8__ picture_t ;
typedef scalar_t__ off_t ;
struct TYPE_15__ {size_t i_pitch; size_t const i_lines; } ;
struct TYPE_13__ {struct wl_surface* wl; } ;
struct TYPE_12__ {struct wl_display* wl; } ;
struct TYPE_14__ {TYPE_2__ handle; TYPE_1__ display; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_data*) ;
 struct buffer_data* FUNC_2 (int) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct wl_buffer*,int *,struct buffer_data*) ;
 int FUNC_6 (struct wl_display*) ;
 struct wl_shm_pool* FUNC_7 (int ,int,scalar_t__) ;
 struct wl_buffer* FUNC_8 (struct wl_shm_pool*,scalar_t__,int ,int ,size_t const,int ) ;
 int FUNC_9 (struct wl_shm_pool*) ;
 int FUNC_10 (struct wl_surface*,struct wl_buffer*,int ,int ) ;
 int FUNC_11 (struct wl_surface*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_12(vout_display_t *VAR_2, picture_t *VAR_3, subpicture_t *VAR_4,
                    vlc_tick_t VAR_5)
{
    FUNC_0(VAR_5);
    vout_display_sys_t *VAR_6 = VAR_2->sys;
    struct wl_display *VAR_7 = VAR_6->embed->display.wl;
    struct wl_surface *VAR_8 = VAR_6->embed->handle.wl;
    struct picture_buffer_t *VAR_9 = VAR_3->p_sys;

    if (VAR_9->fd == -1)
        return;

    struct buffer_data *VAR_10 = FUNC_2(sizeof (*VAR_10));
    if (FUNC_4(VAR_10 == ((void*)0)))
        return;

    VAR_10->picture = VAR_3;
    VAR_10->counter = &VAR_6->active_buffers;

    off_t VAR_11 = VAR_9->offset;
    const size_t VAR_12 = VAR_3->p->i_pitch;
    const size_t VAR_13 = VAR_3->p->i_lines * VAR_12;
    struct wl_shm_pool *VAR_14;
    struct wl_buffer *VAR_15;

    VAR_14 = FUNC_7(VAR_6->shm, VAR_9->fd, VAR_11 + VAR_13);
    if (VAR_14 == ((void*)0))
    {
        FUNC_1(VAR_10);
        return;
    }

    if (VAR_6->viewport == ((void*)0))
        VAR_11 += 4 * VAR_2->fmt.i_x_offset
                  + VAR_3->p->i_pitch * VAR_2->fmt.i_y_offset;

    VAR_15 = FUNC_8(VAR_14, VAR_11, VAR_2->fmt.i_visible_width,
                                    VAR_2->fmt.i_visible_height, VAR_12,
                                    VAR_0);
    FUNC_9(VAR_14);
    if (VAR_15 == ((void*)0))
    {
        FUNC_1(VAR_10);
        return;
    }

    FUNC_3(VAR_3);

    FUNC_5(VAR_15, &VAR_1, VAR_10);
    FUNC_10(VAR_8, VAR_15, 0, 0);
    FUNC_11(VAR_8, 0, 0, VAR_6->display_width, VAR_6->display_height);
    FUNC_6(VAR_7);

    VAR_6->active_buffers++;

    (void) VAR_4;
}

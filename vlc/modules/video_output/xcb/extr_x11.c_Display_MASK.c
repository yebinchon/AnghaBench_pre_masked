
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
typedef int xcb_shm_seg_t ;
struct TYPE_16__ {int error_code; } ;
typedef TYPE_3__ xcb_generic_error_t ;
typedef int xcb_connection_t ;
struct TYPE_17__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_14__ {size_t i_y_offset; int i_x_offset; int i_visible_height; int i_visible_width; } ;
struct TYPE_18__ {scalar_t__ attached; int depth; TYPE_1__ fmt; int gc; int window; int * conn; int segment; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct TYPE_19__ {TYPE_2__* p; TYPE_7__* p_sys; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_20__ {int offset; } ;
typedef TYPE_7__ picture_buffer_t ;
struct TYPE_15__ {int i_pitch; int i_pixel_pitch; unsigned int i_lines; scalar_t__ p_pixels; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int,unsigned int const,int ,int ,int ,int ,unsigned int const,scalar_t__) ;
 TYPE_3__* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ,int,unsigned int,int ,size_t,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7 (vout_display_t *VAR_1, picture_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_1->sys;
    xcb_connection_t *VAR_4 = VAR_3->conn;
    const picture_buffer_t *VAR_5 = VAR_2->p_sys;
    xcb_shm_seg_t VAR_6 = VAR_3->segment;
    xcb_void_cookie_t VAR_7;

    FUNC_2(VAR_1, VAR_3->conn);

    if (VAR_3->attached)
        VAR_7 = FUNC_6(VAR_4, VAR_3->window, VAR_3->gc,
                               VAR_2->p->i_pitch / VAR_2->p->i_pixel_pitch,
                               VAR_2->p->i_lines,
                               VAR_3->fmt.i_x_offset,
                               VAR_3->fmt.i_y_offset,
                               VAR_3->fmt.i_visible_width,
                               VAR_3->fmt.i_visible_height,
                               0, 0, VAR_3->depth, VAR_0,
                               0, VAR_6, VAR_5->offset);
    else {
        const size_t VAR_8 = VAR_3->fmt.i_y_offset * VAR_2->p->i_pitch;
        const unsigned VAR_9 = VAR_2->p->i_lines - VAR_3->fmt.i_y_offset;

        VAR_7 = FUNC_3(VAR_4, VAR_0,
                               VAR_3->window, VAR_3->gc,
                               VAR_2->p->i_pitch / VAR_2->p->i_pixel_pitch,
                               VAR_9, -VAR_3->fmt.i_x_offset, 0, 0, VAR_3->depth,
                               VAR_2->p->i_pitch * VAR_9,
                               VAR_2->p->p_pixels + VAR_8);
    }






   xcb_generic_error_t *VAR_10 = FUNC_4(VAR_4, VAR_7);
   if (VAR_10 != ((void*)0)) {
       FUNC_1(VAR_1, "%s: X11 error %d", "cannot put image", VAR_10->error_code);
       FUNC_0(VAR_10);
   }





    if (VAR_3->attached)
        FUNC_5(VAR_4, VAR_6);
}

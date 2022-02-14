
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* anw; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct TYPE_22__ {TYPE_3__* p; TYPE_7__* p_sys; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_25__ {scalar_t__ width; scalar_t__ height; int stride; scalar_t__ format; int bits; } ;
struct TYPE_20__ {TYPE_9__ buf; } ;
struct TYPE_23__ {int b_locked; TYPE_4__ sw; } ;
typedef TYPE_7__ picture_sys_t ;
struct TYPE_18__ {unsigned int i_width; unsigned int i_height; } ;
struct TYPE_24__ {TYPE_2__ fmt; int p_surface; } ;
typedef TYPE_8__ android_window ;
struct TYPE_19__ {scalar_t__ i_lines; int i_pitch; int i_pixel_pitch; int p_pixels; } ;
struct TYPE_17__ {scalar_t__ (* winLock ) (int ,TYPE_9__*,int *) ;} ;


 int FUNC_0 (TYPE_5__*,TYPE_8__*,TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_6__*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_9__*,int *) ;

__attribute__((used)) static int FUNC_3(vout_display_sys_t *VAR_1,
                                     android_window *VAR_2,
                                     picture_t *VAR_3)
{
    picture_sys_t *VAR_4 = VAR_3->p_sys;

    if (VAR_4->b_locked)
        return -1;

    if (VAR_1->anw->winLock(VAR_2->p_surface,
                          &VAR_4->sw.buf, ((void*)0)) != 0)
        return -1;

    if (VAR_4->sw.buf.width < 0 ||
        VAR_4->sw.buf.height < 0 ||
        (unsigned)VAR_4->sw.buf.width < VAR_2->fmt.i_width ||
        (unsigned)VAR_4->sw.buf.height < VAR_2->fmt.i_height)
    {
        VAR_4->b_locked = 1;
        FUNC_0(VAR_1, VAR_2, VAR_3);
        return -1;
    }

    VAR_3->p[0].p_pixels = VAR_4->sw.buf.bits;
    VAR_3->p[0].i_lines = VAR_4->sw.buf.height;
    VAR_3->p[0].i_pitch = VAR_3->p[0].i_pixel_pitch * VAR_4->sw.buf.stride;

    if (VAR_4->sw.buf.format == VAR_0)
        FUNC_1(VAR_3, VAR_4->sw.buf.stride);

    VAR_4->b_locked = 1;
    return 0;
}

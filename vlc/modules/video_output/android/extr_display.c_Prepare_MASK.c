
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_18__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_19__ {int b_sub_invalid; int b_has_subpictures; TYPE_1__* p_window; int * p_spu_blend; TYPE_5__* p_sub_pic; TYPE_15__* p_sub_window; int * p_sub_buffer_bounds; int p_prepared_pic; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef scalar_t__ vlc_tick_t ;
typedef int subpicture_t ;
struct TYPE_20__ {int p_sys; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_21__ {int format; } ;
struct TYPE_17__ {scalar_t__ b_opaque; } ;
struct TYPE_16__ {int fmt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_15__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (int ,TYPE_4__*) ;
 int FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 () ;

__attribute__((used)) static void FUNC_16(vout_display_t *VAR_0, picture_t *VAR_1,
                    subpicture_t *VAR_2, vlc_tick_t VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_0->sys;

    if (!VAR_4->p_window->b_opaque)
    {
        if (FUNC_4(VAR_4->p_prepared_pic) == 0)
        {
            FUNC_13(VAR_4->p_prepared_pic, VAR_1);
            FUNC_5(VAR_4->p_prepared_pic);
        }
    }

    if (VAR_2 && VAR_4->p_sub_window) {
        if (VAR_4->b_sub_invalid) {
            VAR_4->b_sub_invalid = 0;
            if (VAR_4->p_sub_pic) {
                FUNC_14(VAR_4->p_sub_pic);
                VAR_4->p_sub_pic = ((void*)0);
            }
            if (VAR_4->p_spu_blend) {
                FUNC_9(VAR_4->p_spu_blend);
                VAR_4->p_spu_blend = ((void*)0);
            }
            FUNC_11(VAR_4->p_sub_buffer_bounds);
            VAR_4->p_sub_buffer_bounds = ((void*)0);
        }

        if (!VAR_4->p_sub_pic
         && FUNC_2(VAR_4, VAR_4->p_sub_window, 1) == 0)
            VAR_4->p_sub_pic = FUNC_3(VAR_4, &VAR_4->p_sub_window->fmt, 0);
        if (!VAR_4->p_spu_blend && VAR_4->p_sub_pic)
            VAR_4->p_spu_blend = FUNC_10(FUNC_7(VAR_0),
                                               &VAR_4->p_sub_pic->format);

        if (VAR_4->p_sub_pic && VAR_4->p_spu_blend)
            VAR_4->b_has_subpictures = 1;
    }



    if (VAR_4->b_has_subpictures)
    {
        FUNC_6(VAR_0, VAR_2);
        if (!VAR_2)
        {



            VAR_4->b_has_subpictures = 0;
        }
    }
    if (VAR_4->p_window->b_opaque
     && FUNC_0(VAR_1->p_sys))
    {
        vlc_tick_t VAR_5 = FUNC_15();
        if (VAR_3 > VAR_5)
        {
            if (VAR_3 - VAR_5 <= FUNC_8(1))
                FUNC_1(VAR_1->p_sys, VAR_3);
            else
                FUNC_12(VAR_0, "picture way too early to release at time");
        }
    }
}

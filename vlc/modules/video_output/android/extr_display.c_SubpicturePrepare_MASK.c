
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_23__ {int left; int right; int top; int bottom; } ;
struct TYPE_21__ {scalar_t__ i_sub_last_order; int p_spu_blend; TYPE_6__* p_sub_pic; int p_sub_window; TYPE_5__ sub_last_region; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_22__ {scalar_t__ i_order; } ;
typedef TYPE_4__ subpicture_t ;
struct TYPE_24__ {TYPE_1__* p; } ;
struct TYPE_19__ {int i_pixel_pitch; int i_pitch; int * p_pixels; } ;
typedef TYPE_5__ ARect ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_4 (int *,int ,int const) ;
 int FUNC_5 (TYPE_6__*,int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_0, subpicture_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;
    ARect VAR_3;

    FUNC_2(VAR_1, &VAR_3);

    if( VAR_1 )
    {
        if( VAR_1->i_order == VAR_2->i_sub_last_order
         && FUNC_3( &VAR_3, &VAR_2->sub_last_region, sizeof(ARect) ) == 0 )
            return;

        VAR_2->i_sub_last_order = VAR_1->i_order;
        VAR_2->sub_last_region = VAR_3;
    }

    if (FUNC_0(VAR_2, VAR_2->p_sub_window, VAR_2->p_sub_pic) != 0)
        return;


    FUNC_1(VAR_0, VAR_1, &VAR_3);
    const int VAR_4 = VAR_3.left
                                * VAR_2->p_sub_pic->p[0].i_pixel_pitch;
    const int VAR_5 = (VAR_3.right - VAR_3.left)
                            * VAR_2->p_sub_pic->p->i_pixel_pitch;
    for (int VAR_6 = VAR_3.top; VAR_6 < VAR_3.bottom; VAR_6++)
        FUNC_4(&VAR_2->p_sub_pic->p[0].p_pixels[VAR_6 * VAR_2->p_sub_pic->p[0].i_pitch
                                              + VAR_4], 0, VAR_5);

    if (VAR_1)
        FUNC_5(VAR_2->p_sub_pic, VAR_2->p_spu_blend, VAR_1);
}

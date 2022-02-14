
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_10__ {int p_awh; scalar_t__ embed; scalar_t__ p_sub_window; struct TYPE_10__* p_sub_buffer_bounds; scalar_t__ p_spu_blend; scalar_t__ p_sub_pic; scalar_t__ p_prepared_pic; scalar_t__ p_window; scalar_t__ b_displayed; scalar_t__ pool; scalar_t__ b_has_subpictures; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;



    if (VAR_1->b_has_subpictures)
    {
        FUNC_4(VAR_0, ((void*)0));
        FUNC_2(VAR_1, VAR_1->p_sub_window, VAR_1->p_sub_pic);
    }

    if (VAR_1->pool)
        FUNC_8(VAR_1->pool);

    if (VAR_1->p_window)
    {
        if (VAR_1->b_displayed)
            FUNC_3(VAR_0);
        FUNC_1(VAR_0, VAR_1->p_window);
    }

    if (VAR_1->p_prepared_pic)
        FUNC_7(VAR_1->p_prepared_pic);
    if (VAR_1->p_sub_pic)
        FUNC_7(VAR_1->p_sub_pic);
    if (VAR_1->p_spu_blend)
        FUNC_5(VAR_1->p_spu_blend);
    FUNC_6(VAR_1->p_sub_buffer_bounds);
    if (VAR_1->p_sub_window)
        FUNC_1(VAR_0, VAR_1->p_sub_window);

    if (VAR_1->embed)
        FUNC_0(VAR_1->p_awh, 0, 0, 0, 0, 0, 0);

    FUNC_6(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ p_block; struct TYPE_6__* offscreen_bitmap; scalar_t__ offscreen_context; } ;
typedef TYPE_1__ screen_data_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {TYPE_1__* p_data; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(demux_t *VAR_1)
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    screen_data_t *VAR_3 = VAR_2->p_data;

    if (VAR_3->offscreen_context)
        FUNC_0(VAR_3->offscreen_context);

    if (VAR_3->offscreen_bitmap)
        FUNC_2(VAR_3->offscreen_bitmap);

    if (VAR_3->p_block)
        FUNC_1(VAR_3->p_block);

    FUNC_2(VAR_3);

    return VAR_0;
}

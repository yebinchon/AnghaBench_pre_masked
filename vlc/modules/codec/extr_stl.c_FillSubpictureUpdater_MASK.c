
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int inner_align; int align; int * p_segments; } ;
struct TYPE_7__ {TYPE_1__ region; } ;
typedef TYPE_2__ subtext_updater_sys_t ;
struct TYPE_8__ {int i_justify; int * p_segment; int ** pp_segment_last; scalar_t__ i_accumulating; } ;
typedef TYPE_3__ stl_sg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(stl_sg_t *VAR_3, subtext_updater_sys_t *VAR_4)
{
    if(VAR_3->i_accumulating)
    {
        VAR_4->region.p_segments = FUNC_0(VAR_3->p_segment);
    }
    else
    {
        VAR_4->region.p_segments = VAR_3->p_segment;
        VAR_3->p_segment = ((void*)0);
        VAR_3->pp_segment_last = &VAR_3->p_segment;
    }

    VAR_4->region.align = VAR_0;
    if(VAR_3->i_justify == 0x01)
        VAR_4->region.inner_align = VAR_1;
    else if(VAR_3->i_justify == 0x03)
        VAR_4->region.inner_align = VAR_2;
}

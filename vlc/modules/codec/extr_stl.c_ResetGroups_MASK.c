
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_accumulating; scalar_t__ i_justify; void* i_start; void* i_end; int * p_style; int * p_segment; int ** pp_segment_last; } ;
typedef TYPE_1__ stl_sg_t ;
struct TYPE_5__ {TYPE_1__* groups; } ;
typedef TYPE_2__ decoder_sys_t ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(decoder_sys_t *VAR_2)
{
    for(size_t VAR_3=0; VAR_3<=VAR_0; VAR_3++)
    {
        stl_sg_t *VAR_4 = &VAR_2->groups[VAR_3];
        if(VAR_4->p_segment)
        {
            FUNC_0(VAR_4->p_segment);
            VAR_4->p_segment = ((void*)0);
            VAR_4->pp_segment_last = &VAR_4->p_segment;
        }

        if(VAR_4->p_style)
        {
            FUNC_1(VAR_4->p_style);
            VAR_4->p_style = ((void*)0);
        }

        VAR_4->i_accumulating = 0;
        VAR_4->i_end = VAR_1;
        VAR_4->i_start = VAR_1;
        VAR_4->i_justify = 0;
    }
}

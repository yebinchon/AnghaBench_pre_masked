
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {TYPE_2__** pp_segment_last; scalar_t__ p_style; } ;
typedef TYPE_1__ stl_sg_t ;
struct TYPE_5__ {struct TYPE_5__* p_next; int style; } ;


 char* FUNC_0 (char const*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(stl_sg_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                            const char *VAR_3)
{
    if(*VAR_2 == 0)
        return;

    char *VAR_4 = FUNC_0(VAR_3, VAR_1, *VAR_2);
    if(VAR_4)
    {
        *VAR_0->pp_segment_last = FUNC_2(VAR_4);
        if(*VAR_0->pp_segment_last)
        {
            if(VAR_0->p_style)
                (*VAR_0->pp_segment_last)->style = FUNC_3(VAR_0->p_style);
            VAR_0->pp_segment_last = &((*VAR_0->pp_segment_last)->p_next);
        }
        FUNC_1(VAR_4);
    }

    *VAR_2 = 0;
}

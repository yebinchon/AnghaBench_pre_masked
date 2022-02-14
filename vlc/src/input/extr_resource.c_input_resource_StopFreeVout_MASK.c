
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int * p_vout_free; } ;
typedef TYPE_1__ input_resource_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(input_resource_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    if (VAR_0->p_vout_free != ((void*)0))
    {
        FUNC_0(VAR_0->p_vout_free, "stop free vout");
        FUNC_3(VAR_0->p_vout_free);
    }
    FUNC_2(&VAR_0->lock);
}

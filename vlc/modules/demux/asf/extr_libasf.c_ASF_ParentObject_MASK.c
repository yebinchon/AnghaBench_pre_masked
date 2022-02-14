
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_last; TYPE_2__* p_first; TYPE_2__* p_next; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
typedef TYPE_2__ asf_object_t ;



__attribute__((used)) static void FUNC_0( asf_object_t *VAR_0, asf_object_t *VAR_1 )
{
    if( VAR_0 )
    {
        if( VAR_0->common.p_first )
        {
            VAR_0->common.p_last->common.p_next = VAR_1;
        }
        else
        {
            VAR_0->common.p_first = VAR_1;
        }
        VAR_0->common.p_last = VAR_1;
    }
}

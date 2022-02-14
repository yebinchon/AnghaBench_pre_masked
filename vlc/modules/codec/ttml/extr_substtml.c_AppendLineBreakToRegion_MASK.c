
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** pp_last_segment; } ;
typedef TYPE_1__ ttml_region_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ text_segment_t ;


 TYPE_2__* FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1( ttml_region_t *VAR_0 )
{
    text_segment_t *VAR_1 = FUNC_0( "\n" );
    if( VAR_1 )
    {
        *VAR_0->pp_last_segment = VAR_1;
        VAR_0->pp_last_segment = &VAR_1->p_next;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_count; TYPE_2__** p_list; TYPE_2__* p_head; } ;
typedef TYPE_1__ subsdelay_heap_t ;
struct TYPE_5__ {struct TYPE_5__* p_next; } ;
typedef TYPE_2__ subsdelay_heap_entry_t ;



__attribute__((used)) static void FUNC_0( subsdelay_heap_t *VAR_0 )
{
    int VAR_1;

    VAR_1 = 0;
    for( subsdelay_heap_entry_t *VAR_2 = VAR_0->p_head; VAR_2 != ((void*)0);
         VAR_2 = VAR_2->p_next )
    {
        VAR_0->p_list[VAR_1] = VAR_2;
        VAR_1++;
    }

    VAR_0->i_count = VAR_1;
}

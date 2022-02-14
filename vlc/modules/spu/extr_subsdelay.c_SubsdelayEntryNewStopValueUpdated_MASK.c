
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_new_stop; TYPE_1__* p_subpic; int b_update_stop; } ;
typedef TYPE_2__ subsdelay_heap_entry_t ;
struct TYPE_4__ {scalar_t__ i_stop; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( subsdelay_heap_entry_t *VAR_0 )
{
    if( !VAR_0->b_update_stop )
    {
        VAR_0->p_subpic->i_stop = VAR_0->i_new_stop - FUNC_0(100);
    }
}

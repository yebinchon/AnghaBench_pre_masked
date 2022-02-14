
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pll_prev; TYPE_1__* pll_next; } ;
typedef TYPE_2__ pylinkedlist_T ;
struct TYPE_5__ {TYPE_2__* pll_prev; } ;



__attribute__((used)) static void
FUNC_0(pylinkedlist_T *VAR_0, pylinkedlist_T **VAR_1)
{
    if (VAR_0->pll_prev == ((void*)0))
    {
 if (VAR_0->pll_next == ((void*)0))
 {
     *VAR_1 = ((void*)0);
     return;
 }
    }
    else
 VAR_0->pll_prev->pll_next = VAR_0->pll_next;

    if (VAR_0->pll_next == ((void*)0))
 *VAR_1 = VAR_0->pll_prev;
    else
 VAR_0->pll_next->pll_prev = VAR_0->pll_prev;
}

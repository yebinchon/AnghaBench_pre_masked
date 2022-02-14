
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int an_state; struct TYPE_4__* an_next; struct TYPE_4__* an_prev; } ;
typedef TYPE_1__ kcf_areq_node_t ;
struct TYPE_5__ {TYPE_1__* gs_first; TYPE_1__* gs_last; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

void
FUNC_0(kcf_areq_node_t *VAR_2)
{
 kcf_areq_node_t *VAR_3 = VAR_2->an_next;
 kcf_areq_node_t *VAR_4 = VAR_2->an_prev;

 if (VAR_3 != ((void*)0))
  VAR_3->an_prev = VAR_4;
 else
  VAR_1->gs_last = VAR_4;

 if (VAR_4 != ((void*)0))
  VAR_4->an_next = VAR_3;
 else
  VAR_1->gs_first = VAR_3;

 VAR_2->an_state = VAR_0;
}

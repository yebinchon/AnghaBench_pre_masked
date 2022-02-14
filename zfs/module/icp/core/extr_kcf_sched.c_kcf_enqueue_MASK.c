
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int an_state; struct TYPE_4__* an_prev; struct TYPE_4__* an_next; } ;
typedef TYPE_1__ kcf_areq_node_t ;
struct TYPE_5__ {scalar_t__ gs_njobs; scalar_t__ gs_maxjobs; int gs_lock; TYPE_1__* gs_last; TYPE_1__* gs_first; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(kcf_areq_node_t *VAR_3)
{
 kcf_areq_node_t *VAR_4;

 FUNC_1(&VAR_2->gs_lock);

 if (VAR_2->gs_njobs >= VAR_2->gs_maxjobs) {
  FUNC_2(&VAR_2->gs_lock);
  return (VAR_0);
 }

 if (VAR_2->gs_last == ((void*)0)) {
  VAR_2->gs_first = VAR_2->gs_last = VAR_3;
 } else {
  FUNC_0(VAR_2->gs_last->an_next == ((void*)0));
  VAR_4 = VAR_2->gs_last;
  VAR_4->an_next = VAR_3;
  VAR_2->gs_last = VAR_3;
  VAR_3->an_prev = VAR_4;
 }

 VAR_2->gs_njobs++;


 VAR_3->an_state = VAR_1;

 FUNC_2(&VAR_2->gs_lock);

 return (0);
}

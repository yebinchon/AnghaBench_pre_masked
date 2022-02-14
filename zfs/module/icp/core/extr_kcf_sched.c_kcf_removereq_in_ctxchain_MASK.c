
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kc_in_use_lock; TYPE_2__* kc_req_chain_last; TYPE_2__* kc_req_chain_first; } ;
typedef TYPE_1__ kcf_context_t ;
struct TYPE_6__ {struct TYPE_6__* an_ctxchain_next; } ;
typedef TYPE_2__ kcf_areq_node_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(kcf_context_t *VAR_0, kcf_areq_node_t *VAR_1)
{
 kcf_areq_node_t *VAR_2, *VAR_3;




 FUNC_0(VAR_0 != ((void*)0));
 FUNC_1(&VAR_0->kc_in_use_lock);
 VAR_3 = VAR_2 = VAR_0->kc_req_chain_first;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2 == VAR_1) {
   if (VAR_3 == VAR_2) {
    if ((VAR_0->kc_req_chain_first =
        VAR_2->an_ctxchain_next) == ((void*)0))
     VAR_0->kc_req_chain_last = ((void*)0);
   } else {
    if (VAR_2 == VAR_0->kc_req_chain_last)
     VAR_0->kc_req_chain_last = VAR_3;
    VAR_3->an_ctxchain_next = VAR_2->an_ctxchain_next;
   }

   break;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->an_ctxchain_next;
 }
 FUNC_2(&VAR_0->kc_in_use_lock);
}

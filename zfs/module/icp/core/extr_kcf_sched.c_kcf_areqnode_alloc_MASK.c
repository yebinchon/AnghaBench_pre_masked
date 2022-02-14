
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int kcf_req_params_t ;
typedef int kcf_provider_desc_t ;
struct TYPE_7__ {int kc_in_use_lock; TYPE_2__* kc_req_chain_last; TYPE_2__* kc_req_chain_first; } ;
typedef TYPE_1__ kcf_context_t ;
struct TYPE_8__ {int an_refcnt; struct TYPE_8__* an_ctxchain_next; int an_is_my_turn; int * an_idprev; int an_idnext; int * an_tried_plist; int * an_provider; int * an_prev; int an_next; int an_isdual; TYPE_1__* an_context; int an_params; int an_reqarg; int an_state; } ;
typedef TYPE_2__ kcf_areq_node_t ;
typedef int crypto_call_req_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static kcf_areq_node_t *
FUNC_6(kcf_provider_desc_t *VAR_5, kcf_context_t *VAR_6,
    crypto_call_req_t *VAR_7, kcf_req_params_t *VAR_8, boolean_t VAR_9)
{
 kcf_areq_node_t *VAR_10, *VAR_11;

 FUNC_0(VAR_7 != ((void*)0));
 VAR_10 = FUNC_3(VAR_4, VAR_2);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_10->an_state = VAR_3;
 VAR_10->an_reqarg = *VAR_7;
 VAR_10->an_params = *VAR_8;
 VAR_10->an_context = VAR_6;
 VAR_10->an_isdual = VAR_9;

 VAR_10->an_next = *(VAR_10->an_prev = ((void*)0));
 FUNC_2(VAR_5);
 VAR_10->an_provider = VAR_5;
 VAR_10->an_tried_plist = ((void*)0);
 VAR_10->an_refcnt = 1;
 VAR_10->an_idnext = *(VAR_10->an_idprev = ((void*)0));





 if (VAR_6 == ((void*)0))
  return (VAR_10);

 FUNC_1(VAR_6);



 FUNC_4(&VAR_6->kc_in_use_lock);
 VAR_10->an_ctxchain_next = ((void*)0);
 if ((VAR_11 = VAR_6->kc_req_chain_last) == ((void*)0)) {
  VAR_10->an_is_my_turn = VAR_1;
  VAR_6->kc_req_chain_last =
      VAR_6->kc_req_chain_first = VAR_10;
 } else {
  FUNC_0(VAR_6->kc_req_chain_first != ((void*)0));
  VAR_10->an_is_my_turn = VAR_0;

  VAR_11->an_ctxchain_next = VAR_10;
  VAR_6->kc_req_chain_last = VAR_10;
 }
 FUNC_5(&VAR_6->kc_in_use_lock);

 return (VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kc_in_use_lock; int * kc_req_chain_first; } ;
typedef TYPE_1__ kcf_context_t ;
typedef int kcf_areq_node_t ;
struct TYPE_5__ {scalar_t__ cc_framework_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
typedef int * crypto_context_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(crypto_context_t VAR_0)
{
 kcf_context_t *VAR_1;
 kcf_areq_node_t *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = (kcf_context_t *)((crypto_ctx_t *)VAR_0)->cc_framework_private;

 FUNC_5(&VAR_1->kc_in_use_lock);


 while ((VAR_2 = VAR_1->kc_req_chain_first) != ((void*)0)) {






  FUNC_1(VAR_2);
  FUNC_6(&VAR_1->kc_in_use_lock);

  FUNC_4(FUNC_0(VAR_2));
  FUNC_2(VAR_2);

  FUNC_5(&VAR_1->kc_in_use_lock);
 }

 FUNC_6(&VAR_1->kc_in_use_lock);
 FUNC_3(VAR_1);
}

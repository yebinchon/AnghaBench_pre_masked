
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pd_prov_handle; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_10__ {int * cc_opstate; scalar_t__ cc_flags; void* cc_framework_private; int * cc_provider_private; int cc_session; int cc_provider; } ;
struct TYPE_9__ {int kc_refcnt; TYPE_3__ kc_glbl_ctx; int * kc_mech; int * kc_sw_prov_desc; TYPE_1__* kc_prov_desc; int * kc_secondctx; int * kc_req_chain_last; int * kc_req_chain_first; } ;
typedef TYPE_2__ kcf_context_t ;
typedef int crypto_session_id_t ;
typedef TYPE_3__ crypto_ctx_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

crypto_ctx_t *
FUNC_2(crypto_call_req_t *VAR_3, kcf_provider_desc_t *VAR_4,
    crypto_session_id_t VAR_5)
{
 crypto_ctx_t *VAR_6;
 kcf_context_t *VAR_7;

 VAR_7 = FUNC_1(VAR_2,
     (VAR_3 == ((void*)0)) ? VAR_1 : VAR_0);
 if (VAR_7 == ((void*)0))
  return (((void*)0));


 VAR_7->kc_refcnt = 1;
 VAR_7->kc_req_chain_first = ((void*)0);
 VAR_7->kc_req_chain_last = ((void*)0);
 VAR_7->kc_secondctx = ((void*)0);
 FUNC_0(VAR_4);
 VAR_7->kc_prov_desc = VAR_4;
 VAR_7->kc_sw_prov_desc = ((void*)0);
 VAR_7->kc_mech = ((void*)0);

 VAR_6 = &VAR_7->kc_glbl_ctx;
 VAR_6->cc_provider = VAR_4->pd_prov_handle;
 VAR_6->cc_session = VAR_5;
 VAR_6->cc_provider_private = ((void*)0);
 VAR_6->cc_framework_private = (void *)VAR_7;
 VAR_6->cc_flags = 0;
 VAR_6->cc_opstate = ((void*)0);

 return (VAR_6);
}

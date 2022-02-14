
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_11__ {scalar_t__ pd_prov_type; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_12__ {TYPE_1__* kc_prov_desc; } ;
typedef TYPE_2__ kcf_context_t ;
typedef int crypto_data_t ;
struct TYPE_13__ {int cc_session; scalar_t__ cc_framework_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
typedef scalar_t__ crypto_context_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,int *,int *) ;
 int FUNC_5 (int *,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int *,int *,int ) ;

int
FUNC_7(crypto_context_t VAR_4, crypto_data_t *VAR_5,
    crypto_call_req_t *VAR_6)
{
 crypto_ctx_t *VAR_7 = (crypto_ctx_t *)VAR_4;
 kcf_context_t *VAR_8;
 kcf_provider_desc_t *VAR_9;
 kcf_req_params_t VAR_10;
 int VAR_11;

 if ((VAR_7 == ((void*)0)) ||
     ((VAR_8 = (kcf_context_t *)VAR_7->cc_framework_private) == ((void*)0)) ||
     ((VAR_9 = VAR_8->kc_prov_desc) == ((void*)0))) {
  return (VAR_1);
 }

 FUNC_0(VAR_9->pd_prov_type != VAR_2);


 if (FUNC_1(VAR_6, VAR_9)) {
  VAR_11 = FUNC_4(VAR_9, VAR_7, VAR_5, ((void*)0));
  FUNC_3(VAR_9, VAR_11);
 } else {
  FUNC_5(&VAR_10, VAR_3,
      VAR_7->cc_session, ((void*)0), ((void*)0), ((void*)0), VAR_5, ((void*)0));
  VAR_11 = FUNC_6(VAR_9, VAR_7, VAR_6, &VAR_10, VAR_0);
 }


 FUNC_2(VAR_11, VAR_8);
 return (VAR_11);
}

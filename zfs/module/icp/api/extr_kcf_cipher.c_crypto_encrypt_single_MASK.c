
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_11__ {int pd_sid; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_12__ {TYPE_1__* kc_prov_desc; } ;
typedef TYPE_2__ kcf_context_t ;
typedef int crypto_data_t ;
struct TYPE_13__ {scalar_t__ cc_framework_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
typedef scalar_t__ crypto_context_t ;
typedef int crypto_call_req_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int *,int *,int ) ;

int
FUNC_6(crypto_context_t VAR_3, crypto_data_t *VAR_4,
    crypto_data_t *VAR_5, crypto_call_req_t *VAR_6)
{
 crypto_ctx_t *VAR_7 = (crypto_ctx_t *)VAR_3;
 kcf_context_t *VAR_8;
 kcf_provider_desc_t *VAR_9;
 int VAR_10;
 kcf_req_params_t VAR_11;

 if ((VAR_7 == ((void*)0)) ||
     ((VAR_8 = (kcf_context_t *)VAR_7->cc_framework_private) == ((void*)0)) ||
     ((VAR_9 = VAR_8->kc_prov_desc) == ((void*)0))) {
  return (VAR_1);
 }


 if (FUNC_0(VAR_6, VAR_9)) {
  VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_4,
      VAR_5, ((void*)0));
  FUNC_3(VAR_9, VAR_10);
 } else {
  FUNC_4(&VAR_11, VAR_2, VAR_9->pd_sid,
      ((void*)0), ((void*)0), VAR_4, VAR_5, ((void*)0));
  VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_6, &VAR_11, VAR_0);
 }


 FUNC_1(VAR_10, VAR_8);
 return (VAR_10);
}

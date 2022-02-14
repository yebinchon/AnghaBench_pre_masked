
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_23__ {scalar_t__ pd_prov_type; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int kcf_context_t ;
typedef int crypto_session_id_t ;
typedef TYPE_1__* crypto_provider_t ;
struct TYPE_24__ {int cm_type; } ;
typedef TYPE_3__ crypto_mechanism_t ;
struct TYPE_25__ {scalar_t__ cc_framework_private; } ;
typedef TYPE_4__ crypto_ctx_t ;
typedef scalar_t__ crypto_context_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*,TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,TYPE_3__*,int *,int *,int *) ;
 int FUNC_11 (int ,int ,int ,TYPE_1__*,TYPE_1__**,int ) ;
 TYPE_4__* FUNC_12 (int *,TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,TYPE_4__*,int *,int *,int ) ;

int
FUNC_14(crypto_provider_t VAR_8, crypto_session_id_t VAR_9,
    crypto_mechanism_t *VAR_10, crypto_context_t *VAR_11, crypto_call_req_t *VAR_12)
{
 int VAR_13;
 crypto_ctx_t *VAR_14;
 kcf_req_params_t VAR_15;
 kcf_provider_desc_t *VAR_16 = VAR_8;
 kcf_provider_desc_t *VAR_17 = VAR_16;

 FUNC_0(FUNC_6(VAR_16));

 if (VAR_16->pd_prov_type == VAR_3) {
  VAR_13 = FUNC_11(VAR_10->cm_type,
      VAR_4, FUNC_2(VAR_12), VAR_16,
      &VAR_17, VAR_1);

  if (VAR_13 != VAR_6)
   return (VAR_13);
 }


 if ((VAR_14 = FUNC_12(VAR_12, VAR_17, VAR_9)) == ((void*)0)) {
  if (VAR_16->pd_prov_type == VAR_3)
   FUNC_7(VAR_17);
  return (VAR_2);
 }


 if (FUNC_1(VAR_12, VAR_16)) {
  crypto_mechanism_t VAR_18;

  VAR_18 = *VAR_10;
  FUNC_8(VAR_10->cm_type, VAR_17, &VAR_18);
  VAR_13 = FUNC_4(VAR_17, VAR_14, &VAR_18,
      FUNC_9(VAR_12));
  FUNC_5(VAR_16, VAR_13);
 } else {
  FUNC_10(&VAR_15, VAR_7, VAR_9,
      VAR_10, ((void*)0), ((void*)0), ((void*)0));
  VAR_13 = FUNC_13(VAR_17, VAR_14, VAR_12, &VAR_15,
      VAR_0);
 }

 if (VAR_16->pd_prov_type == VAR_3)
  FUNC_7(VAR_17);

 if ((VAR_13 == VAR_6) || (VAR_13 == VAR_5))
  *VAR_11 = (crypto_context_t)VAR_14;
 else {

  FUNC_3((kcf_context_t *)VAR_14->cc_framework_private);
 }

 return (VAR_13);
}

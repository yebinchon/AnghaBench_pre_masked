
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_20__ {scalar_t__ pd_prov_type; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
struct TYPE_21__ {TYPE_2__* kc_sw_prov_desc; TYPE_1__* kc_mech; TYPE_2__* kc_prov_desc; } ;
typedef TYPE_3__ kcf_context_t ;
struct TYPE_22__ {scalar_t__ cd_length; } ;
typedef TYPE_4__ crypto_data_t ;
struct TYPE_23__ {int cc_flags; int cc_session; scalar_t__ cc_framework_private; } ;
typedef TYPE_5__ crypto_ctx_t ;
typedef scalar_t__ crypto_context_t ;
typedef int crypto_call_req_t ;
struct TYPE_19__ {scalar_t__ me_threshold; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,TYPE_4__*,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *,int ,int ,int *,int *,TYPE_4__*,TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*,int *,int *,int ) ;

int
FUNC_7(crypto_context_t VAR_5, crypto_data_t *VAR_6,
    crypto_data_t *VAR_7, crypto_call_req_t *VAR_8)
{
 crypto_ctx_t *VAR_9 = (crypto_ctx_t *)VAR_5;
 kcf_context_t *VAR_10;
 kcf_provider_desc_t *VAR_11;
 int VAR_12;
 kcf_req_params_t VAR_13;

 if ((VAR_9 == ((void*)0)) ||
     ((VAR_10 = (kcf_context_t *)VAR_9->cc_framework_private) == ((void*)0)) ||
     ((VAR_11 = VAR_10->kc_prov_desc) == ((void*)0))) {
  return (VAR_1);
 }

 FUNC_0(VAR_11->pd_prov_type != VAR_2);


 if (FUNC_1(VAR_8, VAR_11)) {
  VAR_12 = FUNC_3(VAR_11, VAR_9, VAR_6,
      VAR_7, ((void*)0));
  FUNC_4(VAR_11, VAR_12);
  return (VAR_12);
 }


 if ((VAR_9->cc_flags & VAR_3) && VAR_8 == ((void*)0)) {
  if (VAR_6->cd_length < VAR_10->kc_mech->me_threshold &&
      VAR_10->kc_sw_prov_desc != ((void*)0) &&
      FUNC_2(VAR_10->kc_sw_prov_desc)) {
   VAR_11 = VAR_10->kc_sw_prov_desc;
  }
 }

 FUNC_5(&VAR_13, VAR_4,
     VAR_9->cc_session, ((void*)0), ((void*)0), VAR_6, VAR_7, ((void*)0));
 VAR_12 = FUNC_6(VAR_11, VAR_9, VAR_8, &VAR_13, VAR_0);

 return (VAR_12);
}

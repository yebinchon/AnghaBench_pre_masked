
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_25__ {scalar_t__ pd_prov_type; int pd_flags; scalar_t__ pd_hash_limit; int pd_sid; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int kcf_prov_tried_t ;
struct TYPE_26__ {scalar_t__ me_gen_swprov; } ;
typedef TYPE_2__ kcf_mech_entry_t ;
struct TYPE_27__ {scalar_t__ ct_generation; int * ct_prov_tmpl; } ;
typedef TYPE_3__ kcf_ctx_template_t ;
typedef int * crypto_spi_ctx_template_t ;
struct TYPE_28__ {int cm_type; } ;
typedef TYPE_4__ crypto_mechanism_t ;
typedef int crypto_key_t ;
struct TYPE_29__ {scalar_t__ cd_length; } ;
typedef TYPE_5__ crypto_data_t ;
typedef scalar_t__ crypto_ctx_template_t ;
typedef int crypto_call_req_t ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_4__*,int *,TYPE_5__*,TYPE_5__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*,TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,TYPE_4__*,int *,TYPE_5__*,TYPE_5__*,int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int ,TYPE_2__**,int*,int *,int ,int ,scalar_t__) ;
 int * FUNC_13 (int **,TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int *,int *,int *,int ) ;

int
FUNC_15(crypto_mechanism_t *VAR_9, crypto_data_t *VAR_10,
    crypto_key_t *VAR_11, crypto_ctx_template_t VAR_12, crypto_data_t *VAR_13,
    crypto_call_req_t *VAR_14)
{
 int VAR_15;
 kcf_mech_entry_t *VAR_16;
 kcf_req_params_t VAR_17;
 kcf_provider_desc_t *VAR_18;
 kcf_ctx_template_t *VAR_19;
 crypto_spi_ctx_template_t VAR_20 = ((void*)0);
 kcf_prov_tried_t *VAR_21 = ((void*)0);

retry:

 if ((VAR_18 = FUNC_12(VAR_9->cm_type, &VAR_16, &VAR_15,
     VAR_21, VAR_1, FUNC_1(VAR_14),
     VAR_10->cd_length)) == ((void*)0)) {
  if (VAR_21 != ((void*)0))
   FUNC_11(VAR_21);
  return (VAR_15);
 }
 if ((VAR_18->pd_prov_type == VAR_7) &&
     ((VAR_19 = (kcf_ctx_template_t *)VAR_12) != ((void*)0))) {
  if (VAR_19->ct_generation != VAR_16->me_gen_swprov) {
   if (VAR_21 != ((void*)0))
    FUNC_11(VAR_21);
   FUNC_7(VAR_18);
   return (VAR_4);
  } else {
   VAR_20 = VAR_19->ct_prov_tmpl;
  }
 }


 if (FUNC_0(VAR_14, VAR_18)) {
  crypto_mechanism_t VAR_22;

  VAR_22 = *VAR_9;
  FUNC_8(VAR_9->cm_type, VAR_18, &VAR_22);

  VAR_15 = FUNC_6(VAR_18, VAR_18->pd_sid, &VAR_22, VAR_11, VAR_10,
      VAR_13, VAR_20, FUNC_9(VAR_14));
  FUNC_5(VAR_18, VAR_15);
 } else {
  if (VAR_18->pd_prov_type == VAR_3 &&
      (VAR_18->pd_flags & VAR_2) &&
      (VAR_10->cd_length > VAR_18->pd_hash_limit)) {






   VAR_15 = VAR_0;
  } else {
   FUNC_10(&VAR_17, VAR_8,
       VAR_18->pd_sid, VAR_9, VAR_11, VAR_10, VAR_13, VAR_20);

   VAR_15 = FUNC_14(VAR_18, ((void*)0), VAR_14, &VAR_17,
       FUNC_3(VAR_14));
  }
 }

 if (VAR_15 != VAR_6 && VAR_15 != VAR_5 &&
     FUNC_2(VAR_15)) {

  if (FUNC_13(&VAR_21, VAR_18, FUNC_4(VAR_14)) != ((void*)0))
   goto retry;
 }

 if (VAR_21 != ((void*)0))
  FUNC_11(VAR_21);

 FUNC_7(VAR_18);
 return (VAR_15);
}

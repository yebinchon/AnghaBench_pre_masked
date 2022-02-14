
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
struct TYPE_25__ {scalar_t__ pd_prov_type; int pd_sid; } ;
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
struct TYPE_29__ {int cd_length; } ;
typedef TYPE_5__ crypto_data_t ;
typedef scalar_t__ crypto_ctx_template_t ;
typedef int crypto_call_req_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_4__*,int *,TYPE_5__*,TYPE_5__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*,TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,TYPE_4__*,int *,TYPE_5__*,TYPE_5__*,int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int ,TYPE_2__**,int*,int *,int ,int ,int ) ;
 int * FUNC_12 (int **,TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int *,int *,int *,int ) ;

int
FUNC_14(crypto_mechanism_t *VAR_7, crypto_data_t *VAR_8,
    crypto_key_t *VAR_9, crypto_ctx_template_t VAR_10, crypto_data_t *VAR_11,
    crypto_call_req_t *VAR_12)
{
 int VAR_13;
 kcf_mech_entry_t *VAR_14;
 kcf_req_params_t VAR_15;
 kcf_provider_desc_t *VAR_16;
 kcf_ctx_template_t *VAR_17;
 crypto_spi_ctx_template_t VAR_18 = ((void*)0);
 kcf_prov_tried_t *VAR_19 = ((void*)0);

retry:

 if ((VAR_16 = FUNC_11(VAR_7->cm_type, &VAR_14, &VAR_13,
     VAR_19, VAR_1, FUNC_1(VAR_12),
     VAR_8->cd_length)) == ((void*)0)) {
  if (VAR_19 != ((void*)0))
   FUNC_10(VAR_19);
  return (VAR_13);
 }
 if ((VAR_16->pd_prov_type == VAR_5) &&
     ((VAR_17 = (kcf_ctx_template_t *)VAR_10) != ((void*)0))) {
  if (VAR_17->ct_generation != VAR_14->me_gen_swprov) {
   if (VAR_19 != ((void*)0))
    FUNC_10(VAR_19);
   FUNC_6(VAR_16);
   return (VAR_2);
  } else {
   VAR_18 = VAR_17->ct_prov_tmpl;
  }
 }


 if (FUNC_0(VAR_12, VAR_16)) {
  crypto_mechanism_t VAR_20;

  VAR_20 = *VAR_7;
  FUNC_7(VAR_7->cm_type, VAR_16, &VAR_20);

  VAR_13 = FUNC_4(VAR_16, VAR_16->pd_sid, &VAR_20, VAR_9,
      VAR_8, VAR_11, VAR_18, FUNC_8(VAR_12));
  FUNC_5(VAR_16, VAR_13);
 } else {
  FUNC_9(&VAR_15, VAR_6, VAR_16->pd_sid,
      VAR_7, VAR_9, VAR_8, VAR_11, VAR_18);
  VAR_13 = FUNC_13(VAR_16, ((void*)0), VAR_12, &VAR_15, VAR_0);
 }

 if (VAR_13 != VAR_4 && VAR_13 != VAR_3 &&
     FUNC_2(VAR_13)) {

  if (FUNC_12(&VAR_19, VAR_16, FUNC_3(VAR_12)) != ((void*)0))
   goto retry;
 }

 if (VAR_19 != ((void*)0))
  FUNC_10(VAR_19);

 FUNC_6(VAR_16);
 return (VAR_13);
}

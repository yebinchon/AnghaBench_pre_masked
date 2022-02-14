
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pd_prov_type; int pd_flags; int pd_sid; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int kcf_prov_tried_t ;
struct TYPE_13__ {scalar_t__ me_gen_swprov; } ;
typedef TYPE_2__ kcf_mech_entry_t ;
struct TYPE_14__ {scalar_t__ ct_generation; int * ct_prov_tmpl; } ;
typedef TYPE_3__ kcf_ctx_template_t ;
typedef int * crypto_spi_ctx_template_t ;
struct TYPE_15__ {int cm_type; } ;
typedef TYPE_4__ crypto_mechanism_t ;
typedef int crypto_key_t ;
typedef scalar_t__ crypto_ctx_template_t ;
typedef int crypto_context_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_4__*,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ,TYPE_2__**,int*,int *,int ,int ,int ) ;
 int * FUNC_7 (int **,TYPE_1__*,int ) ;

int
FUNC_8(crypto_mechanism_t *VAR_8, crypto_key_t *VAR_9,
    crypto_ctx_template_t VAR_10, crypto_context_t *VAR_11,
    crypto_call_req_t *VAR_12)
{
 int VAR_13;
 kcf_mech_entry_t *VAR_14;
 kcf_provider_desc_t *VAR_15;
 kcf_ctx_template_t *VAR_16;
 crypto_spi_ctx_template_t VAR_17 = ((void*)0);
 kcf_prov_tried_t *VAR_18 = ((void*)0);

retry:

 if ((VAR_15 = FUNC_6(VAR_8->cm_type, &VAR_14, &VAR_13,
     VAR_18, VAR_1, FUNC_0(VAR_12), 0)) == ((void*)0)) {
  if (VAR_18 != ((void*)0))
   FUNC_5(VAR_18);
  return (VAR_13);
 }
 if ((VAR_15->pd_prov_type == VAR_7) &&
     ((VAR_16 = (kcf_ctx_template_t *)VAR_10) != ((void*)0))) {
  if (VAR_16->ct_generation != VAR_14->me_gen_swprov) {
   if (VAR_18 != ((void*)0))
    FUNC_5(VAR_18);
   FUNC_3(VAR_15);
   return (VAR_4);
  } else {
   VAR_17 = VAR_16->ct_prov_tmpl;
  }
 }

 if (VAR_15->pd_prov_type == VAR_3 &&
     (VAR_15->pd_flags & VAR_2)) {
  VAR_13 = VAR_0;
 } else {
  VAR_13 = FUNC_4(VAR_15, VAR_15->pd_sid, VAR_8, VAR_9,
      VAR_17, VAR_11, VAR_12);
 }
 if (VAR_13 != VAR_6 && VAR_13 != VAR_5 &&
     FUNC_1(VAR_13)) {

  if (FUNC_7(&VAR_18, VAR_15, FUNC_2(VAR_12)) != ((void*)0))
   goto retry;
 }

 if (VAR_18 != ((void*)0))
  FUNC_5(VAR_18);

 FUNC_3(VAR_15);
 return (VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pd_prov_type; int pd_sid; } ;
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
typedef int crypto_func_group_t ;
typedef scalar_t__ crypto_ctx_template_t ;
typedef int crypto_context_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_4__*,int *,int *,int *,int *,int ) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ,TYPE_2__**,int*,int *,int ,int ,int ) ;
 int * FUNC_7 (int **,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_8(crypto_mechanism_t *VAR_4, crypto_key_t *VAR_5,
    crypto_ctx_template_t VAR_6, crypto_context_t *VAR_7,
    crypto_call_req_t *VAR_8, crypto_func_group_t VAR_9)
{
 int VAR_10;
 kcf_mech_entry_t *VAR_11;
 kcf_provider_desc_t *VAR_12;
 kcf_ctx_template_t *VAR_13;
 crypto_spi_ctx_template_t VAR_14 = ((void*)0);
 kcf_prov_tried_t *VAR_15 = ((void*)0);

retry:

 if ((VAR_12 = FUNC_6(VAR_4->cm_type, &VAR_11, &VAR_10,
     VAR_15, VAR_9, FUNC_0(VAR_8), 0)) == ((void*)0)) {
  if (VAR_15 != ((void*)0))
   FUNC_5(VAR_15);
  return (VAR_10);
 }
 if ((VAR_12->pd_prov_type == VAR_3) &&
     ((VAR_13 = (kcf_ctx_template_t *)VAR_6) != ((void*)0))) {
  if (VAR_13->ct_generation != VAR_11->me_gen_swprov) {
   if (VAR_15 != ((void*)0))
    FUNC_5(VAR_15);
   FUNC_3(VAR_12);
   return (VAR_0);
  } else {
   VAR_14 = VAR_13->ct_prov_tmpl;
  }
 }

 VAR_10 = FUNC_4(VAR_12, VAR_12->pd_sid, VAR_4, VAR_5,
     VAR_14, VAR_7, VAR_8, VAR_9);
 if (VAR_10 != VAR_2 && VAR_10 != VAR_1 &&
     FUNC_1(VAR_10)) {

  if (FUNC_7(&VAR_15, VAR_12, FUNC_2(VAR_8)) != ((void*)0))
   goto retry;
 }

 if (VAR_15 != ((void*)0))
  FUNC_5(VAR_15);

 FUNC_3(VAR_12);
 return (VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int kcf_provider_desc_t ;
struct TYPE_10__ {int me_gen_swprov; } ;
typedef TYPE_1__ kcf_mech_entry_t ;
struct TYPE_11__ {int ct_generation; int ct_size; int ct_prov_tmpl; } ;
typedef TYPE_2__ kcf_ctx_template_t ;
struct TYPE_12__ {int cm_param_len; int cm_param; int cm_type; } ;
typedef TYPE_3__ crypto_mechanism_t ;
typedef int crypto_key_t ;
typedef TYPE_2__* crypto_ctx_template_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_3__*,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int **,TYPE_1__**,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

int
FUNC_7(crypto_mechanism_t *VAR_5, crypto_key_t *VAR_6,
    crypto_ctx_template_t *VAR_7, int VAR_8)
{
 int VAR_9;
 kcf_mech_entry_t *VAR_10;
 kcf_provider_desc_t *VAR_11;
 kcf_ctx_template_t *VAR_12;
 crypto_mechanism_t VAR_13;



 if (VAR_7 == ((void*)0))
  return (VAR_1);

 if (VAR_5 == ((void*)0))
  return (VAR_3);

 VAR_9 = FUNC_4(VAR_5->cm_type, &VAR_11, &VAR_10, VAR_0);
 if (VAR_9 != VAR_4)
  return (VAR_9);

 if ((VAR_12 = (kcf_ctx_template_t *)FUNC_5(
     sizeof (kcf_ctx_template_t), VAR_8)) == ((void*)0)) {
  FUNC_1(VAR_11);
  return (VAR_2);
 }


 VAR_13.cm_type = FUNC_3(VAR_11, VAR_5->cm_type);
 VAR_13.cm_param = VAR_5->cm_param;
 VAR_13.cm_param_len = VAR_5->cm_param_len;

 VAR_9 = FUNC_0(VAR_11, &VAR_13, VAR_6,
     &(VAR_12->ct_prov_tmpl), &(VAR_12->ct_size), FUNC_2(VAR_8));

 if (VAR_9 == VAR_4) {
  VAR_12->ct_generation = VAR_10->me_gen_swprov;
  *VAR_7 = VAR_12;
 } else {
  FUNC_6(VAR_12, sizeof (kcf_ctx_template_t));
 }
 FUNC_1(VAR_11);

 return (VAR_9);
}

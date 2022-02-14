
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int taskqid_t ;
typedef int taskq_t ;
struct TYPE_34__ {int dop_framework_mechtype; scalar_t__ dop_ciphertext; } ;
struct TYPE_32__ {int mo_templ; int mo_framework_mechtype; scalar_t__ mo_data; } ;
struct TYPE_26__ {TYPE_9__ decrypt_params; TYPE_7__ mac_params; } ;
struct TYPE_29__ {int rp_opgrp; TYPE_1__ rp_u; } ;
typedef TYPE_4__ kcf_req_params_t ;
struct TYPE_27__ {int * ks_taskq; } ;
struct TYPE_30__ {int pd_prov_type; TYPE_2__ pd_sched_info; } ;
typedef TYPE_5__ kcf_provider_desc_t ;
struct TYPE_31__ {int me_gen_swprov; } ;
typedef TYPE_6__ kcf_mech_entry_t ;
typedef TYPE_7__ kcf_mac_ops_params_t ;
struct TYPE_28__ {int cr_flag; TYPE_8__* cr_callback_arg; int cr_callback_func; } ;
struct TYPE_33__ {TYPE_3__ kr_callreq; int kr_savelen; int kr_saveoffset; TYPE_11__* kr_areq; TYPE_4__ kr_params; } ;
typedef TYPE_8__ kcf_dual_req_t ;
typedef TYPE_9__ kcf_decrypt_ops_params_t ;
struct TYPE_23__ {int ct_prov_tmpl; int ct_generation; } ;
typedef TYPE_10__ kcf_ctx_template_t ;
struct TYPE_24__ {void* an_isdual; TYPE_3__ an_reqarg; TYPE_5__* an_provider; TYPE_4__ an_params; } ;
typedef TYPE_11__ kcf_areq_node_t ;
struct TYPE_25__ {int dd_len1; int dd_offset1; int dd_len2; int dd_offset2; } ;
typedef TYPE_12__ crypto_dual_data_t ;
typedef int * crypto_ctx_template_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_0 (TYPE_11__*) ;


 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_5__*,int *,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_11__*,int) ;
 TYPE_5__* FUNC_6 (int ,TYPE_6__**,int*,int *,int ,int,int ) ;
 int VAR_12 ;
 int FUNC_7 (TYPE_8__*,int) ;
 int VAR_13 ;
 int FUNC_8 (int *,int ,TYPE_11__*,int ) ;

void
FUNC_9(void *VAR_14, int VAR_15)
{
 kcf_dual_req_t *VAR_16 = (kcf_dual_req_t *)VAR_14;
 kcf_req_params_t *VAR_17 = &(VAR_16->kr_params);
 kcf_areq_node_t *VAR_18 = VAR_16->kr_areq;
 int VAR_19 = VAR_15;
 kcf_provider_desc_t *VAR_20 = ((void*)0);
 crypto_dual_data_t *VAR_21 = ((void*)0);


 if (VAR_19 != VAR_9) {
out:
  VAR_18->an_reqarg = VAR_16->kr_callreq;
  FUNC_0(VAR_18);
  FUNC_7(VAR_16, sizeof (kcf_dual_req_t));
  VAR_18->an_isdual = VAR_0;
  FUNC_5(VAR_18, VAR_19);
  return;
 }

 switch (VAR_17->rp_opgrp) {
 case 128: {







  kcf_mac_ops_params_t *VAR_22 = &(VAR_17->rp_u.mac_params);
  crypto_ctx_template_t VAR_23;
  kcf_mech_entry_t *VAR_24;

  VAR_21 = (crypto_dual_data_t *)VAR_22->mo_data;
  VAR_23 = (crypto_ctx_template_t)VAR_22->mo_templ;


  VAR_20 = FUNC_6(VAR_22->mo_framework_mechtype,
      &VAR_24, &VAR_19, ((void*)0), VAR_3,
      (VAR_18->an_reqarg.cr_flag & VAR_8), VAR_21->dd_len2);

  if (VAR_20 == ((void*)0)) {
   VAR_19 = VAR_5;
   goto out;
  }

  if ((VAR_20->pd_prov_type == 130) &&
      (VAR_23 != ((void*)0))) {
   kcf_ctx_template_t *VAR_25;

   VAR_25 = (kcf_ctx_template_t *)VAR_23;

   if (VAR_25->ct_generation != VAR_24->me_gen_swprov) {
    FUNC_2(VAR_20);
    VAR_19 = VAR_6;
    goto out;
   }
   VAR_22->mo_templ = VAR_25->ct_prov_tmpl;
  }

  break;
 }
 case 129: {
  kcf_decrypt_ops_params_t *VAR_26 =
      &(VAR_17->rp_u.decrypt_params);

  VAR_21 = (crypto_dual_data_t *)VAR_26->dop_ciphertext;

  VAR_20 = FUNC_6(VAR_26->dop_framework_mechtype,
      ((void*)0), &VAR_19, ((void*)0), VAR_2,
      (VAR_18->an_reqarg.cr_flag & VAR_8), VAR_21->dd_len1);

  if (VAR_20 == ((void*)0)) {
   VAR_19 = VAR_5;
   goto out;
  }
  break;
 }
 default:
  break;
 }


 VAR_16->kr_saveoffset = VAR_21->dd_offset1;
 VAR_16->kr_savelen = VAR_21->dd_len1;
 VAR_21->dd_offset1 = VAR_21->dd_offset2;
 VAR_21->dd_len1 = VAR_21->dd_len2;


 if (VAR_18->an_reqarg.cr_flag & VAR_8) {
  VAR_18->an_reqarg.cr_flag = VAR_8;
 } else {
  VAR_18->an_reqarg.cr_flag = 0;
 }

 VAR_18->an_reqarg.cr_callback_func = VAR_12;
 VAR_18->an_reqarg.cr_callback_arg = VAR_16;
 VAR_18->an_isdual = VAR_1;







 switch (VAR_20->pd_prov_type) {
 case 130:
  VAR_19 = FUNC_4(VAR_20, ((void*)0), VAR_17,
      FUNC_3(VAR_10));
  break;

 case 131: {
  kcf_provider_desc_t *VAR_27;
  taskq_t *VAR_28 = VAR_20->pd_sched_info.ks_taskq;





  VAR_18->an_params = *VAR_17;
  VAR_27 = VAR_18->an_provider;
  FUNC_2(VAR_27);
  FUNC_1(VAR_20);
  VAR_18->an_provider = VAR_20;





  if (FUNC_8(VAR_28, VAR_13, VAR_18,
      VAR_11) == (taskqid_t)0) {
   VAR_19 = VAR_4;
  } else {
   VAR_19 = VAR_7;
  }
  break;
 }
 default:
  break;
 }





 FUNC_0(VAR_18);
 FUNC_2(VAR_20);

 if (VAR_19 != VAR_7) {


  VAR_21->dd_offset1 = VAR_16->kr_saveoffset;
  VAR_21->dd_len1 = VAR_16->kr_savelen;
  VAR_18->an_reqarg = VAR_16->kr_callreq;
  FUNC_7(VAR_16, sizeof (kcf_dual_req_t));
  VAR_18->an_isdual = VAR_0;
  FUNC_5(VAR_18, VAR_19);
 }
}

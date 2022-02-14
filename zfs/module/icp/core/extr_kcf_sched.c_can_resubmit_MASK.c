
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_18__ {int cm_type; } ;
struct TYPE_20__ {TYPE_12__ vo_mech; int vo_framework_mechtype; } ;
typedef TYPE_2__ kcf_verify_ops_params_t ;
struct TYPE_21__ {TYPE_12__ so_mech; int so_framework_mechtype; } ;
typedef TYPE_3__ kcf_sign_ops_params_t ;
struct TYPE_24__ {TYPE_12__ md_decr_mech; int md_framework_decr_mechtype; TYPE_12__ md_mac_mech; int md_framework_mac_mechtype; } ;
struct TYPE_26__ {TYPE_12__ em_mac_mech; int em_framework_mac_mechtype; TYPE_12__ em_encr_mech; int em_framework_encr_mechtype; } ;
struct TYPE_16__ {TYPE_12__ dop_mech; int dop_framework_mechtype; } ;
struct TYPE_25__ {TYPE_12__ eo_mech; int eo_framework_mechtype; } ;
struct TYPE_23__ {TYPE_12__ mo_mech; int mo_framework_mechtype; } ;
struct TYPE_27__ {TYPE_12__ do_mech; int do_framework_mechtype; } ;
struct TYPE_19__ {TYPE_6__ mac_decrypt_params; TYPE_8__ encrypt_mac_params; TYPE_10__ decrypt_params; TYPE_7__ encrypt_params; TYPE_2__ verify_params; TYPE_3__ sign_params; TYPE_5__ mac_params; TYPE_9__ digest_params; } ;
struct TYPE_22__ {int rp_optype; int rp_opgrp; TYPE_1__ rp_u; } ;
typedef TYPE_4__ kcf_req_params_t ;
typedef int kcf_op_type_t ;
typedef TYPE_5__ kcf_mac_ops_params_t ;
typedef TYPE_6__ kcf_mac_decrypt_ops_params_t ;
typedef TYPE_7__ kcf_encrypt_ops_params_t ;
typedef TYPE_8__ kcf_encrypt_mac_ops_params_t ;
typedef TYPE_9__ kcf_digest_ops_params_t ;
typedef TYPE_10__ kcf_decrypt_ops_params_t ;
struct TYPE_17__ {TYPE_4__ an_params; } ;
typedef TYPE_11__ kcf_areq_node_t ;
typedef TYPE_12__ crypto_mechanism_t ;
typedef int crypto_func_group_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static boolean_t
FUNC_3(kcf_areq_node_t *VAR_22, crypto_mechanism_t **VAR_23,
    crypto_mechanism_t **VAR_24, crypto_func_group_t *VAR_25)
{
 kcf_req_params_t *VAR_26;
 kcf_op_type_t VAR_27;

 VAR_26 = &VAR_22->an_params;
 VAR_27 = VAR_26->rp_optype;

 if (!(FUNC_2(VAR_27) || FUNC_1(VAR_27)))
  return (VAR_0);

 switch (VAR_26->rp_opgrp) {
 case 136: {
  kcf_digest_ops_params_t *VAR_28 = &VAR_26->rp_u.digest_params;

  VAR_28->do_mech.cm_type = VAR_28->do_framework_mechtype;
  *VAR_23 = &VAR_28->do_mech;
  *VAR_25 = (VAR_27 == 128) ? VAR_4 :
      VAR_5;
  break;
 }

 case 133: {
  kcf_mac_ops_params_t *VAR_29 = &VAR_26->rp_u.mac_params;

  VAR_29->mo_mech.cm_type = VAR_29->mo_framework_mechtype;
  *VAR_23 = &VAR_29->mo_mech;
  *VAR_25 = (VAR_27 == 128) ? VAR_10 :
      VAR_11;
  break;
 }

 case 131: {
  kcf_sign_ops_params_t *VAR_30 = &VAR_26->rp_u.sign_params;

  VAR_30->so_mech.cm_type = VAR_30->so_framework_mechtype;
  *VAR_23 = &VAR_30->so_mech;
  switch (VAR_27) {
  case 128:
   *VAR_25 = VAR_14;
   break;
  case 129:
   *VAR_25 = VAR_15;
   break;
  default:
   FUNC_0(VAR_27 == VAR_20);
   *VAR_25 = VAR_16;
  }
  break;
 }

 case 130: {
  kcf_verify_ops_params_t *VAR_31 = &VAR_26->rp_u.verify_params;

  VAR_31->vo_mech.cm_type = VAR_31->vo_framework_mechtype;
  *VAR_23 = &VAR_31->vo_mech;
  switch (VAR_27) {
  case 128:
   *VAR_25 = VAR_17;
   break;
  case 129:
   *VAR_25 = VAR_18;
   break;
  default:
   FUNC_0(VAR_27 == VAR_21);
   *VAR_25 = VAR_19;
  }
  break;
 }

 case 135: {
  kcf_encrypt_ops_params_t *VAR_32 = &VAR_26->rp_u.encrypt_params;

  VAR_32->eo_mech.cm_type = VAR_32->eo_framework_mechtype;
  *VAR_23 = &VAR_32->eo_mech;
  *VAR_25 = (VAR_27 == 128) ? VAR_6 :
      VAR_7;
  break;
 }

 case 137: {
  kcf_decrypt_ops_params_t *VAR_33 = &VAR_26->rp_u.decrypt_params;

  VAR_33->dop_mech.cm_type = VAR_33->dop_framework_mechtype;
  *VAR_23 = &VAR_33->dop_mech;
  *VAR_25 = (VAR_27 == 128) ? VAR_2 :
      VAR_3;
  break;
 }

 case 134: {
  kcf_encrypt_mac_ops_params_t *VAR_34 =
      &VAR_26->rp_u.encrypt_mac_params;

  VAR_34->em_encr_mech.cm_type = VAR_34->em_framework_encr_mechtype;
  *VAR_23 = &VAR_34->em_encr_mech;
  VAR_34->em_mac_mech.cm_type = VAR_34->em_framework_mac_mechtype;
  *VAR_24 = &VAR_34->em_mac_mech;
  *VAR_25 = (VAR_27 == 128) ? VAR_8 :
      VAR_9;
  break;
 }

 case 132: {
  kcf_mac_decrypt_ops_params_t *VAR_35 =
      &VAR_26->rp_u.mac_decrypt_params;

  VAR_35->md_mac_mech.cm_type = VAR_35->md_framework_mac_mechtype;
  *VAR_23 = &VAR_35->md_mac_mech;
  VAR_35->md_decr_mech.cm_type = VAR_35->md_framework_decr_mechtype;
  *VAR_24 = &VAR_35->md_decr_mech;
  *VAR_25 = (VAR_27 == 128) ? VAR_12 :
      VAR_13;
  break;
 }

 default:
  return (VAR_0);
 }

 return (VAR_1);
}

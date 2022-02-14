
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ dop_ciphertext; } ;
struct TYPE_14__ {scalar_t__ mo_data; } ;
struct TYPE_12__ {TYPE_5__ decrypt_params; TYPE_3__ mac_params; } ;
struct TYPE_13__ {int rp_opgrp; TYPE_1__ rp_u; } ;
typedef TYPE_2__ kcf_req_params_t ;
typedef TYPE_3__ kcf_mac_ops_params_t ;
struct TYPE_19__ {int cr_callback_arg; int (* cr_callback_func ) (int ,int) ;} ;
struct TYPE_15__ {TYPE_8__ kr_callreq; int kr_savelen; int kr_saveoffset; TYPE_6__* kr_areq; TYPE_2__ kr_params; } ;
typedef TYPE_4__ kcf_dual_req_t ;
typedef TYPE_5__ kcf_decrypt_ops_params_t ;
struct TYPE_17__ {int an_isdual; TYPE_8__ an_reqarg; } ;
typedef TYPE_6__ kcf_areq_node_t ;
struct TYPE_18__ {int dd_len1; int dd_offset1; } ;
typedef TYPE_7__ crypto_dual_data_t ;
typedef TYPE_8__ crypto_call_req_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;


 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(void *VAR_1, int VAR_2)
{
 kcf_dual_req_t *VAR_3 = (kcf_dual_req_t *)VAR_1;

 kcf_req_params_t *VAR_4 = &(VAR_3->kr_params);
 kcf_areq_node_t *VAR_5 = VAR_3->kr_areq;
 crypto_dual_data_t *VAR_6 = ((void*)0);

 switch (VAR_4->rp_opgrp) {
 case 128: {
  kcf_mac_ops_params_t *VAR_7 = &(VAR_4->rp_u.mac_params);

  VAR_6 = (crypto_dual_data_t *)VAR_7->mo_data;
  break;
 }
 case 129: {
  kcf_decrypt_ops_params_t *VAR_8 =
      &(VAR_4->rp_u.decrypt_params);

  VAR_6 = (crypto_dual_data_t *)VAR_8->dop_ciphertext;
  break;
 }
 default: {
  FUNC_3("invalid kcf_op_group_t %d", (int)VAR_4->rp_opgrp);
  return;
 }
 }
 VAR_6->dd_offset1 = VAR_3->kr_saveoffset;
 VAR_6->dd_len1 = VAR_3->kr_savelen;



 if (VAR_5 == ((void*)0)) {
  crypto_call_req_t *VAR_9 = &VAR_3->kr_callreq;

  (*(VAR_9->cr_callback_func))(VAR_9->cr_callback_arg, VAR_2);
  FUNC_2(VAR_3, sizeof (kcf_dual_req_t));
  return;
 }
 VAR_5->an_reqarg = VAR_3->kr_callreq;
 FUNC_0(VAR_5);
 FUNC_2(VAR_3, sizeof (kcf_dual_req_t));
 VAR_5->an_isdual = VAR_0;
 FUNC_1(VAR_5, VAR_2);
}

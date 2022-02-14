
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef void* off_t ;
struct TYPE_29__ {int * md_mac; int * md_plaintext; TYPE_7__* md_ciphertext; int md_decr_templ; int md_decr_key; int md_decr_mech; int md_mac_templ; int md_mac_key; int md_mac_mech; } ;
struct TYPE_30__ {int * em_mac; TYPE_7__* em_ciphertext; int * em_plaintext; int em_mac_templ; int em_mac_key; int em_mac_mech; int * em_encr_templ; int * em_encr_key; int em_encr_mech; } ;
struct TYPE_26__ {TYPE_4__ mac_decrypt_params; TYPE_5__ encrypt_mac_params; } ;
struct TYPE_27__ {int rp_opgrp; TYPE_1__ rp_u; int rp_optype; } ;
typedef TYPE_2__ kcf_req_params_t ;
struct TYPE_28__ {int pd_sid; } ;
typedef TYPE_3__ kcf_provider_desc_t ;
typedef int kcf_op_type_t ;
typedef TYPE_4__ kcf_mac_decrypt_ops_params_t ;
typedef TYPE_5__ kcf_encrypt_mac_ops_params_t ;
struct TYPE_33__ {scalar_t__ cc_framework_private; } ;
struct TYPE_31__ {TYPE_8__ kc_glbl_ctx; struct TYPE_31__* kc_secondctx; } ;
typedef TYPE_6__ kcf_context_t ;
struct TYPE_32__ {size_t dd_len1; size_t dd_len2; void* dd_offset1; void* dd_offset2; } ;
typedef TYPE_7__ crypto_dual_data_t ;
typedef int crypto_data_t ;
typedef TYPE_8__ crypto_ctx_t ;
typedef TYPE_8__* crypto_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;





 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*,int const,int ,int *,int ,int *,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int const,int ,int *,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*,int *,int *) ;
 int FUNC_6 (TYPE_8__*,int *,int *,int *) ;
 int FUNC_7 (TYPE_8__*,int *,int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_8__**,int *) ;
 int FUNC_9 (TYPE_8__*,int *,int *) ;
 int FUNC_10 (TYPE_3__*,TYPE_8__*,int *,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_11(kcf_provider_desc_t *VAR_3, crypto_ctx_t *VAR_4,
    kcf_req_params_t *VAR_5)
{
 int VAR_6 = VAR_1;
 kcf_op_type_t VAR_7;
 size_t VAR_8;
 off_t VAR_9;

 VAR_7 = VAR_5->rp_optype;

 switch (VAR_5->rp_opgrp) {
 case 132: {
  kcf_encrypt_mac_ops_params_t *VAR_10 =
      &VAR_5->rp_u.encrypt_mac_params;
  kcf_context_t *VAR_11;
  crypto_ctx_t *VAR_12;
  kcf_req_params_t VAR_13;

  VAR_11 = (kcf_context_t *)(VAR_4->cc_framework_private);

  switch (VAR_7) {
  case 129: {
   VAR_11->kc_secondctx = ((void*)0);

   FUNC_3(&VAR_13, 129,
       VAR_3->pd_sid, &VAR_10->em_encr_mech,
       VAR_10->em_encr_key, ((void*)0), ((void*)0),
       VAR_10->em_encr_templ);

   VAR_6 = FUNC_10(VAR_3, VAR_4, ((void*)0), &VAR_13,
       VAR_0);


   if (VAR_6 != VAR_2) {
    break;
   }

   VAR_6 = FUNC_8(&VAR_10->em_mac_mech,
       VAR_10->em_mac_key, VAR_10->em_mac_templ,
       (crypto_context_t *)&VAR_12, ((void*)0));

   if (VAR_6 == VAR_2) {
    VAR_11->kc_secondctx = (kcf_context_t *)
        VAR_12->cc_framework_private;
    FUNC_0((kcf_context_t *)
        VAR_12->cc_framework_private);
   }

   break;

  }
  case 128: {
   crypto_dual_data_t *VAR_14 = VAR_10->em_ciphertext;
   crypto_data_t *VAR_15 = VAR_10->em_plaintext;
   kcf_context_t *VAR_16 = VAR_11->kc_secondctx;
   crypto_ctx_t *VAR_17 = &VAR_16->kc_glbl_ctx;

   FUNC_3(&VAR_13, 128,
       VAR_3->pd_sid, ((void*)0), ((void*)0), VAR_15, (crypto_data_t *)VAR_14,
       ((void*)0));

   VAR_6 = FUNC_10(VAR_3, VAR_4, ((void*)0), &VAR_13,
       VAR_0);


   if (VAR_6 != VAR_2) {
    break;
   }

   VAR_9 = VAR_14->dd_offset1;
   VAR_8 = VAR_14->dd_len1;
   if (VAR_14->dd_len2 == 0) {





    if (VAR_14->dd_len1 == 0)
     break;

   } else {
    VAR_14->dd_offset1 = VAR_14->dd_offset2;
    VAR_14->dd_len1 = VAR_14->dd_len2;
   }
   VAR_6 = FUNC_9((crypto_context_t)VAR_17,
       (crypto_data_t *)VAR_14, ((void*)0));

   VAR_14->dd_offset1 = VAR_9;
   VAR_14->dd_len1 = VAR_8;

   break;
  }
  case 130: {
   crypto_dual_data_t *VAR_18 = VAR_10->em_ciphertext;
   crypto_data_t *VAR_19 = VAR_10->em_mac;
   kcf_context_t *VAR_20 = VAR_11->kc_secondctx;
   crypto_ctx_t *VAR_21 = &VAR_20->kc_glbl_ctx;
   crypto_context_t VAR_22 = VAR_21;

   FUNC_3(&VAR_13, 130,
       VAR_3->pd_sid, ((void*)0), ((void*)0), ((void*)0), (crypto_data_t *)VAR_18,
       ((void*)0));

   VAR_6 = FUNC_10(VAR_3, VAR_4, ((void*)0), &VAR_13,
       VAR_0);


   if (VAR_6 != VAR_2) {
    FUNC_4(VAR_22);
    break;
   }

   if (VAR_18->dd_len2 > 0) {
    VAR_9 = VAR_18->dd_offset1;
    VAR_8 = VAR_18->dd_len1;
    VAR_18->dd_offset1 = VAR_18->dd_offset2;
    VAR_18->dd_len1 = VAR_18->dd_len2;

    VAR_6 = FUNC_9(VAR_22,
        (crypto_data_t *)VAR_18, ((void*)0));

    VAR_18->dd_offset1 = VAR_9;
    VAR_18->dd_len1 = VAR_8;

    if (VAR_6 != VAR_2) {
     FUNC_4(VAR_22);
     return (VAR_6);
    }
   }


   VAR_6 = FUNC_7(VAR_22, VAR_19, ((void*)0));
   break;
  }

  default:
   break;
  }
  FUNC_1(VAR_3, VAR_6);
  break;
 }
 case 131: {
  kcf_mac_decrypt_ops_params_t *VAR_23 =
      &VAR_5->rp_u.mac_decrypt_params;
  kcf_context_t *VAR_24;
  crypto_ctx_t *VAR_25;
  kcf_req_params_t VAR_26;

  VAR_24 = (kcf_context_t *)(VAR_4->cc_framework_private);

  switch (VAR_7) {
  case 129: {
   VAR_24->kc_secondctx = ((void*)0);

   VAR_6 = FUNC_8(&VAR_23->md_mac_mech,
       VAR_23->md_mac_key, VAR_23->md_mac_templ,
       (crypto_context_t *)&VAR_25, ((void*)0));


   if (VAR_6 != VAR_2) {
    break;
   }

   FUNC_2(&VAR_26, 129,
       VAR_3->pd_sid, &VAR_23->md_decr_mech,
       VAR_23->md_decr_key, ((void*)0), ((void*)0),
       VAR_23->md_decr_templ);

   VAR_6 = FUNC_10(VAR_3, VAR_4, ((void*)0), &VAR_26,
       VAR_0);


   if (VAR_6 != VAR_2) {
    FUNC_4((crypto_context_t)VAR_25);
    break;
   }

   VAR_24->kc_secondctx = (kcf_context_t *)
       VAR_25->cc_framework_private;
   FUNC_0((kcf_context_t *)
       VAR_25->cc_framework_private);

   break;
  default:
   break;

  }
  case 128: {
   crypto_dual_data_t *VAR_27 = VAR_23->md_ciphertext;
   crypto_data_t *VAR_28 = VAR_23->md_plaintext;
   kcf_context_t *VAR_29 = VAR_24->kc_secondctx;
   crypto_ctx_t *VAR_30 = &VAR_29->kc_glbl_ctx;

   VAR_6 = FUNC_9((crypto_context_t)VAR_30,
       (crypto_data_t *)VAR_27, ((void*)0));

   if (VAR_6 != VAR_2)
    break;

   VAR_9 = VAR_27->dd_offset1;
   VAR_8 = VAR_27->dd_len1;


   if (VAR_27->dd_len2 > 0) {
    VAR_27->dd_offset1 = VAR_27->dd_offset2;
    VAR_27->dd_len1 = VAR_27->dd_len2;
   }

   VAR_6 = FUNC_6((crypto_context_t)VAR_4,
       (crypto_data_t *)VAR_27, VAR_28, ((void*)0));

   VAR_27->dd_offset1 = VAR_9;
   VAR_27->dd_len1 = VAR_8;

   break;
  }
  case 130: {
   crypto_data_t *VAR_31 = VAR_23->md_plaintext;
   crypto_data_t *VAR_32 = VAR_23->md_mac;
   kcf_context_t *VAR_33 = VAR_24->kc_secondctx;
   crypto_ctx_t *VAR_34 = &VAR_33->kc_glbl_ctx;

   VAR_6 = FUNC_7((crypto_context_t)VAR_34,
       VAR_32, ((void*)0));

   if (VAR_6 != VAR_2) {
    FUNC_4(VAR_4);
    break;
   }


   FUNC_0(VAR_24);
   VAR_6 = FUNC_5((crypto_context_t)VAR_4, VAR_31,
       ((void*)0));

   break;
  }
  }
  break;
 }
 default:

  break;
 }

 return (VAR_6);
}

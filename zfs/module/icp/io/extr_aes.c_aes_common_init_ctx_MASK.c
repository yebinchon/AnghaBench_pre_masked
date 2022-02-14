
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gcm_ctx_t ;
typedef int ctr_ctx_t ;
typedef int crypto_spi_ctx_template_t ;
struct TYPE_6__ {int cm_type; int cm_param_len; int * cm_param; } ;
typedef TYPE_1__ crypto_mechanism_t ;
typedef int crypto_key_t ;
typedef int ccm_ctx_t ;
typedef int cbc_ctx_t ;
typedef int boolean_t ;
struct TYPE_7__ {int ac_flags; size_t ac_keysched_len; void* ac_keysched; } ;
typedef TYPE_2__ aes_ctx_t ;
struct TYPE_8__ {int cb; int ulCounterBits; } ;
typedef int CK_AES_GMAC_PARAMS ;
typedef int CK_AES_GCM_PARAMS ;
typedef TYPE_3__ CK_AES_CTR_PARAMS ;
typedef int CK_AES_CCM_PARAMS ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (size_t*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (int *,int *,int,int ,int ) ;
 int FUNC_3 (int *,int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (void*,size_t) ;

__attribute__((used)) static int
FUNC_9(aes_ctx_t *VAR_10, crypto_spi_ctx_template_t *VAR_11,
    crypto_mechanism_t *VAR_12, crypto_key_t *VAR_13, int VAR_14,
    boolean_t VAR_15)
{
 int VAR_16 = VAR_3;
 void *VAR_17;
 size_t VAR_18 = 0;

 if (VAR_11 == ((void*)0)) {
  if ((VAR_17 = FUNC_0(&VAR_18, VAR_14)) == ((void*)0))
   return (VAR_1);




  if ((VAR_16 = FUNC_7(VAR_13, VAR_17)) != VAR_3) {
   FUNC_8(VAR_17, VAR_18);
   return (VAR_16);
  }

  VAR_10->ac_flags |= VAR_5;
  VAR_10->ac_keysched_len = VAR_18;
 } else {
  VAR_17 = VAR_11;
 }
 VAR_10->ac_keysched = VAR_17;

 switch (VAR_12->cm_type) {
 case 133:
  VAR_16 = FUNC_2((cbc_ctx_t *)VAR_10, VAR_12->cm_param,
      VAR_12->cm_param_len, VAR_0, VAR_7);
  break;
 case 131: {
  CK_AES_CTR_PARAMS *VAR_19;

  if (VAR_12->cm_param == ((void*)0) ||
      VAR_12->cm_param_len != sizeof (CK_AES_CTR_PARAMS)) {
   return (VAR_2);
  }
  VAR_19 = (CK_AES_CTR_PARAMS *)(void *)VAR_12->cm_param;
  VAR_16 = FUNC_4((ctr_ctx_t *)VAR_10, VAR_19->ulCounterBits,
      VAR_19->cb, VAR_6);
  break;
 }
 case 132:
  if (VAR_12->cm_param == ((void*)0) ||
      VAR_12->cm_param_len != sizeof (CK_AES_CCM_PARAMS)) {
   return (VAR_2);
  }
  VAR_16 = FUNC_3((ccm_ctx_t *)VAR_10, VAR_12->cm_param,
      VAR_14, VAR_15, VAR_0, VAR_8,
      VAR_9);
  break;
 case 129:
  if (VAR_12->cm_param == ((void*)0) ||
      VAR_12->cm_param_len != sizeof (CK_AES_GCM_PARAMS)) {
   return (VAR_2);
  }
  VAR_16 = FUNC_5((gcm_ctx_t *)VAR_10, VAR_12->cm_param,
      VAR_0, VAR_8, VAR_6,
      VAR_9);
  break;
 case 128:
  if (VAR_12->cm_param == ((void*)0) ||
      VAR_12->cm_param_len != sizeof (CK_AES_GMAC_PARAMS)) {
   return (VAR_2);
  }
  VAR_16 = FUNC_6((gcm_ctx_t *)VAR_10, VAR_12->cm_param,
      VAR_0, VAR_8, VAR_6,
      VAR_9);
  break;
 case 130:
  VAR_10->ac_flags |= VAR_4;
 }

 if (VAR_16 != VAR_3) {
  if (VAR_10->ac_flags & VAR_5) {
   FUNC_1(VAR_17, VAR_18);
   FUNC_8(VAR_17, VAR_18);
  }
 }

 return (VAR_16);
}

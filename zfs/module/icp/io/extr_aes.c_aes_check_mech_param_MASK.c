
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cm_type; size_t cm_param_len; int * cm_param; } ;
typedef TYPE_1__ crypto_mechanism_t ;
typedef scalar_t__ boolean_t ;
typedef void* alloc_fun ;
typedef int aes_ctx_t ;
typedef int CK_AES_GMAC_PARAMS ;
typedef int CK_AES_GCM_PARAMS ;
typedef int CK_AES_CTR_PARAMS ;
typedef int CK_AES_CCM_PARAMS ;


 size_t VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(crypto_mechanism_t *VAR_6, aes_ctx_t **VAR_7, int VAR_8)
{
 void *VAR_9 = ((void*)0);
 boolean_t VAR_10 = VAR_2;
 size_t VAR_11;
 void *(*VAR_12)(int);
 int VAR_13 = VAR_5;

 switch (VAR_6->cm_type) {
 case 130:
  VAR_10 = VAR_1;
  VAR_12 = FUNC_3;
  break;
 case 133:
  VAR_11 = VAR_0;
  VAR_12 = FUNC_0;
  break;
 case 131:
  VAR_11 = sizeof (CK_AES_CTR_PARAMS);
  VAR_12 = FUNC_2;
  break;
 case 132:
  VAR_11 = sizeof (CK_AES_CCM_PARAMS);
  VAR_12 = FUNC_1;
  break;
 case 129:
  VAR_11 = sizeof (CK_AES_GCM_PARAMS);
  VAR_12 = FUNC_4;
  break;
 case 128:
  VAR_11 = sizeof (CK_AES_GMAC_PARAMS);
  VAR_12 = FUNC_5;
  break;
 default:
  VAR_13 = VAR_3;
  return (VAR_13);
 }
 if (VAR_10 && VAR_6->cm_param != ((void*)0) &&
     VAR_6->cm_param_len != VAR_11) {
  VAR_13 = VAR_4;
 }
 if (VAR_7 != ((void*)0)) {
  VAR_9 = (VAR_12)(VAR_8);
  *VAR_7 = VAR_9;
 }
 return (VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int crypto_spi_ctx_template_t ;
typedef int crypto_session_id_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_5__ {int cm_param_len; char* cm_param; int cm_type; } ;
typedef TYPE_1__ crypto_mechanism_t ;
typedef int crypto_key_t ;
typedef int crypto_data_t ;
typedef int CK_AES_GCM_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int *,int *,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(crypto_provider_handle_t VAR_3,
    crypto_session_id_t VAR_4, crypto_mechanism_t *VAR_5,
    crypto_key_t *VAR_6, crypto_data_t *VAR_7, crypto_data_t *VAR_8,
    crypto_spi_ctx_template_t VAR_9, crypto_req_handle_t VAR_10)
{
 CK_AES_GCM_PARAMS VAR_11;
 crypto_mechanism_t VAR_12;
 int VAR_13;

 if ((VAR_13 = FUNC_1(VAR_5, VAR_7, &VAR_11))
     != VAR_1)
  return (VAR_13);

 VAR_12.cm_type = VAR_0;
 VAR_12.cm_param_len = sizeof (CK_AES_GCM_PARAMS);
 VAR_12.cm_param = (char *)&VAR_11;

 return (FUNC_0(VAR_3, VAR_4, &VAR_12,
     VAR_6, VAR_8, &VAR_2, VAR_9, VAR_10));
}

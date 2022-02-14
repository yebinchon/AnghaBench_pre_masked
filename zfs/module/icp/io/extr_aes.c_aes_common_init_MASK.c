
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int crypto_spi_ctx_template_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_mechanism_t ;
struct TYPE_6__ {scalar_t__ ck_format; } ;
typedef TYPE_1__ crypto_key_t ;
struct TYPE_7__ {int * cc_provider_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
typedef int boolean_t ;
typedef int aes_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int **,int) ;
 int FUNC_1 (int *,int ,int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(crypto_ctx_t *VAR_3, crypto_mechanism_t *VAR_4,
    crypto_key_t *VAR_5, crypto_spi_ctx_template_t VAR_6,
    crypto_req_handle_t VAR_7, boolean_t VAR_8)
{
 aes_ctx_t *VAR_9;
 int VAR_10;
 int VAR_11;




 if (VAR_5->ck_format != VAR_0) {
  return (VAR_1);
 }

 VAR_11 = FUNC_3(VAR_7);
 if ((VAR_10 = FUNC_0(VAR_4, &VAR_9, VAR_11))
     != VAR_2)
  return (VAR_10);

 VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_4, VAR_5, VAR_11,
     VAR_8);
 if (VAR_10 != VAR_2) {
  FUNC_2(VAR_9);
  return (VAR_10);
 }

 VAR_3->cc_provider_private = VAR_9;

 return (VAR_2);
}

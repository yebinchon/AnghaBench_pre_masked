
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int skein_ctx_t ;
typedef int * crypto_spi_ctx_template_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
typedef int crypto_mechanism_t ;
typedef int crypto_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_5(crypto_provider_handle_t VAR_2,
    crypto_mechanism_t *VAR_3, crypto_key_t *VAR_4,
    crypto_spi_ctx_template_t *VAR_5, size_t *VAR_6,
    crypto_req_handle_t VAR_7)
{
 int VAR_8;
 skein_ctx_t *VAR_9;

 VAR_9 = FUNC_2(sizeof (*VAR_9), FUNC_1(VAR_7));
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 VAR_8 = FUNC_4(VAR_9, VAR_3, VAR_4);
 if (VAR_8 != VAR_1)
  goto errout;
 *VAR_5 = VAR_9;
 *VAR_6 = sizeof (*VAR_9);

 return (VAR_1);
errout:
 FUNC_0(VAR_9, sizeof (*VAR_9));
 FUNC_3(VAR_9, sizeof (*VAR_9));
 return (VAR_8);
}

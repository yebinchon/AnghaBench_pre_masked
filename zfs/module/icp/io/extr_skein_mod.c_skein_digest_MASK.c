
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int crypto_req_handle_t ;
struct TYPE_9__ {scalar_t__ cd_length; } ;
typedef TYPE_1__ crypto_data_t ;
typedef int crypto_ctx_t ;
struct TYPE_10__ {int sc_digest_bitlen; } ;
typedef int * SKEIN_CTX_LVALUE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_7(crypto_ctx_t *VAR_2, crypto_data_t *VAR_3, crypto_data_t *VAR_4,
    crypto_req_handle_t VAR_5)
{
 int VAR_6 = VAR_1;

 FUNC_0(FUNC_2(VAR_2) != ((void*)0));

 if (VAR_4->cd_length <
     FUNC_1(FUNC_2(VAR_2)->sc_digest_bitlen)) {
  VAR_4->cd_length =
      FUNC_1(FUNC_2(VAR_2)->sc_digest_bitlen);
  return (VAR_0);
 }

 VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_5);
 if (VAR_6 != VAR_1) {
  FUNC_3(FUNC_2(VAR_2), sizeof (*FUNC_2(VAR_2)));
  FUNC_4(FUNC_2(VAR_2), sizeof (*FUNC_2(VAR_2)));
  SKEIN_CTX_LVALUE(VAR_7) = ((void*)0);
  VAR_4->cd_length = 0;
  return (VAR_6);
 }
 VAR_6 = FUNC_5(VAR_2, VAR_4, VAR_5);

 return (VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_ctx_t ;
typedef int * SKEIN_CTX_LVALUE ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(crypto_ctx_t *VAR_1)
{
 if (FUNC_0(VAR_1) != ((void*)0)) {
  FUNC_1(FUNC_0(VAR_1), sizeof (*FUNC_0(VAR_1)));
  FUNC_2(FUNC_0(VAR_1), sizeof (*FUNC_0(VAR_1)));
  SKEIN_CTX_LVALUE(VAR_2) = ((void*)0);
 }

 return (VAR_0);
}

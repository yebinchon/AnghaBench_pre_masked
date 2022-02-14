
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int dsl_crypto_params_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char* VAR_4 ;
 int FUNC_1 (int ,int *,int *,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int **) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (char const*,char) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_5, nvlist_t *VAR_6, nvlist_t *VAR_7)
{
 int VAR_8;
 uint64_t VAR_9 = VAR_2;
 dsl_crypto_params_t *VAR_10 = ((void*)0);
 nvlist_t *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

 if (FUNC_6(VAR_5, '@') != ((void*)0) || FUNC_6(VAR_5, '%') != ((void*)0)) {
  VAR_8 = (FUNC_0(VAR_3));
  goto error;
 }

 (void) FUNC_4(VAR_6, "crypt_cmd", &VAR_9);
 (void) FUNC_3(VAR_6, "props", &VAR_11);
 (void) FUNC_3(VAR_6, VAR_4, &VAR_12);

 VAR_8 = FUNC_1(VAR_9, VAR_11, VAR_12, &VAR_10);
 if (VAR_8 != 0)
  goto error;

 VAR_8 = FUNC_5(VAR_5, VAR_10);
 if (VAR_8 != 0)
  goto error;

 FUNC_2(VAR_10, VAR_0);

 return (0);

error:
 FUNC_2(VAR_10, VAR_1);
 return (VAR_8);
}

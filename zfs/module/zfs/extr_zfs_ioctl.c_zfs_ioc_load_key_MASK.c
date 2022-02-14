
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int dsl_crypto_params_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int *,int **) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char const*,int *,int ) ;
 int * FUNC_6 (char const*,char) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4, nvlist_t *VAR_5, nvlist_t *VAR_6)
{
 int VAR_7;
 dsl_crypto_params_t *VAR_8 = ((void*)0);
 nvlist_t *VAR_9;
 boolean_t VAR_10 = FUNC_4(VAR_5, "noop");

 if (FUNC_6(VAR_4, '@') != ((void*)0) || FUNC_6(VAR_4, '%') != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_2);
  goto error;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_3);

 VAR_7 = FUNC_1(VAR_1, ((void*)0),
     VAR_9, &VAR_8);
 if (VAR_7 != 0)
  goto error;

 VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_10);
 if (VAR_7 != 0)
  goto error;

 FUNC_2(VAR_8, VAR_10);

 return (0);

error:
 FUNC_2(VAR_8, VAR_0);
 return (VAR_7);
}

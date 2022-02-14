
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int dsl_crypto_params_t ;
typedef int dmu_objset_type_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,int ,scalar_t__,scalar_t__,void*,int **) ;
 int FUNC_2 (int ,int *,int *,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int *,int ) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char const*) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_11(const char *VAR_7, dmu_objset_type_t VAR_8,
    boolean_t VAR_9, boolean_t VAR_10, void *VAR_11, objset_t **VAR_12)
{
 int VAR_13;
 char *VAR_14 = ((void*)0);
 char VAR_15[VAR_5];

 FUNC_9(VAR_15, VAR_7);
 VAR_14 = FUNC_8(VAR_15, '@');
 if (VAR_14 != ((void*)0))
  *VAR_14 = '\0';

 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 while (VAR_10 && VAR_13 == VAR_2) {
  dsl_crypto_params_t *VAR_16;
  nvlist_t *VAR_17 = FUNC_5();

  FUNC_4(VAR_17, "wkeydata",
      (uint8_t *)VAR_6, VAR_4);
  FUNC_0(FUNC_2(VAR_1, ((void*)0),
      VAR_17, &VAR_16));
  VAR_13 = FUNC_7(VAR_15, VAR_16, VAR_0);
  FUNC_3(VAR_16, VAR_0);
  FUNC_6(VAR_17);

  if (VAR_13 == VAR_3) {






   VAR_14 = FUNC_10(VAR_15, '/');
   if (VAR_14 == ((void*)0))
    return (VAR_13);

   *VAR_14 = '\0';
   VAR_13 = VAR_2;
   continue;
  } else if (VAR_13 != 0) {
   break;
  }

  VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  break;
 }

 return (VAR_13);
}

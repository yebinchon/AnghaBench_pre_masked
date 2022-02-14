
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int dsl_crypto_params_t ;
struct TYPE_2__ {int zo_verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int *,int ,int *) ;
 int FUNC_3 (int ,int *,int *,int **) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,unsigned long long) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ,int ) ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int
FUNC_15(char *VAR_18)
{
 int VAR_19;
 uint64_t VAR_20;
 dsl_crypto_params_t *VAR_21 = ((void*)0);






 VAR_20 = FUNC_14(2);
 if (VAR_20 != 0) {
  nvlist_t *VAR_22 = FUNC_8();
  nvlist_t *VAR_23 = FUNC_8();


  VAR_20 = FUNC_14(VAR_13);
  if (VAR_20 < VAR_12)
   VAR_20 = VAR_14;

  FUNC_6(VAR_23,
      FUNC_12(VAR_5), VAR_20);
  FUNC_7(VAR_22, "wkeydata",
      (uint8_t *)VAR_17, VAR_3);






  FUNC_6(VAR_23,
      FUNC_12(VAR_6), VAR_4);
  FUNC_5(VAR_23,
      FUNC_12(VAR_7), "prompt");
  FUNC_6(VAR_23,
      FUNC_12(VAR_9), 0ULL);
  FUNC_6(VAR_23,
      FUNC_12(VAR_8), 0ULL);

  FUNC_0(FUNC_3(VAR_1, VAR_23,
      VAR_22, &VAR_21));





  FUNC_0(FUNC_10("cycle"));
  FUNC_0(FUNC_1("cycle"));

  FUNC_9(VAR_22);
  FUNC_9(VAR_23);
 }

 VAR_19 = FUNC_2(VAR_18, VAR_2, 0, VAR_21,
     VAR_15, ((void*)0));
 FUNC_4(VAR_21, !!VAR_19);

 VAR_20 = FUNC_14(100);
 if (VAR_19 || VAR_20 < 80)
  return (VAR_19);

 if (VAR_16.zo_verbose >= 5)
  (void) FUNC_11("Setting dataset %s to sync always\n", VAR_18);
 return (FUNC_13(VAR_18, VAR_10,
     VAR_11, VAR_0));
}

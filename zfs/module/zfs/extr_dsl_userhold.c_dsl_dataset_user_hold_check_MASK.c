
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_6__ {scalar_t__ dduha_minor; int dduha_errlist; int * dduha_chkholds; int * dduha_holds; } ;
typedef TYPE_2__ dsl_dataset_user_hold_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,char*,char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,size_t) ;
 char* FUNC_13 (size_t,int ) ;
 int * FUNC_14 (int *,int *) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 (int *,char**) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*,char*) ;
 int * FUNC_19 (char*,char) ;
 int FUNC_20 (char*,char*) ;
 size_t FUNC_21 (char*) ;

__attribute__((used)) static int
FUNC_22(void *VAR_7, dmu_tx_t *VAR_8)
{
 dsl_dataset_user_hold_arg_t *VAR_9 = VAR_7;
 dsl_pool_t *VAR_10 = FUNC_2(VAR_8);
 nvlist_t *VAR_11;

 if (FUNC_17(VAR_10->dp_spa) < VAR_6)
  return (FUNC_0(VAR_3));

 if (!FUNC_1(VAR_8))
  return (0);





 VAR_11 = FUNC_8();
 for (nvpair_t *VAR_12 = FUNC_14(VAR_9->dduha_holds, ((void*)0));
     VAR_12 != ((void*)0); VAR_12 = FUNC_14(VAR_9->dduha_holds, VAR_12)) {
  size_t VAR_13 = FUNC_21(FUNC_15(VAR_12)) +
      FUNC_21(FUNC_11(VAR_12));
  char *VAR_14 = FUNC_13(VAR_13 + 2, VAR_5);
  (void) FUNC_20(VAR_14, FUNC_15(VAR_12));
  (void) FUNC_18(VAR_14, "@");
  (void) FUNC_18(VAR_14, FUNC_11(VAR_12));
  FUNC_7(VAR_11, VAR_14, "");
  FUNC_12(VAR_14, VAR_13 + 2);
 }
 size_t VAR_15 = FUNC_10(VAR_11);
 FUNC_9(VAR_11);
 if (VAR_15 != FUNC_10(VAR_9->dduha_holds))
  return (FUNC_0(VAR_0));
 for (nvpair_t *VAR_16 = FUNC_14(VAR_9->dduha_holds, ((void*)0));
     VAR_16 != ((void*)0); VAR_16 = FUNC_14(VAR_9->dduha_holds, VAR_16)) {
  dsl_dataset_t *VAR_17;
  int VAR_18 = 0;
  char *VAR_19, *VAR_20;


  VAR_20 = FUNC_15(VAR_16);
  if (FUNC_19(VAR_20, '@') == ((void*)0))
   VAR_18 = FUNC_0(VAR_1);

  if (VAR_18 == 0)
   VAR_18 = FUNC_16(VAR_16, &VAR_19);

  if (VAR_18 == 0)
   VAR_18 = FUNC_3(VAR_10, VAR_20, VAR_4, &VAR_17);

  if (VAR_18 == 0) {
   VAR_18 = FUNC_5(VAR_17, VAR_19,
       VAR_9->dduha_minor != 0, VAR_8);
   FUNC_4(VAR_17, VAR_4);
  }

  if (VAR_18 == 0) {
   FUNC_7(VAR_9->dduha_chkholds, VAR_20, VAR_19);
  } else {




   FUNC_6(VAR_9->dduha_errlist, VAR_20, VAR_18);
   if (VAR_18 != VAR_2)
    return (VAR_18);
  }
 }

 return (0);
}

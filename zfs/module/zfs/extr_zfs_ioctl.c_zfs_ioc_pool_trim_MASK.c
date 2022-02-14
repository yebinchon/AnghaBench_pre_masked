
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int **) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*) ;
 int * FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char const*,int **,int ) ;
 int FUNC_12 (int *,int *,scalar_t__,scalar_t__,int,int ,int *) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_13(const char *VAR_11, nvlist_t *VAR_12, nvlist_t *VAR_13)
{
 uint64_t VAR_14;
 if (FUNC_7(VAR_12, VAR_6, &VAR_14) != 0)
  return (FUNC_0(VAR_1));

 if (!(VAR_14 == VAR_3 ||
     VAR_14 == VAR_4 ||
     VAR_14 == VAR_5)) {
  return (FUNC_0(VAR_1));
 }

 nvlist_t *VAR_15;
 if (FUNC_6(VAR_12, VAR_9, &VAR_15) != 0)
  return (FUNC_0(VAR_1));

 for (nvpair_t *VAR_16 = FUNC_8(VAR_15, ((void*)0));
     VAR_16 != ((void*)0); VAR_16 = FUNC_8(VAR_15, VAR_16)) {
  uint64_t VAR_17;
  if (FUNC_9(VAR_16, &VAR_17) != 0) {
   return (FUNC_0(VAR_1));
  }
 }


 uint64_t VAR_18;
 if (FUNC_7(VAR_12, VAR_7, &VAR_18) != 0)
  VAR_18 = 0;


 boolean_t VAR_19;
 if (FUNC_5(VAR_12, VAR_8,
     &VAR_19) != 0) {
  VAR_19 = VAR_0;
 }

 spa_t *VAR_20;
 int VAR_21 = FUNC_11(VAR_11, &VAR_20, VAR_2);
 if (VAR_21 != 0)
  return (VAR_21);

 nvlist_t *VAR_22 = FUNC_2();
 int VAR_23 = FUNC_12(VAR_20, VAR_15, VAR_14,
     VAR_18, !!VAR_10, VAR_19, VAR_22);

 if (FUNC_4(VAR_22) > 0)
  FUNC_1(VAR_13, VAR_9, VAR_22);

 FUNC_3(VAR_22);

 FUNC_10(VAR_20, VAR_2);
 return (VAR_23 > 0 ? VAR_1 : 0);
}

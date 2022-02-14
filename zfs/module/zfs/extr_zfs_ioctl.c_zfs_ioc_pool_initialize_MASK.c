
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 int * FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char const*,int **,int ) ;
 int FUNC_11 (int *,int *,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_7, nvlist_t *VAR_8, nvlist_t *VAR_9)
{
 uint64_t VAR_10;
 if (FUNC_6(VAR_8, VAR_5,
     &VAR_10) != 0) {
  return (FUNC_0(VAR_0));
 }

 if (!(VAR_10 == VAR_2 ||
     VAR_10 == VAR_3 ||
     VAR_10 == VAR_4)) {
  return (FUNC_0(VAR_0));
 }

 nvlist_t *VAR_11;
 if (FUNC_5(VAR_8, VAR_6,
     &VAR_11) != 0) {
  return (FUNC_0(VAR_0));
 }

 for (nvpair_t *VAR_12 = FUNC_7(VAR_11, ((void*)0));
     VAR_12 != ((void*)0); VAR_12 = FUNC_7(VAR_11, VAR_12)) {
  uint64_t VAR_13;
  if (FUNC_8(VAR_12, &VAR_13) != 0) {
   return (FUNC_0(VAR_0));
  }
 }

 spa_t *VAR_14;
 int VAR_15 = FUNC_10(VAR_7, &VAR_14, VAR_1);
 if (VAR_15 != 0)
  return (VAR_15);

 nvlist_t *VAR_16 = FUNC_2();
 int VAR_17 = FUNC_11(VAR_14, VAR_11, VAR_10,
     VAR_16);

 if (FUNC_4(VAR_16) > 0) {
  FUNC_1(VAR_9, VAR_6,
      VAR_16);
 }
 FUNC_3(VAR_16);

 FUNC_9(VAR_14, VAR_1);
 return (VAR_17 > 0 ? VAR_0 : 0);
}

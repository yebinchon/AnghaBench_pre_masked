
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static boolean_t
FUNC_7(nvpair_t *VAR_4, nvpair_t *VAR_5)
{
 if (FUNC_2(VAR_4) == VAR_1) {

  nvlist_t *VAR_6;
  FUNC_0(FUNC_3(VAR_4, &VAR_6) == 0);
  FUNC_0(FUNC_1(VAR_6, VAR_3,
      &VAR_4) == 0);
 }

 if (FUNC_2(VAR_5) == VAR_1) {
  nvlist_t *VAR_7;
  FUNC_0(FUNC_3(VAR_5, &VAR_7) == 0);
  FUNC_0(FUNC_1(VAR_7, VAR_3,
      &VAR_5) == 0);
 }

 if (FUNC_2(VAR_4) != FUNC_2(VAR_5))
  return (VAR_0);

 if (FUNC_2(VAR_4) == VAR_2) {
  char *VAR_8, *VAR_9;

  FUNC_0(FUNC_4(VAR_4, (char **)&VAR_8) == 0);
  FUNC_0(FUNC_4(VAR_5, (char **)&VAR_9) == 0);
  return (FUNC_6(VAR_8, VAR_9) == 0);
 } else {
  uint64_t VAR_10, VAR_11;

  FUNC_0(FUNC_5(VAR_4, &VAR_10) == 0);
  FUNC_0(FUNC_5(VAR_5, &VAR_11) == 0);
  return (VAR_10 == VAR_11);
 }
}

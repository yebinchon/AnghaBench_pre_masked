
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ pool_state_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int,scalar_t__*,char**,int *) ;
 scalar_t__ FUNC_9 (int,int **,int *) ;

__attribute__((used)) static boolean_t
FUNC_10(nvlist_t *VAR_9, const char *VAR_10)
{
 int VAR_11;
 pool_state_t VAR_12;
 char *VAR_13 = ((void*)0);
 nvlist_t *VAR_14;
 uint64_t VAR_15, VAR_16;
 nvlist_t *VAR_17;
 nvlist_t **VAR_18;
 uint_t VAR_19, VAR_20;
 boolean_t VAR_21;

 if ((VAR_11 = FUNC_6(VAR_10, VAR_3|VAR_2)) < 0)
  return (VAR_0);

 if (FUNC_8(VAR_8, VAR_11, &VAR_12, &VAR_13, &VAR_21) != 0 ||
     !VAR_21 ||
     VAR_12 != VAR_4 ||
     FUNC_9(VAR_11, &VAR_14, ((void*)0)) != 0) {
  FUNC_1(VAR_13);
  (void) FUNC_0(VAR_11);
  return (VAR_0);
 }
 FUNC_1(VAR_13);
 (void) FUNC_0(VAR_11);

 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_14);
  return (VAR_1);
 }

 FUNC_7(FUNC_5(VAR_14, VAR_5, &VAR_15) == 0);
 FUNC_2(VAR_14);

 FUNC_7(FUNC_3(VAR_9, VAR_7,
     &VAR_17) == 0);
 if (FUNC_4(VAR_17, VAR_6,
     &VAR_18, &VAR_20) == 0) {
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   FUNC_7(FUNC_5(VAR_18[VAR_19],
       VAR_5, &VAR_16) == 0);
   if (VAR_16 == VAR_15)
    return (VAR_1);
  }
 }

 return (VAR_0);
}

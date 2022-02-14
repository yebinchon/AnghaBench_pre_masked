
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (char*,char*,int ,...) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int*) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(zpool_handle_t *VAR_5, uint64_t VAR_6)
{
 int VAR_7;
 nvlist_t *VAR_8;
 uint64_t VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_8(VAR_5, ((void*)0));
 FUNC_6(FUNC_4(VAR_8, VAR_2,
     &VAR_9) == 0);

 FUNC_1(FUNC_0(VAR_9));
 FUNC_1(VAR_9 < VAR_6);

 VAR_7 = FUNC_7(FUNC_9(VAR_5), VAR_3, &VAR_10);
 if (VAR_7 != 0)
  return (VAR_7);

 if (VAR_10) {
  (void) FUNC_2(VAR_4, FUNC_3("Upgrade not performed due "
      "to %d unsupported filesystems (max v%d).\n"),
      VAR_10, (int)VAR_1);
  return (1);
 }

 VAR_7 = FUNC_11(VAR_5, VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 if (VAR_6 >= VAR_0) {
  (void) FUNC_5(FUNC_3("Successfully upgraded "
      "'%s' from version %llu to feature flags.\n"),
      FUNC_10(VAR_5), (u_longlong_t)VAR_9);
 } else {
  (void) FUNC_5(FUNC_3("Successfully upgraded "
      "'%s' from version %llu to version %llu.\n"),
      FUNC_10(VAR_5), (u_longlong_t)VAR_9,
      (u_longlong_t)VAR_6);
 }

 return (0);
}

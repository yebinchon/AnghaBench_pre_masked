
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (int *,char const*,scalar_t__*) ;

int
FUNC_3(zfs_handle_t *VAR_0, const char *VAR_1,
    char *VAR_2, int VAR_3, boolean_t VAR_4)
{
 int VAR_5;
 uint64_t VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_6);

 if (VAR_5)
  return (VAR_5);

 if (VAR_4) {
  (void) FUNC_0(VAR_2, VAR_3, "%llu",
      (u_longlong_t)VAR_6);
 } else {
  FUNC_1(VAR_6, VAR_2, VAR_3);
 }

 return (0);
}

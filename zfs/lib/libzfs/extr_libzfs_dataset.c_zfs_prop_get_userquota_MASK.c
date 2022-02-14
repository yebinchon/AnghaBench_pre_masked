
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_userquota_prop_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (int *,char const*,scalar_t__*,scalar_t__*) ;

int
FUNC_5(zfs_handle_t *VAR_9, const char *VAR_10,
    char *VAR_11, int VAR_12, boolean_t VAR_13)
{
 int VAR_14;
 uint64_t VAR_15;
 zfs_userquota_prop_t VAR_16;

 VAR_14 = FUNC_4(VAR_9, VAR_10, &VAR_15,
     &VAR_16);

 if (VAR_14)
  return (VAR_14);

 if (VAR_13) {
  (void) FUNC_0(VAR_11, VAR_12, "%llu",
      (u_longlong_t)VAR_15);
 } else if (VAR_15 == 0 &&
     (VAR_16 == VAR_7 || VAR_16 == VAR_1 ||
     VAR_16 == VAR_6 || VAR_16 == VAR_0 ||
     VAR_16 == VAR_4 ||
     VAR_16 == VAR_3)) {
  (void) FUNC_1(VAR_11, "none", VAR_12);
 } else if (VAR_16 == VAR_7 || VAR_16 == VAR_1 ||
     VAR_16 == VAR_8 || VAR_16 == VAR_2 ||
     VAR_16 == VAR_5 || VAR_16 == VAR_4) {
  FUNC_2(VAR_15, VAR_11, VAR_12);
 } else {
  FUNC_3(VAR_15, VAR_11, VAR_12);
 }
 return (0);
}

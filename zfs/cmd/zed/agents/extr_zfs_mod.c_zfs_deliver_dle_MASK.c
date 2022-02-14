
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,char**) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,int) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_7(nvlist_t *VAR_6)
{
 char *VAR_7, VAR_8[VAR_2];
 uint64_t VAR_9;

 if (FUNC_1(VAR_6, VAR_3, &VAR_9) == 0) {
  FUNC_2(VAR_8, "%llu", (u_longlong_t)VAR_9);
 } else if (FUNC_0(VAR_6, VAR_0, &VAR_7) == 0) {
  FUNC_3(VAR_8, VAR_7, VAR_2);
  FUNC_5(VAR_8, VAR_2);
 } else {
  FUNC_4(VAR_1, "zfs_deliver_dle: no guid or physpath");
 }

 if (FUNC_6(VAR_4, VAR_5, VAR_8) != 1) {
  FUNC_4(VAR_1, "zfs_deliver_dle: device '%s' not "
      "found", VAR_8);
  return (1);
 }

 return (0);
}

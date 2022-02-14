
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_projectquota_obj; scalar_t__ z_userquota_obj; scalar_t__ z_groupquota_obj; int z_os; scalar_t__ z_replay; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (int ,scalar_t__,char*,int,int,scalar_t__*) ;

boolean_t
FUNC_8(zfsvfs_t *VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 char VAR_8[20];
 uint64_t VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (VAR_6 == VAR_2) {
  if (!FUNC_2(VAR_5->z_os)) {
   if (FUNC_3(VAR_5->z_os)) {
    FUNC_4(
        FUNC_1(VAR_5->z_os), VAR_4);
    FUNC_0(VAR_5->z_os);
    FUNC_5(
        FUNC_1(VAR_5->z_os), VAR_4);
   }
   return (VAR_0);
  }
  VAR_11 = VAR_5->z_projectquota_obj;
 } else if (VAR_6 == VAR_3) {
  VAR_11 = VAR_5->z_userquota_obj;
 } else if (VAR_6 == VAR_1) {
  VAR_11 = VAR_5->z_groupquota_obj;
 } else {
  return (VAR_0);
 }
 if (VAR_11 == 0 || VAR_5->z_replay)
  return (VAR_0);

 (void) FUNC_6(VAR_8, "%llx", (longlong_t)VAR_7);
 VAR_12 = FUNC_7(VAR_5->z_os, VAR_11, VAR_8, 8, 1, &VAR_10);
 if (VAR_12 != 0)
  return (VAR_0);

 VAR_12 = FUNC_7(VAR_5->z_os, VAR_6, VAR_8, 8, 1, &VAR_9);
 if (VAR_12 != 0)
  return (VAR_0);
 return (VAR_9 >= VAR_10);
}

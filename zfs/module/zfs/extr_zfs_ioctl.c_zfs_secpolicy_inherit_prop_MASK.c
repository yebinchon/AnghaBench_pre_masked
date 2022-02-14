
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_3__ {int zc_name; int zc_value; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 zfs_prop_t VAR_6 = FUNC_1(VAR_3->zc_value);

 if (VAR_6 == VAR_2) {
  if (!FUNC_2(VAR_3->zc_value))
   return (FUNC_0(VAR_0));
  return (FUNC_4(VAR_3->zc_name,
      VAR_1, VAR_5));
 } else {
  return (FUNC_3(VAR_3->zc_name, VAR_6,
      ((void*)0), VAR_5));
 }
}

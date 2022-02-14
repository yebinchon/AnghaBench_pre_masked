
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* member_0; int zc_nvlist_conf_size; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int **) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static nvlist_t *
FUNC_7(libzfs_handle_t *VAR_4, nvlist_t *VAR_5)
{
 nvlist_t *VAR_6;
 zfs_cmd_t VAR_7 = {"\0"};
 int VAR_8, VAR_9;

 if (FUNC_5(VAR_4, &VAR_7, VAR_5) != 0)
  return (((void*)0));

 VAR_9 = FUNC_0(VAR_0, VAR_7.zc_nvlist_conf_size * 4);

 if (FUNC_1(VAR_4, &VAR_7, VAR_9) != 0) {
  FUNC_3(&VAR_7);
  return (((void*)0));
 }

 while ((VAR_8 = FUNC_6(VAR_4, VAR_2,
     &VAR_7)) != 0 && VAR_3 == VAR_1) {
  if (FUNC_2(VAR_4, &VAR_7) != 0) {
   FUNC_3(&VAR_7);
   return (((void*)0));
  }
 }

 if (VAR_8) {
  FUNC_3(&VAR_7);
  return (((void*)0));
 }

 if (FUNC_4(VAR_4, &VAR_7, &VAR_6) != 0) {
  FUNC_3(&VAR_7);
  return (((void*)0));
 }

 FUNC_3(&VAR_7);
 return (VAR_6);
}

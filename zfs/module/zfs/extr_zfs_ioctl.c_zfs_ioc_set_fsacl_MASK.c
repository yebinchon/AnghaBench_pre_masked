
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_perm_action; int zc_name; int zc_iflags; int zc_nvlist_src_size; int zc_nvlist_src; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ,int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_2)
{
 int VAR_3;
 nvlist_t *VAR_4 = ((void*)0);

 if ((VAR_3 = FUNC_5(VAR_2->zc_nvlist_src, VAR_2->zc_nvlist_src_size,
     VAR_2->zc_iflags, &VAR_4)) != 0)
  return (VAR_3);




 if ((VAR_3 = FUNC_8(VAR_4)) != 0) {
  FUNC_6(VAR_4);
  return (FUNC_1(VAR_1));
 }







 VAR_3 = FUNC_7(FUNC_0());
 if (VAR_3 != 0) {
  if (VAR_2->zc_perm_action == VAR_0) {
   VAR_3 = FUNC_2(VAR_2->zc_name,
       VAR_4, FUNC_0());
  } else {
   VAR_3 = FUNC_3(VAR_2->zc_name,
       VAR_4, FUNC_0());
  }
 }

 if (VAR_3 == 0)
  VAR_3 = FUNC_4(VAR_2->zc_name, VAR_4, VAR_2->zc_perm_action);

 FUNC_6(VAR_4);
 return (VAR_3);
}

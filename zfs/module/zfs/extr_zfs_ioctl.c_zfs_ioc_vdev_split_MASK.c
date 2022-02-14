
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_cookie; scalar_t__ zc_nvlist_conf_size; scalar_t__ zc_nvlist_src_size; int zc_string; int zc_iflags; int zc_nvlist_src; int zc_nvlist_conf; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int **,int ) ;
 int FUNC_4 (int *,int ,int *,int *,int) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_2)
{
 spa_t *VAR_3;
 nvlist_t *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;
 boolean_t VAR_7 = !!(VAR_2->zc_cookie & VAR_1);

 if ((VAR_6 = FUNC_3(VAR_2->zc_name, &VAR_3, VAR_0)) != 0)
  return (VAR_6);

 if ((VAR_6 = FUNC_0(VAR_2->zc_nvlist_conf, VAR_2->zc_nvlist_conf_size,
     VAR_2->zc_iflags, &VAR_4))) {
  FUNC_2(VAR_3, VAR_0);
  return (VAR_6);
 }

 if (VAR_2->zc_nvlist_src_size != 0 && (VAR_6 =
     FUNC_0(VAR_2->zc_nvlist_src, VAR_2->zc_nvlist_src_size,
     VAR_2->zc_iflags, &VAR_5))) {
  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_4);
  return (VAR_6);
 }

 VAR_6 = FUNC_4(VAR_3, VAR_2->zc_string, VAR_4, VAR_5, VAR_7);

 FUNC_2(VAR_3, VAR_0);

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 return (VAR_6);
}

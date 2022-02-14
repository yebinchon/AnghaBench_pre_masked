
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; int zc_iflags; int zc_nvlist_src_size; int zc_nvlist_src; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (int ,int **,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(zfs_cmd_t *VAR_5)
{
 nvlist_t *VAR_6;
 spa_t *VAR_7;
 int VAR_8;
 nvpair_t *VAR_9;

 if ((VAR_8 = FUNC_0(VAR_5->zc_nvlist_src, VAR_5->zc_nvlist_src_size,
     VAR_5->zc_iflags, &VAR_6)))
  return (VAR_8);





 VAR_9 = FUNC_4(VAR_6, ((void*)0));
 if (VAR_9 != ((void*)0) && FUNC_12(FUNC_5(VAR_9),
     FUNC_13(VAR_3)) == 0 &&
     FUNC_4(VAR_6, VAR_9) == ((void*)0)) {
  FUNC_1(&VAR_4);
  if ((VAR_7 = FUNC_8(VAR_5->zc_name)) != ((void*)0)) {
   FUNC_7(VAR_7, VAR_6, VAR_0);
   FUNC_11(VAR_7, VAR_0, VAR_1);
  }
  FUNC_2(&VAR_4);
  if (VAR_7 != ((void*)0)) {
   FUNC_3(VAR_6);
   return (0);
  }
 }

 if ((VAR_8 = FUNC_9(VAR_5->zc_name, &VAR_7, VAR_2)) != 0) {
  FUNC_3(VAR_6);
  return (VAR_8);
 }

 VAR_8 = FUNC_10(VAR_7, VAR_6);

 FUNC_3(VAR_6);
 FUNC_6(VAR_7, VAR_2);

 return (VAR_8);
}

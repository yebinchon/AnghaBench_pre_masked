
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int pool_vdev_iter_f ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int *) ;

int
FUNC_4(zpool_handle_t *VAR_1, pool_vdev_iter_f VAR_2, void *VAR_3)
{
 nvlist_t *VAR_4, *VAR_5 = ((void*)0);

 if ((VAR_4 = FUNC_3(VAR_1, ((void*)0))) != ((void*)0)) {
  FUNC_2(FUNC_1(VAR_4, VAR_0,
      &VAR_5) == 0);
 }
 return (FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3));
}

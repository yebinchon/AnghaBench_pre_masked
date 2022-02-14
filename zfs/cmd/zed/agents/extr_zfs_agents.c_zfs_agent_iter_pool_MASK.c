
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
struct TYPE_3__ {scalar_t__ gs_vdev_guid; int gs_pool_guid; } ;
typedef TYPE_1__ guid_search_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_2, void *VAR_3)
{
 guid_search_t *VAR_4 = VAR_3;
 nvlist_t *VAR_5, *VAR_6;




 if ((VAR_5 = FUNC_4(VAR_2, ((void*)0))) != ((void*)0)) {
  if (FUNC_0(VAR_5, VAR_1,
      &VAR_6) == 0) {
   (void) FUNC_2(VAR_2, VAR_6, VAR_4);
  }
 }



 if (VAR_4->gs_vdev_guid) {
  (void) FUNC_1(VAR_5, VAR_0,
      &VAR_4->gs_pool_guid);
 }

 FUNC_3(VAR_2);
 return (VAR_4->gs_vdev_guid != 0);
}

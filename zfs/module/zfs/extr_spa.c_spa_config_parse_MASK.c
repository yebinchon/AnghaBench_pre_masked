
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint_t ;
typedef int spa_t ;
typedef int nvlist_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ***,int*) ;
 int FUNC_3 (int *,TYPE_2__**,int *,TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*) ;

int
FUNC_5(spa_t *VAR_3, vdev_t **VAR_4, nvlist_t *VAR_5, vdev_t *VAR_6,
    uint_t VAR_7, int VAR_8)
{
 nvlist_t **VAR_9;
 uint_t VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) != 0)
  return (VAR_11);

 if ((*VAR_4)->vdev_ops->vdev_op_leaf)
  return (0);

 VAR_11 = FUNC_2(VAR_5, VAR_2,
     &VAR_9, &VAR_10);

 if (VAR_11 == VAR_1)
  return (0);

 if (VAR_11) {
  FUNC_4(*VAR_4);
  *VAR_4 = ((void*)0);
  return (FUNC_1(VAR_0));
 }

 for (int VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  vdev_t *VAR_13;
  if ((VAR_11 = FUNC_5(VAR_3, &VAR_13, VAR_9[VAR_12], *VAR_4, VAR_12,
      VAR_8)) != 0) {
   FUNC_4(*VAR_4);
   *VAR_4 = ((void*)0);
   return (VAR_11);
  }
 }

 FUNC_0(*VAR_4 != ((void*)0));

 return (0);
}

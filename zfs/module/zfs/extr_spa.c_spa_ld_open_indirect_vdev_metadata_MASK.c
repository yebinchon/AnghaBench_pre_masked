
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_6__ {int * spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(spa_t *VAR_2)
{
 int VAR_3 = 0;
 vdev_t *VAR_4 = VAR_2->spa_root_vdev;





 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != 0) {
  FUNC_1(VAR_2, "spa_remove_init failed [error=%d]",
      VAR_3);
  return (FUNC_3(VAR_4, VAR_1, VAR_0));
 }




 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != 0) {
  FUNC_1(VAR_2, "spa_condense_init failed [error=%d]",
      VAR_3);
  return (FUNC_3(VAR_4, VAR_1, VAR_3));
 }

 return (0);
}

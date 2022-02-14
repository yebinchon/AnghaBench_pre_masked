
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_5__ {scalar_t__ spa_load_state; int * spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(spa_t *VAR_2)
{
 int VAR_3 = 0;
 vdev_t *VAR_4 = VAR_2->spa_root_vdev;





 if (VAR_2->spa_load_state != VAR_0) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != 0) {
   FUNC_0(VAR_2, "spa_load_verify failed "
       "[error=%d]", VAR_3);
   return (FUNC_2(VAR_4, VAR_1,
       VAR_3));
  }
 }

 return (0);
}

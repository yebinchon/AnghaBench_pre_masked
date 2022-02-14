
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int spa_condensing_indirect; int spa_condensing_indirect_phys; int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int,int,int *) ;

int
FUNC_3(spa_t *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3->spa_meta_objset,
     VAR_1,
     VAR_0, sizeof (uint64_t),
     sizeof (VAR_3->spa_condensing_indirect_phys) / sizeof (uint64_t),
     &VAR_3->spa_condensing_indirect_phys);
 if (VAR_4 == 0) {
  if (FUNC_1(VAR_3)) {
   VAR_3->spa_condensing_indirect =
       FUNC_0(VAR_3);
  }
  return (0);
 } else if (VAR_4 == VAR_2) {
  return (0);
 } else {
  return (VAR_4);
 }
}

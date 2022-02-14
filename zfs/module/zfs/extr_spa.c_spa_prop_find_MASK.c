
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_prop_t ;
typedef int uint64_t ;
struct TYPE_3__ {int spa_pool_props_object; int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int ,int ,int ,int,int,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(spa_t *VAR_0, zpool_prop_t VAR_1, uint64_t *VAR_2)
{
 (void) FUNC_0(VAR_0->spa_meta_objset, VAR_0->spa_pool_props_object,
     FUNC_1(VAR_1), sizeof (uint64_t), 1, VAR_2);
}

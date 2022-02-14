
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zko_kobj; } ;
typedef TYPE_1__ zfs_mod_kobj_t ;
struct kobject {int dummy; } ;
typedef size_t spa_feature_t ;
struct TYPE_8__ {int fi_guid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,size_t,int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,struct kobject*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,size_t,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(zfs_mod_kobj_t *VAR_4, struct kobject *VAR_5)
{





 int VAR_6 = FUNC_2(VAR_4, 0, VAR_0, VAR_2);
 if (VAR_6)
  return (VAR_6);
 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_3(&VAR_4->zko_kobj);
  return (VAR_6);
 }






 for (spa_feature_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_0(VAR_4, VAR_7, VAR_3[VAR_7].fi_guid);

 return (0);
}

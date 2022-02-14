
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zko_attr_count; int zko_kobj; int zko_kobj_type; int ** zko_default_attrs; } ;
typedef TYPE_1__ zfs_mod_kobj_t ;
struct kobject {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct kobject*,char const*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_mod_kobj_t *VAR_0, struct kobject *VAR_1, const char *VAR_2)
{

 FUNC_0(VAR_0->zko_default_attrs != ((void*)0));
 FUNC_0(VAR_0->zko_default_attrs[VAR_0->zko_attr_count] == ((void*)0));

 FUNC_2(&VAR_0->zko_kobj, &VAR_0->zko_kobj_type);
 return (FUNC_1(&VAR_0->zko_kobj, VAR_1, VAR_2));
}

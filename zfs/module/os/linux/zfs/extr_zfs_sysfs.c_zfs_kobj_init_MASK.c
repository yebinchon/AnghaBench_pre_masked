
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int release; TYPE_1__* sysfs_ops; int * default_attrs; } ;
struct TYPE_5__ {int show; } ;
struct TYPE_7__ {int zko_attr_count; int zko_child_count; TYPE_2__ zko_kobj_type; TYPE_1__ zko_sysfs_ops; int * zko_attr_list; int * zko_default_attrs; int * zko_children; } ;
typedef TYPE_3__ zfs_mod_kobj_t ;
typedef int sysfs_show_func ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(zfs_mod_kobj_t *VAR_3, int VAR_4, int VAR_5,
    sysfs_show_func VAR_6)
{



 if (VAR_4 > 0) {
  VAR_3->zko_attr_list = FUNC_4(FUNC_0(VAR_4),
      VAR_1);
  if (VAR_3->zko_attr_list == ((void*)0))
   return (VAR_0);
 }

 VAR_3->zko_default_attrs = FUNC_4(FUNC_2(VAR_4),
     VAR_1);
 if (VAR_3->zko_default_attrs == ((void*)0)) {
  if (VAR_3->zko_attr_list != ((void*)0)) {
   FUNC_3(VAR_3->zko_attr_list,
       FUNC_0(VAR_4));
  }
  return (VAR_0);
 }
 VAR_3->zko_attr_count = VAR_4;
 VAR_3->zko_kobj_type.default_attrs = VAR_3->zko_default_attrs;

 if (VAR_5 > 0) {
  VAR_3->zko_children = FUNC_4(FUNC_1(VAR_5),
      VAR_1);
  if (VAR_3->zko_children == ((void*)0)) {
   if (VAR_3->zko_default_attrs != ((void*)0)) {
    FUNC_3(VAR_3->zko_default_attrs,
        FUNC_2(VAR_4));
   }
   if (VAR_3->zko_attr_list != ((void*)0)) {
    FUNC_3(VAR_3->zko_attr_list,
        FUNC_0(VAR_4));
   }
   return (VAR_0);
  }
  VAR_3->zko_child_count = VAR_5;
 }

 VAR_3->zko_sysfs_ops.show = VAR_6;
 VAR_3->zko_kobj_type.sysfs_ops = &VAR_3->zko_sysfs_ops;
 VAR_3->zko_kobj_type.release = VAR_2;

 return (0);
}

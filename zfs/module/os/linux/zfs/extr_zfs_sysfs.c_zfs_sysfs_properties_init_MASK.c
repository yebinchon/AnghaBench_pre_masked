
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zfs_type_t ;
struct TYPE_7__ {int zko_kobj; } ;
typedef TYPE_1__ zfs_mod_kobj_t ;
struct kobject {int dummy; } ;
struct TYPE_8__ {void* p2k_show_func; TYPE_1__* p2k_parent; int p2k_attr_count; int p2k_table; } ;
typedef TYPE_2__ prop_to_kobj_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (TYPE_1__*,struct kobject*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*,int ,int ,scalar_t__) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_6(zfs_mod_kobj_t *VAR_12, struct kobject *VAR_13,
    zfs_type_t VAR_14)
{
 prop_to_kobj_arg_t VAR_15;
 const char *VAR_16;
 int VAR_17;






 if (VAR_14 == VAR_6) {
  VAR_16 = VAR_5;
  VAR_15.p2k_table = FUNC_4();
  VAR_15.p2k_attr_count = VAR_8;
  VAR_15.p2k_parent = VAR_12;
  VAR_15.p2k_show_func = VAR_10;
  VAR_17 = FUNC_1(VAR_12, 0, VAR_7,
      VAR_10);
 } else {
  VAR_16 = VAR_4;
  VAR_15.p2k_table = FUNC_3();
  VAR_15.p2k_attr_count = VAR_3;
  VAR_15.p2k_parent = VAR_12;
  VAR_15.p2k_show_func = VAR_9;
  VAR_17 = FUNC_1(VAR_12, 0, VAR_2,
      VAR_9);
 }

 if (VAR_17)
  return (VAR_17);

 VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_16);
 if (VAR_17) {
  FUNC_2(&VAR_12->zko_kobj);
  return (VAR_17);
 }






 (void) FUNC_5(VAR_11, &VAR_15, VAR_1,
     VAR_0, VAR_14);

 return (VAR_17);
}

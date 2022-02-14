
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zko_kobj; struct TYPE_8__* zko_children; } ;
typedef TYPE_2__ zfs_mod_kobj_t ;
struct TYPE_9__ {int p2k_attr_count; int p2k_show_func; TYPE_1__* p2k_table; TYPE_2__* p2k_parent; } ;
typedef TYPE_3__ prop_to_kobj_arg_t ;
struct TYPE_7__ {char* pd_name; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,char const*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_5(int VAR_2, void *VAR_3)
{
 prop_to_kobj_arg_t *VAR_4 = VAR_3;
 zfs_mod_kobj_t *VAR_5 = VAR_4->p2k_parent;
 zfs_mod_kobj_t *VAR_6 = &VAR_5->zko_children[VAR_2];
 const char *VAR_7 = VAR_4->p2k_table[VAR_2].pd_name;
 int VAR_8;

 FUNC_0(VAR_7);

 VAR_8 = FUNC_3(VAR_6, VAR_4->p2k_attr_count, 0,
     VAR_4->p2k_show_func);
 if (VAR_8)
  return (VAR_0);

 for (int VAR_9 = 0; VAR_9 < VAR_4->p2k_attr_count; VAR_9++)
  FUNC_2(VAR_6, VAR_9, VAR_1[VAR_9]);

 VAR_8 = FUNC_1(VAR_6, &VAR_5->zko_kobj, VAR_7);
 if (VAR_8)
  FUNC_4(&VAR_6->zko_kobj);

 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ds_dir; int ds_bookmarks_obj; int ds_object; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_7__ {int ds_snapnames_zapobj; int ds_userrefs_obj; int ds_props_obj; int ds_next_clones_obj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(dsl_dataset_t *VAR_0)
{
 FUNC_3(VAR_0->ds_object);
 FUNC_3(FUNC_2(VAR_0)->ds_next_clones_obj);
 FUNC_3(FUNC_2(VAR_0)->ds_props_obj);
 FUNC_3(FUNC_2(VAR_0)->ds_userrefs_obj);
 FUNC_3(FUNC_2(VAR_0)->ds_snapnames_zapobj);
 FUNC_3(VAR_0->ds_bookmarks_obj);

 if (!FUNC_1(VAR_0)) {
  FUNC_0(VAR_0->ds_dir);
 }
}

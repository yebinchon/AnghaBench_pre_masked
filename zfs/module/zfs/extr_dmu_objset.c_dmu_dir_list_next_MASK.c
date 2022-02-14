
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_12__ {int za_first_integer; int za_name; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_13__ {TYPE_1__* os_dsl_dataset; } ;
typedef TYPE_4__ objset_t ;
struct TYPE_14__ {TYPE_2__* dd_pool; } ;
typedef TYPE_5__ dsl_dir_t ;
struct TYPE_15__ {scalar_t__ dd_head_dataset_obj; int dd_child_dir_zapobj; } ;
struct TYPE_11__ {int dp_meta_objset; } ;
struct TYPE_10__ {scalar_t__ ds_object; TYPE_5__* ds_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(objset_t *VAR_2, int VAR_3, char *VAR_4,
    uint64_t *VAR_5, uint64_t *VAR_6)
{
 dsl_dir_t *VAR_7 = VAR_2->os_dsl_dataset->ds_dir;
 zap_cursor_t VAR_8;
 zap_attribute_t VAR_9;


 if (VAR_2->os_dsl_dataset->ds_object !=
     FUNC_1(VAR_7)->dd_head_dataset_obj)
  return (FUNC_0(VAR_1));

 FUNC_6(&VAR_8,
     VAR_7->dd_pool->dp_meta_objset,
     FUNC_1(VAR_7)->dd_child_dir_zapobj, *VAR_6);

 if (FUNC_7(&VAR_8, &VAR_9) != 0) {
  FUNC_5(&VAR_8);
  return (FUNC_0(VAR_1));
 }

 if (FUNC_3(VAR_9.za_name) + 1 > VAR_3) {
  FUNC_5(&VAR_8);
  return (FUNC_0(VAR_0));
 }

 (void) FUNC_2(VAR_4, VAR_9.za_name);
 if (VAR_5)
  *VAR_5 = VAR_9.za_first_integer;
 FUNC_4(&VAR_8);
 *VAR_6 = FUNC_8(&VAR_8);
 FUNC_5(&VAR_8);

 return (0);
}

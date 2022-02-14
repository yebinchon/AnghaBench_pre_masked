
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_prop_t ;
typedef int uint64_t ;
struct TYPE_9__ {int dd_lock; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_10__ {TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;


 int VAR_0 ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(dsl_dataset_t *VAR_1, zfs_prop_t VAR_2,
    uint64_t *VAR_3)
{
 dsl_dir_t *VAR_4 = VAR_1->ds_dir;
 FUNC_5(&VAR_4->dd_lock);
 switch (VAR_2) {
 case 128:
  *VAR_3 = FUNC_4(VAR_4);
  break;
 case 131:
  *VAR_3 = FUNC_1(VAR_4);
  break;
 case 130:
  *VAR_3 = FUNC_2(VAR_4);
  break;
 case 129:
  *VAR_3 = FUNC_3(VAR_4);
  break;
 case 132:
  *VAR_3 = FUNC_0(VAR_4);
  break;
 default:
  FUNC_6(&VAR_4->dd_lock);
  return (VAR_0);
 }
 FUNC_6(&VAR_4->dd_lock);
 return (0);
}

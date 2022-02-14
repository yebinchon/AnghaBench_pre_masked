
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dd_lock; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_7__ {TYPE_1__* ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

uint64_t
FUNC_4(dsl_dataset_t *VAR_0)
{
 if (VAR_0->ds_is_snapshot) {
  return (FUNC_1(VAR_0));
 } else {
  dsl_dir_t *VAR_1 = VAR_0->ds_dir;
  FUNC_2(&VAR_1->dd_lock);
  uint64_t VAR_2 = FUNC_0(VAR_1);
  FUNC_3(&VAR_1->dd_lock);
  return (VAR_2);
 }
}

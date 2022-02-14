
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_6__ {int dd_object; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_5__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,int,int,int *) ;

int
FUNC_2(dsl_dir_t *VAR_2, uint64_t *VAR_3)
{
 if (FUNC_0(VAR_2)) {
  objset_t *VAR_4 = VAR_2->dd_pool->dp_meta_objset;
  return (FUNC_1(VAR_4, VAR_2->dd_object, VAR_0,
      sizeof (*VAR_3), 1, VAR_3));
 } else {
  return (VAR_1);
 }
}

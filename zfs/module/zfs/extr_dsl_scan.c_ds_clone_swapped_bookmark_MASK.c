
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zb_objset; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int u_longlong_t ;
struct TYPE_7__ {scalar_t__ ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(dsl_dataset_t *VAR_0, dsl_dataset_t *VAR_1,
    zbookmark_phys_t *VAR_2)
{
 if (VAR_2->zb_objset == VAR_0->ds_object) {
  VAR_2->zb_objset = VAR_1->ds_object;
  FUNC_0("clone_swap ds %llu; currently traversing; "
      "reset zb_objset to %llu",
      (u_longlong_t)VAR_0->ds_object,
      (u_longlong_t)VAR_1->ds_object);
 } else if (VAR_2->zb_objset == VAR_1->ds_object) {
  VAR_2->zb_objset = VAR_0->ds_object;
  FUNC_0("clone_swap ds %llu; currently traversing; "
      "reset zb_objset to %llu",
      (u_longlong_t)VAR_1->ds_object,
      (u_longlong_t)VAR_0->ds_object);
 }
}

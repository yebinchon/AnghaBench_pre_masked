
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_10__ {int os_phys_buf; int os_spa; TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_11__ {int ds_object; int ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {scalar_t__ os_type; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__**) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(dsl_dataset_t *VAR_7, dmu_objset_type_t VAR_8,
    boolean_t VAR_9, boolean_t VAR_10, void *VAR_11, objset_t **VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_5(VAR_7, VAR_12);
 if (VAR_13 != 0) {
  return (VAR_13);
 } else if (VAR_8 != VAR_1 && VAR_8 != (*VAR_12)->os_phys->os_type) {
  return (FUNC_2(VAR_2));
 } else if (!VAR_9 && FUNC_6(VAR_7)) {
  return (FUNC_2(VAR_3));
 } else if (!VAR_9 && VAR_10 &&
     FUNC_7(VAR_7->ds_dir)) {
  return (FUNC_2(VAR_3));
 }


 if (VAR_10 && FUNC_3((*VAR_12)->os_phys_buf)) {
  zbookmark_phys_t VAR_14;

  FUNC_1(&VAR_14, VAR_7->ds_object, VAR_6,
      VAR_5, VAR_4);
  VAR_13 = FUNC_4((*VAR_12)->os_phys_buf, (*VAR_12)->os_spa,
      &VAR_14, VAR_0);
  if (VAR_13 != 0)
   return (VAR_13);

  FUNC_0(FUNC_3((*VAR_12)->os_phys_buf));
 }

 return (0);
}

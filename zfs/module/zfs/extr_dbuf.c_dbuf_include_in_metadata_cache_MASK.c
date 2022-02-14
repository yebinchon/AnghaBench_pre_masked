
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmu_object_type_t ;
typedef int dmu_buf_impl_t ;
typedef int boolean_t ;
struct TYPE_4__ {int dn_type; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static boolean_t
FUNC_8(dmu_buf_impl_t *VAR_6)
{
 FUNC_3(VAR_6);
 dmu_object_type_t VAR_7 = FUNC_2(VAR_6)->dn_type;
 FUNC_4(VAR_6);


 if (FUNC_6(VAR_7)) {

  FUNC_0(FUNC_5(VAR_7));





  if (FUNC_7(
      &VAR_3[VAR_2].size) >
      VAR_4) {
   FUNC_1(VAR_5);
   return (VAR_0);
  }

  return (VAR_1);
 }

 return (VAR_0);
}

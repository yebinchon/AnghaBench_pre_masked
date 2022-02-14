
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {TYPE_3__* spa_dedup_class; TYPE_2__* spa_special_class; TYPE_1__* spa_log_class; } ;
typedef TYPE_4__ spa_t ;
typedef int metaslab_class_t ;
typedef scalar_t__ dmu_object_type_t ;
typedef int boolean_t ;
struct TYPE_12__ {scalar_t__ mc_groups; } ;
struct TYPE_11__ {scalar_t__ mc_groups; } ;
struct TYPE_10__ {scalar_t__ mc_groups; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (TYPE_4__*) ;
 int * FUNC_8 (TYPE_4__*) ;
 int * FUNC_9 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

metaslab_class_t *
FUNC_10(spa_t *VAR_4, uint64_t VAR_5, dmu_object_type_t VAR_6,
    uint_t VAR_7, uint_t VAR_8)
{
 if (FUNC_3(VAR_6)) {
  if (VAR_4->spa_log_class->mc_groups != 0)
   return (FUNC_7(VAR_4));
  else
   return (FUNC_8(VAR_4));
 }

 boolean_t VAR_9 = VAR_4->spa_special_class->mc_groups != 0;

 if (FUNC_0(VAR_6)) {
  if (VAR_4->spa_dedup_class->mc_groups != 0)
   return (FUNC_6(VAR_4));
  else if (VAR_9 && VAR_1)
   return (FUNC_9(VAR_4));
  else
   return (FUNC_8(VAR_4));
 }


 if (VAR_7 > 0 && (FUNC_1(VAR_6) || VAR_6 == VAR_0)) {
  if (VAR_9 && VAR_3)
   return (FUNC_9(VAR_4));
  else
   return (FUNC_8(VAR_4));
 }

 if (FUNC_2(VAR_6) || VAR_7 > 0) {
  if (VAR_9)
   return (FUNC_9(VAR_4));
  else
   return (FUNC_8(VAR_4));
 }






 if (FUNC_1(VAR_6) &&
     VAR_9 && VAR_5 <= VAR_8) {
  metaslab_class_t *VAR_10 = FUNC_9(VAR_4);
  uint64_t VAR_11 = FUNC_4(VAR_10);
  uint64_t VAR_12 = FUNC_5(VAR_10);
  uint64_t VAR_13 =
      (VAR_12 * (100 - VAR_2))
      / 100;

  if (VAR_11 < VAR_13)
   return (VAR_10);
 }

 return (FUNC_8(VAR_4));
}

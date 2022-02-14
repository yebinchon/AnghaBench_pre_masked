
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lot_attr_count; scalar_t__* lot_attrs; } ;
typedef TYPE_1__ sa_lot_t ;
typedef scalar_t__ sa_attr_type_t ;
typedef int boolean_t ;



boolean_t
FUNC_0(sa_lot_t *VAR_0, sa_attr_type_t *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 != VAR_0->lot_attr_count)
  return (1);

 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3++) {
  if (VAR_1[VAR_3] != VAR_0->lot_attrs[VAR_3])
   return (1);
 }
 return (0);
}

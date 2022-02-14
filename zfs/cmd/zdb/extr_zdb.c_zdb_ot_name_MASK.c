
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t dmu_object_type_t ;
struct TYPE_4__ {char* ot_name; } ;
struct TYPE_3__ {char* ob_name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static char *
FUNC_0(dmu_object_type_t VAR_6)
{
 if (VAR_6 < VAR_3)
  return (VAR_4[VAR_6].ot_name);
 else if ((VAR_6 & VAR_2) &&
     ((VAR_6 & VAR_1) < VAR_0))
  return (VAR_5[VAR_6 & VAR_1].ob_name);
 else
  return ("UNKNOWN");
}

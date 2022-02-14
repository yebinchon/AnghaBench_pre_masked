
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pd_types; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;

boolean_t
FUNC_3(int VAR_5, zfs_type_t VAR_6, boolean_t VAR_7)
{
 zprop_desc_t *VAR_8;

 if (VAR_5 == VAR_4 || VAR_5 == VAR_3)
  return (VAR_0);

 FUNC_0(VAR_5 < FUNC_1(VAR_6));
 VAR_8 = FUNC_2(VAR_6);
 if (VAR_7 && VAR_8[VAR_5].pd_types == VAR_2)
  return (VAR_1);
 return ((VAR_8[VAR_5].pd_types & VAR_6) != 0);
}

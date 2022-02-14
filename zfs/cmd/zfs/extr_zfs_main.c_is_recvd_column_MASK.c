
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* cb_columns; } ;
typedef TYPE_1__ zprop_get_cbdata_t ;
typedef scalar_t__ zfs_get_column_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static boolean_t
FUNC_0(zprop_get_cbdata_t *VAR_5)
{
 int VAR_6;
 zfs_get_column_t VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4 &&
     (VAR_7 = VAR_5->cb_columns[VAR_6]) != VAR_2; VAR_6++)
  if (VAR_7 == VAR_3)
   return (VAR_1);
 return (VAR_0);
}

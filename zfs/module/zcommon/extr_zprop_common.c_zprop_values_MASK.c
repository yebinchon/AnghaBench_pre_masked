
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* pd_values; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int zfs_type_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

const char *
FUNC_3(int VAR_2, zfs_type_t VAR_3)
{
 zprop_desc_t *VAR_4;

 FUNC_0(VAR_2 != VAR_1 && VAR_2 != VAR_0);
 FUNC_0(VAR_2 < FUNC_1(VAR_3));

 VAR_4 = FUNC_2(VAR_3);

 return (VAR_4[VAR_2].pd_values);
}

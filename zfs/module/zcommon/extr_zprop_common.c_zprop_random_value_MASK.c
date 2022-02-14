
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t pi_value; } ;
typedef TYPE_1__ zprop_index_t ;
struct TYPE_5__ {size_t pd_table_size; TYPE_1__* pd_table; } ;
typedef TYPE_2__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef scalar_t__ uint_t ;
typedef size_t uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

uint64_t
FUNC_3(int VAR_0, uint64_t VAR_1, zfs_type_t VAR_2)
{
 zprop_desc_t *VAR_3;
 const zprop_index_t *VAR_4;

 FUNC_0((uint_t)VAR_0 < FUNC_1(VAR_2));
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = VAR_3[VAR_0].pd_table;

 if (VAR_4 == ((void*)0))
  return (VAR_1);

 return (VAR_4[VAR_1 % VAR_3[VAR_0].pd_table_size].pi_value);
}

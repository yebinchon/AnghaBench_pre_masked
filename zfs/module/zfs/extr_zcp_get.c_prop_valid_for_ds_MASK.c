
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_type_t ;
typedef scalar_t__ zfs_prop_t ;
struct TYPE_4__ {int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

boolean_t
FUNC_3(dsl_dataset_t *VAR_4, zfs_prop_t VAR_5)
{
 int VAR_6;
 zfs_type_t VAR_7;


 if ((VAR_5 == VAR_1) ||
     (VAR_5 == VAR_2))
  return (VAR_0);


 if ((VAR_5 == VAR_3) && (!FUNC_0(VAR_4->ds_dir)))
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_6 != 0)
  return (VAR_0);
 return (FUNC_2(VAR_5, VAR_7, VAR_0));
}

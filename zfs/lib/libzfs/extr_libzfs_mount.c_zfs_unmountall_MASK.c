
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int prop_changelist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *) ;

int
FUNC_3(zfs_handle_t *VAR_2, int VAR_3)
{
 prop_changelist_t *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
     VAR_0, VAR_3);
 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_4);

 return (VAR_5);
}

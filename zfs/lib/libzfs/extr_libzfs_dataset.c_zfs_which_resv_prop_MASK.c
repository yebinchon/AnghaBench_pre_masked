
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int*) ;

__attribute__((used)) static int
FUNC_1(zfs_handle_t *VAR_3, zfs_prop_t *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_3, &VAR_5) < 0)
  return (-1);

 if (VAR_5 >= VAR_0)
  *VAR_4 = VAR_1;
 else
  *VAR_4 = VAR_2;

 return (0);
}

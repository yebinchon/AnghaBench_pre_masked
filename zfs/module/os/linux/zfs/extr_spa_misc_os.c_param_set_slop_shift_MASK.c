
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_kernel_param_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (char const*,int *) ;

int
FUNC_3(const char *VAR_1, zfs_kernel_param_t *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, &VAR_3);
 if (VAR_4)
  return (FUNC_0(VAR_4));

 if (VAR_3 < 1 || VAR_3 > 31)
  return (FUNC_0(-VAR_0));

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return (FUNC_0(VAR_4));

 return (0);
}

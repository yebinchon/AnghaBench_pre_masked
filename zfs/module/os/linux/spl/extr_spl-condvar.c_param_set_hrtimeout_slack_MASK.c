
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_kernel_param_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, zfs_kernel_param_t *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_4);
 if (VAR_5)
  return (VAR_5);

 if (VAR_4 > VAR_1)
  return (-VAR_0);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return (VAR_5);

 return (0);
}

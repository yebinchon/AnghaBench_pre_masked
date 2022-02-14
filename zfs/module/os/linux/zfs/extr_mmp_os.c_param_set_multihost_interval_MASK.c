
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_kernel_param_t ;


 int FUNC_0 () ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, zfs_kernel_param_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return (VAR_3);

 if (VAR_0 != 0)
  FUNC_0();

 return (VAR_3);
}

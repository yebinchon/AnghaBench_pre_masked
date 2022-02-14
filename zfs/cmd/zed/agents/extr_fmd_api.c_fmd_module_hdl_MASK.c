
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fmd_hdl_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

fmd_hdl_t *
FUNC_1(const char *VAR_2)
{
 if (FUNC_0(VAR_2, "zfs-retire") == 0)
  return ((fmd_hdl_t *)&VAR_1);
 if (FUNC_0(VAR_2, "zfs-diagnosis") == 0)
  return ((fmd_hdl_t *)&VAR_0);

 return (((void*)0));
}

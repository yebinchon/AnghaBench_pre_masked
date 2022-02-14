
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int fmd_hdl_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;

int32_t
FUNC_1(fmd_hdl_t *VAR_0, const char *VAR_1)
{





 if (FUNC_0(VAR_1, "spare_on_remove") == 0)
  return (1);

 if (FUNC_0(VAR_1, "io_N") == 0 || FUNC_0(VAR_1, "checksum_N") == 0)
  return (10);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long int64_t ;
typedef int fmd_hdl_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;

int64_t
FUNC_1(fmd_hdl_t *VAR_0, const char *VAR_1)
{





 if (FUNC_0(VAR_1, "remove_timeout") == 0)
  return (15ULL * 1000ULL * 1000ULL * 1000ULL);

 if (FUNC_0(VAR_1, "io_T") == 0 || FUNC_0(VAR_1, "checksum_T") == 0)
  return (1000ULL * 1000ULL * 1000ULL * 600ULL);

 return (0);
}

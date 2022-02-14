
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_keylocation_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static zfs_keylocation_t
FUNC_3(const char *VAR_3)
{
 if (FUNC_0("prompt", VAR_3) == 0)
  return (VAR_1);
 else if (FUNC_1(VAR_3) > 8 && FUNC_2("file:///", VAR_3, 8) == 0)
  return (VAR_2);

 return (VAR_0);
}

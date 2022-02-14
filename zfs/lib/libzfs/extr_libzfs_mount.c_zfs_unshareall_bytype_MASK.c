
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char const*,int ) ;

int
FUNC_2(zfs_handle_t *VAR_3, const char *VAR_4,
    const char *VAR_5)
{
 if (VAR_5 == ((void*)0))
  return (FUNC_1(VAR_3, VAR_4, VAR_1));
 if (FUNC_0(VAR_5, "nfs") == 0)
  return (FUNC_1(VAR_3, VAR_4, VAR_0));
 else if (FUNC_0(VAR_5, "smb") == 0)
  return (FUNC_1(VAR_3, VAR_4, VAR_2));
 else
  return (1);
}

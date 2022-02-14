
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mnttab {int mnt_mountp; } ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,struct mnttab*) ;
 char* FUNC_1 (int *,int ) ;

boolean_t
FUNC_2(libzfs_handle_t *VAR_2, const char *VAR_3, char **VAR_4)
{
 struct mnttab VAR_5;

 if (FUNC_0(VAR_2, VAR_3, &VAR_5) != 0)
  return (VAR_0);

 if (VAR_4 != ((void*)0))
  *VAR_4 = FUNC_1(VAR_2, VAR_5.mnt_mountp);

 return (VAR_1);
}

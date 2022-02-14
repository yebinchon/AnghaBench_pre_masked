
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char const*,int) ;
 int * FUNC_2 (int *,char*,int ) ;

zfs_handle_t *
FUNC_3(libzfs_handle_t *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 (void) FUNC_1(VAR_4, VAR_3, VAR_0);
 char *VAR_5 = FUNC_0(VAR_4, '@');
 if (VAR_5 != ((void*)0))
  *VAR_5 = '\0';
 return (FUNC_2(VAR_2, VAR_4, VAR_1));
}

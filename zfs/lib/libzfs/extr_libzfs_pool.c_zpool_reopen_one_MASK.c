
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,char const*) ;

int
FUNC_5(zpool_handle_t *VAR_1, void *VAR_2)
{
 libzfs_handle_t *VAR_3 = FUNC_2(VAR_1);
 const char *VAR_4 = FUNC_3(VAR_1);
 boolean_t *VAR_5 = VAR_2;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, *VAR_5);
 if (VAR_6) {
  return (FUNC_4(VAR_3, VAR_6,
      FUNC_0(VAR_0, "cannot reopen '%s'"), VAR_4));
 }

 return (0);
}

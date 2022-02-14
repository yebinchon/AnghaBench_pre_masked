
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ,char const*) ;

int
FUNC_8(zpool_handle_t *VAR_1, void *VAR_2)
{
 int VAR_3;
 libzfs_handle_t *VAR_4 = FUNC_5(VAR_1);
 const char *VAR_5 = FUNC_6(VAR_1);
 boolean_t *VAR_6 = VAR_2;
 nvlist_t *VAR_7 = FUNC_2();

 FUNC_1(VAR_7, "force", *VAR_6);
 if ((VAR_3 = FUNC_3(VAR_5, VAR_7, ((void*)0))) != 0) {
  FUNC_4(VAR_7);
  return (FUNC_7(VAR_4, VAR_3,
      FUNC_0(VAR_0, "sync '%s' failed"), VAR_5));
 }
 FUNC_4(VAR_7);

 return (0);
}

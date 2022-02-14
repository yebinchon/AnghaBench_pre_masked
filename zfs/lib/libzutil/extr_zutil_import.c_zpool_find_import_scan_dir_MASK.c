
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent64 {char* d_name; } ;
typedef int pthread_mutex_t ;
typedef int libpc_handle_t ;
typedef int avl_tree_t ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int * FUNC_2 (char*) ;
 struct dirent64* FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int *,char*,char const*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_9(libpc_handle_t *VAR_5, pthread_mutex_t *VAR_6,
    avl_tree_t *VAR_7, const char *VAR_8, int VAR_9)
{
 int VAR_10;
 char VAR_11[VAR_2];
 struct dirent64 *VAR_12;
 DIR *VAR_13;

 if (FUNC_4(VAR_8, VAR_11) == ((void*)0)) {
  VAR_10 = VAR_4;
  if (VAR_10 == VAR_0)
   return (0);

  FUNC_7(VAR_5, FUNC_5(VAR_10));
  (void) FUNC_8(VAR_5, VAR_1, FUNC_1(
      VAR_3, "cannot resolve path '%s'"), VAR_8);
  return (VAR_10);
 }

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13 == ((void*)0)) {
  VAR_10 = VAR_4;
  FUNC_7(VAR_5, FUNC_5(VAR_10));
  (void) FUNC_8(VAR_5, VAR_1,
      FUNC_1(VAR_3, "cannot open '%s'"), VAR_11);
  return (VAR_10);
 }

 while ((VAR_12 = FUNC_3(VAR_13)) != ((void*)0)) {
  const char *VAR_14 = VAR_12->d_name;
  if (VAR_14[0] == '.' &&
      (VAR_14[1] == 0 || (VAR_14[1] == '.' && VAR_14[2] == 0)))
   continue;

  FUNC_6(VAR_5, VAR_6, VAR_7, VAR_11, VAR_14,
      VAR_9);
 }

 (void) FUNC_0(VAR_13);
 return (0);
}

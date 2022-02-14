
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;
typedef int libpc_handle_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int *,char*,char*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ,char const*) ;
 char* FUNC_9 (int *,char const*) ;

__attribute__((used)) static int
FUNC_10(libpc_handle_t *VAR_5, pthread_mutex_t *VAR_6,
    avl_tree_t *VAR_7, const char *VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 char VAR_11[VAR_2];
 char *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;
 VAR_12 = FUNC_9(VAR_5, VAR_8);
 VAR_13 = FUNC_9(VAR_5, VAR_8);
 VAR_14 = FUNC_2(VAR_12);
 VAR_15 = FUNC_0(VAR_13);

 if (FUNC_4(VAR_14, VAR_11) == ((void*)0)) {
  VAR_10 = VAR_4;
  if (VAR_10 == VAR_0) {
   VAR_10 = 0;
   goto out;
  }

  FUNC_7(VAR_5, FUNC_5(VAR_10));
  (void) FUNC_8(VAR_5, VAR_1, FUNC_1(
      VAR_3, "cannot resolve path '%s'"), VAR_8);
  goto out;
 }

 FUNC_6(VAR_5, VAR_6, VAR_7, VAR_11, VAR_15, VAR_9);

out:
 FUNC_3(VAR_13);
 FUNC_3(VAR_12);
 return (VAR_10);
}

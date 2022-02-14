
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,char const*) ;
 int FUNC_5 (int *,int *,char const*,int *,int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(libzfs_handle_t *VAR_6, nvlist_t *VAR_7, const char *VAR_8,
    char *VAR_9)
{
 nvlist_t *VAR_10 = ((void*)0);
 int VAR_11;

 if (VAR_9 != ((void*)0)) {
  if (FUNC_2(&VAR_10, VAR_1, 0) != 0) {
   return (FUNC_4(VAR_6, VAR_0,
       FUNC_0(VAR_2, "cannot import '%s'"),
       VAR_8));
  }

  if (FUNC_1(VAR_10,
      FUNC_6(VAR_4), VAR_9) != 0 ||
      FUNC_1(VAR_10,
      FUNC_6(VAR_5), "none") != 0) {
   FUNC_3(VAR_10);
   return (FUNC_4(VAR_6, VAR_0,
       FUNC_0(VAR_2, "cannot import '%s'"),
       VAR_8));
  }
 }

 VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_10,
     VAR_3);
 FUNC_3(VAR_10);
 return (VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_1, nvlist_t *VAR_2, cred_t *VAR_3)
{
 nvlist_t *VAR_4;
 int VAR_5 = 0;
 nvpair_t *VAR_6;

 VAR_4 = FUNC_1(VAR_2, "snaps");

 for (VAR_6 = FUNC_2(VAR_4, ((void*)0)); VAR_6 != ((void*)0);
     VAR_6 = FUNC_2(VAR_4, VAR_6)) {
  char *VAR_7 = FUNC_3(VAR_6);
  char *VAR_8 = FUNC_4(VAR_7, '@');

  if (VAR_8 == ((void*)0)) {
   VAR_5 = FUNC_0(VAR_0);
   break;
  }
  *VAR_8 = '\0';
  VAR_5 = FUNC_5(VAR_7, VAR_3);
  *VAR_8 = '@';
  if (VAR_5 != 0)
   break;
 }
 return (VAR_5);
}

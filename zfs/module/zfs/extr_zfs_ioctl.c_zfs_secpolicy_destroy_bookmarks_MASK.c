
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 nvpair_t *VAR_6, *VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = FUNC_2(VAR_4, ((void*)0)); VAR_6 != ((void*)0);
     VAR_6 = VAR_7) {
  char *VAR_9 = FUNC_3(VAR_6);
  char *VAR_10 = FUNC_4(VAR_9, '#');
  VAR_7 = FUNC_2(VAR_4, VAR_6);

  if (VAR_10 == ((void*)0)) {
   VAR_8 = FUNC_0(VAR_0);
   break;
  }

  *VAR_10 = '\0';
  VAR_8 = FUNC_5(VAR_9,
      VAR_2, VAR_5);
  *VAR_10 = '#';
  if (VAR_8 == VAR_1) {
   FUNC_1(VAR_4, VAR_6);
   VAR_8 = 0;
  }
  if (VAR_8 != 0)
   break;
 }

 return (VAR_8);
}


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
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_2, nvlist_t *VAR_3, cred_t *VAR_4)
{
 nvpair_t *VAR_5;
 nvlist_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3, "holds");

 for (VAR_5 = FUNC_2(VAR_6, ((void*)0)); VAR_5 != ((void*)0);
     VAR_5 = FUNC_2(VAR_6, VAR_5)) {
  char VAR_8[VAR_1];
  VAR_7 = FUNC_0(FUNC_3(VAR_5), VAR_8);
  if (VAR_7 != 0)
   return (VAR_7);
  VAR_7 = FUNC_4(VAR_8,
      VAR_0, VAR_4);
  if (VAR_7 != 0)
   return (VAR_7);
 }
 return (0);
}

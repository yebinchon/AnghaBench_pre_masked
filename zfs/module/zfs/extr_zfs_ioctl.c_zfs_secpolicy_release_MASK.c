
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
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(zfs_cmd_t *VAR_2, nvlist_t *VAR_3, cred_t *VAR_4)
{
 nvpair_t *VAR_5;
 int VAR_6;

 for (VAR_5 = FUNC_1(VAR_3, ((void*)0)); VAR_5 != ((void*)0);
     VAR_5 = FUNC_1(VAR_3, VAR_5)) {
  char VAR_7[VAR_1];
  VAR_6 = FUNC_0(FUNC_2(VAR_5), VAR_7);
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_6 = FUNC_3(VAR_7,
      VAR_0, VAR_4);
  if (VAR_6 != 0)
   return (VAR_6);
 }
 return (0);
}

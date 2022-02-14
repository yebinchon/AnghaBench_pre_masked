
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,char*,int) ;
 int * FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_0, char *VAR_1, int VAR_2,
    zfs_prop_t VAR_3, char *VAR_4, char *VAR_5)
{
 char *VAR_6;
 uint64_t VAR_7;


 if ((FUNC_2(VAR_1, VAR_4) != ((void*)0)) || (FUNC_2(VAR_1, VAR_5) != ((void*)0)))
  return (0);





 VAR_7 = FUNC_0(VAR_0, VAR_3, &VAR_6);

 (void) FUNC_1(VAR_1, ",", VAR_2);
 (void) FUNC_1(VAR_1, VAR_7 ? VAR_4 : VAR_5, VAR_2);

 return (0);
}

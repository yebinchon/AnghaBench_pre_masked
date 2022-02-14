
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,int ,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,char**) ;
 int FUNC_4 (int ,char*,char*,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(nvlist_t *VAR_5, boolean_t VAR_6)
{
 char *VAR_7 = ((void*)0), *VAR_8;
 boolean_t VAR_9;




 if (FUNC_3(VAR_5, VAR_0, &VAR_8) != 0)
  return (-1);

 (void) FUNC_3(VAR_5, VAR_2, &VAR_7);

 VAR_9 = (FUNC_2(VAR_5, VAR_1) == 0);

 FUNC_4(VAR_3, "zfs_deliver_add: adding %s (%s) (is_slice %d)",
     VAR_8, VAR_7 ? VAR_7 : "NULL", VAR_9);
 if (!FUNC_0(VAR_8, VAR_4, VAR_9) && VAR_7 != ((void*)0))
  (void) FUNC_1(VAR_7, VAR_8, VAR_4, VAR_9);

 return (0);
}

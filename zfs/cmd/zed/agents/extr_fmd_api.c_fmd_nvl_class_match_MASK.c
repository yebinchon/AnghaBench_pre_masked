
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;

int
FUNC_2(fmd_hdl_t *VAR_1, nvlist_t *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 return (VAR_2 != ((void*)0) &&
     FUNC_1(VAR_2, VAR_0, &VAR_4) == 0 &&
     FUNC_0(VAR_4, VAR_3));
}

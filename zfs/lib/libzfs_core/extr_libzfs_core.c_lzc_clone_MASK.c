
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,char const*,int *,int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(const char *VAR_1, const char *VAR_2, nvlist_t *VAR_3)
{
 int VAR_4;
 nvlist_t *VAR_5 = ((void*)0);
 nvlist_t *VAR_6 = FUNC_2();

 FUNC_1(VAR_6, "origin", VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_6, "props", VAR_3);
 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_6, ((void*)0));
 FUNC_4(VAR_5);
 FUNC_4(VAR_6);
 return (VAR_4);
}

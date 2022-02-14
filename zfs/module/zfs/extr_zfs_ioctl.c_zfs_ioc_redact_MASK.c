
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int **) ;
 scalar_t__ FUNC_4 (int *,char*,char**) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 nvlist_t *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if (FUNC_3(VAR_3, "snapnv", &VAR_5) != 0)
  return (FUNC_0(VAR_0));
 if (FUNC_2(VAR_5) == 0)
  return (FUNC_0(VAR_1));
 if (FUNC_4(VAR_3, "bookname", &VAR_6) != 0)
  return (FUNC_0(VAR_0));

 return (FUNC_1(VAR_2, VAR_5, VAR_6));
}

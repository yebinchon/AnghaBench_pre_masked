
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int **,int ) ;
 scalar_t__ FUNC_1 (int *,char const*,char**) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, char *VAR_2, nvlist_t **VAR_3,
    boolean_t VAR_4)
{
 char *VAR_5;

 if (FUNC_1(*VAR_3, VAR_1, &VAR_5) == 0)
  return (0);

 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0));
}

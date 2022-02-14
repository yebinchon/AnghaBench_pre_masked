
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;
 char const* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static boolean_t
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1) == 0 || FUNC_0(VAR_0, "/") == 0 ||
     (FUNC_2(VAR_1, VAR_0) == VAR_1 && VAR_1[FUNC_1(VAR_0)] == '/'));
}

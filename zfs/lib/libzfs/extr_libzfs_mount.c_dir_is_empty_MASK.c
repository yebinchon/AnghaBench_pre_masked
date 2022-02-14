
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs64 {scalar_t__ f_type; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,struct statfs64*) ;

__attribute__((used)) static boolean_t
FUNC_3(const char *VAR_1)
{
 struct statfs64 VAR_2;





 if ((FUNC_2(VAR_1, &VAR_2) != 0) ||
     (VAR_2.f_type != VAR_0)) {
  return (FUNC_0(VAR_1));
 }
 return (FUNC_1(VAR_1));
}

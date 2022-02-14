
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct stat64*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int ) ;

boolean_t
FUNC_2(const char *VAR_4, const char *VAR_5)
{
 boolean_t VAR_6;





 VAR_6 = (FUNC_1(VAR_4, VAR_5, VAR_3) ||
     FUNC_1(VAR_4, VAR_5, VAR_2));







 if (VAR_6 == VAR_0) {
  struct stat64 VAR_7;
  if ((FUNC_0(VAR_3, &VAR_7) == 0) &&
      !FUNC_1(VAR_4, ((void*)0), VAR_3) &&
      !FUNC_1(VAR_4, ((void*)0), VAR_2)) {
   VAR_6 = VAR_1;
  }
 }

 return (VAR_6);
}

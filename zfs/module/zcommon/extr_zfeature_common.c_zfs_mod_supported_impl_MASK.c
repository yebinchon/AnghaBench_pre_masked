
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char const*,char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,struct stat64*) ;

__attribute__((used)) static boolean_t
FUNC_3(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 boolean_t VAR_4 = VAR_0;
 char *VAR_5;

 int VAR_6 = FUNC_0(&VAR_5, "%s%s%s%s%s", VAR_3,
     VAR_1 == ((void*)0) ? "" : "/", VAR_1 == ((void*)0) ? "" : VAR_1,
     VAR_2 == ((void*)0) ? "" : "/", VAR_2 == ((void*)0) ? "" : VAR_2);
 if (VAR_6 > 0) {
  struct stat64 VAR_7;
  VAR_4 = !!(FUNC_2(VAR_5, &VAR_7) == 0);
  FUNC_1(VAR_5);
 }

 return (VAR_4);
}

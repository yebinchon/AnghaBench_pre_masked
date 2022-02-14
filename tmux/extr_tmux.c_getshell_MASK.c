
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char const* pw_shell; } ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static const char *
FUNC_4(void)
{
 struct passwd *VAR_1;
 const char *VAR_2;

 VAR_2 = FUNC_1("SHELL");
 if (FUNC_0(VAR_2))
  return (VAR_2);

 VAR_1 = FUNC_2(FUNC_3());
 if (VAR_1 != ((void*)0) && FUNC_0(VAR_1->pw_shell))
  return (VAR_1->pw_shell);

 return (VAR_0);
}

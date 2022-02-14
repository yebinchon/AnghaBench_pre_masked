
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;


 char* FUNC_0 (char*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 () ;

const char *
FUNC_3(void)
{
 struct passwd *VAR_0;
 static const char *VAR_1;

 if (VAR_1 != ((void*)0))
  return (VAR_1);

 VAR_1 = FUNC_0("HOME");
 if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
  VAR_0 = FUNC_1(FUNC_2());
  if (VAR_0 != ((void*)0))
   VAR_1 = VAR_0->pw_dir;
  else
   VAR_1 = ((void*)0);
 }

 return (VAR_1);
}

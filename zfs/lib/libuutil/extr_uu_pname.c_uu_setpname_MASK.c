
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char const* VAR_0 ;
 char* FUNC_1 (char*,char) ;

const char *
FUNC_2(char *VAR_1)
{





 if (VAR_1 == ((void*)0)) {
  VAR_0 = FUNC_0();
  if (VAR_0 == ((void*)0))
   VAR_0 = "unknown_command";
  return (VAR_0);
 }




 for (;;) {
  char *VAR_2 = FUNC_1(VAR_1, '/');
  if (VAR_2 == ((void*)0)) {
   VAR_0 = VAR_1;
   break;
  } else {
   if (*(VAR_2 + 1) == '\0') {
    *VAR_2 = '\0';
    continue;
   }

   VAR_0 = VAR_2 + 1;
   break;
  }
 }

 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,int,char*,int *) ;

const char *
FUNC_1(void)
{
 static char VAR_2[256];

 switch (VAR_0) {
 case 130:
  break;
 case 135:
  if (VAR_1 != ((void*)0)) {
   FUNC_0(VAR_2, sizeof VAR_2, "detached "
       "(from session %s)", VAR_1);
   return (VAR_2);
  }
  return ("detached");
 case 134:
  if (VAR_1 != ((void*)0)) {
   FUNC_0(VAR_2, sizeof VAR_2, "detached and SIGHUP "
       "(from session %s)", VAR_1);
   return (VAR_2);
  }
  return ("detached and SIGHUP");
 case 131:
  return ("lost tty");
 case 128:
  return ("terminated");
 case 132:
  return ("server exited unexpectedly");
 case 133:
  return ("exited");
 case 129:
  return ("server exited");
 }
 return ("unknown reason");
}

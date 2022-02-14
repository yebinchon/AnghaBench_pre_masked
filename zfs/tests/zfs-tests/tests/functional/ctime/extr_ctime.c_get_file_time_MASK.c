
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; int st_ctime; int st_atime; } ;





 int FUNC_0 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1, time_t *VAR_2)
{
 struct stat VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0)) {
  return (-1);
 }

 if (FUNC_0(VAR_0, &VAR_3) == -1) {
  return (-1);
 }

 switch (VAR_1) {
  case 130:
   *VAR_2 = VAR_3.st_atime;
   return (0);
  case 129:
   *VAR_2 = VAR_3.st_ctime;
   return (0);
  case 128:
   *VAR_2 = VAR_3.st_mtime;
   return (0);
  default:
   return (-1);
 }
}

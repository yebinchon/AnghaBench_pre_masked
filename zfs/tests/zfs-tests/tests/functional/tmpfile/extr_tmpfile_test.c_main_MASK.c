
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int VAR_5 ;

int
FUNC_6(int VAR_6, char *VAR_7[])
{
 int VAR_8;
 struct stat VAR_9;

 if (VAR_6 < 2) {
  FUNC_2(VAR_5, "Usage: %s dir\n", VAR_7[0]);
  return (2);
 }
 if (FUNC_5(VAR_7[1], &VAR_9) < 0) {
  FUNC_4("stat");
  return (2);
 }
 if (!FUNC_0(VAR_9.st_mode)) {
  FUNC_2(VAR_5, "\"%s\" is not a directory\n", VAR_7[1]);
  return (2);
 }

 VAR_8 = FUNC_3(VAR_7[1], VAR_2 | VAR_3, 0666);
 if (VAR_8 < 0) {
  if (VAR_4 == VAR_0) {
   FUNC_2(VAR_5,
       "The kernel doesn't support O_TMPFILE\n");
   return (1);
  } else if (VAR_4 == VAR_1) {
   FUNC_2(VAR_5,
       "The filesystem doesn't support O_TMPFILE\n");
   return (2);
  }
  FUNC_4("open");
 } else {
  FUNC_1(VAR_8);
 }
 return (0);
}

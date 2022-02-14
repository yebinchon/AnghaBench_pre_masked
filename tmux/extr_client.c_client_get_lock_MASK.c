
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(char *VAR_7)
{
 int VAR_8;

 FUNC_2("lock file is %s", VAR_7);

 if ((VAR_8 = FUNC_3(VAR_7, VAR_5|VAR_4, 0600)) == -1) {
  FUNC_2("open failed: %s", FUNC_4(VAR_6));
  return (-1);
 }

 if (FUNC_1(VAR_8, VAR_2|VAR_3) == -1) {
  FUNC_2("flock failed: %s", FUNC_4(VAR_6));
  if (VAR_6 != VAR_0)
   return (VAR_8);
  while (FUNC_1(VAR_8, VAR_2) == -1 && VAR_6 == VAR_1)
                ;
  FUNC_0(VAR_8);
  return (-2);
 }
 FUNC_2("flock succeeded");

 return (VAR_8);
}

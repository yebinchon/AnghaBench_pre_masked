
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(char *VAR_5, int *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 VAR_8 = (int)FUNC_2(VAR_5, &VAR_7, 0);
 if (*VAR_7) {
  (void) FUNC_0(VAR_4,
      FUNC_1("%s is not an integer\n"), VAR_3);
  FUNC_3(VAR_0);
 }
 if (VAR_8 < 0) {
  (void) FUNC_0(VAR_4,
      "%s", FUNC_1("Depth can not be negative.\n"));
  FUNC_3(VAR_0);
 }
 *VAR_6 |= (VAR_1|VAR_2);
 return (VAR_8);
}

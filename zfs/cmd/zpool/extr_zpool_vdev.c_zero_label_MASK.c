
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int const) ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int,char*,int const) ;

__attribute__((used)) static int
FUNC_8(char *VAR_4)
{
 const int VAR_5 = 4096;
 char VAR_6[VAR_5];
 int VAR_7, VAR_8;

 if ((VAR_8 = FUNC_5(VAR_4, VAR_1|VAR_0)) < 0) {
  (void) FUNC_2(VAR_3, FUNC_3("cannot open '%s': %s\n"),
      VAR_4, FUNC_6(VAR_2));
  return (-1);
 }

 FUNC_4(VAR_6, 0, VAR_5);
 VAR_7 = FUNC_7(VAR_8, VAR_6, VAR_5);
 (void) FUNC_1(VAR_8);
 (void) FUNC_0(VAR_8);

 if (VAR_7 == -1) {
  (void) FUNC_2(VAR_3, FUNC_3("cannot zero first %d bytes "
      "of '%s': %s\n"), VAR_5, VAR_4, FUNC_6(VAR_2));
  return (-1);
 }

 if (VAR_7 != VAR_5) {
  (void) FUNC_2(VAR_3, FUNC_3("could only zero %d/%d bytes "
      "of '%s'\n"), VAR_7, VAR_5, VAR_4);
  return (-1);
 }

 return (0);
}

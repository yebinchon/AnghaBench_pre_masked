
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,char*,char*,unsigned int) ;
 int FUNC_4 (char*,char*,unsigned int*) ;
 int VAR_5 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;

int
FUNC_7(int VAR_6, char **VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;
 char VAR_11[VAR_0];

 if (VAR_6 < 3 || VAR_6 > 4)
  FUNC_6("Invalid number of arguments", -1);

 if (FUNC_4(VAR_7[2], "%u", &VAR_8) != 1)
  FUNC_6("Invalid maximum file", -2);

 if (VAR_6 == 4 && FUNC_4(VAR_7[3], "%u", &VAR_9) != 1)
  FUNC_6("Invalid first file", -3);

 for (VAR_10 = VAR_9; VAR_10 < VAR_9 + VAR_8; VAR_10++) {
  int VAR_12;
  (void) FUNC_3(VAR_11, VAR_0, "%s%u", VAR_7[1], VAR_10);
  if ((VAR_12 = FUNC_2(VAR_11, VAR_1 | VAR_2, VAR_3)) == -1) {
   (void) FUNC_1(VAR_5, "Failed to create %s %s\n", VAR_11,
       FUNC_5(VAR_4));
   return (-4);
  }
  (void) FUNC_0(VAR_12);
 }
 return (0);
}

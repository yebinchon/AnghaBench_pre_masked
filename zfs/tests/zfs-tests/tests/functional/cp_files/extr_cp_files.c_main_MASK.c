
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,int,int) ;
 int * FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 int VAR_4 ;
 char* FUNC_8 (int ) ;

int
FUNC_9(int VAR_5, char *VAR_6[])
{
 int VAR_7;
 DIR *VAR_8;
 struct dirent *VAR_9;

 if (VAR_5 != 3) {
  FUNC_3(VAR_4, "Usage: %s SRC DST\n", VAR_6[0]);
  FUNC_2(1);
 }

 VAR_8 = FUNC_6(VAR_6[1]);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_4, "Failed to open %s: %s\n",
      VAR_6[1], FUNC_8(VAR_3));
  FUNC_2(2);
 }

 VAR_7 = FUNC_4(VAR_6[2], VAR_1);
 if (VAR_7 < 0) {
  FUNC_3(VAR_4, "Failed to open %s: %s\n",
      VAR_6[2], FUNC_8(VAR_3));
  FUNC_1(VAR_8);
  FUNC_2(3);
 }

 while ((VAR_9 = FUNC_7(VAR_8)) != ((void*)0)) {
  if (VAR_9->d_name[0] == '.' &&
      (VAR_9->d_name[1] == '.' || VAR_9->d_name[1] == '\0'))
   continue;

  int VAR_10 = FUNC_5(VAR_7, VAR_9->d_name, VAR_0|VAR_2, 0666);
  if (VAR_10 < 0) {
   FUNC_3(VAR_4, "Failed to create %s/%s: %s\n",
       VAR_6[2], VAR_9->d_name, FUNC_8(VAR_3));
   FUNC_1(VAR_8);
   FUNC_0(VAR_7);
   FUNC_2(4);
  }
  FUNC_0(VAR_10);
 }

 FUNC_1(VAR_8);
 FUNC_0(VAR_7);

 return (0);
}

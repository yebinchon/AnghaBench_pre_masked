
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 char VAR_5[VAR_0];
 struct stat VAR_6;

 if ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {

  while ((VAR_4 = FUNC_4(VAR_3)) != ((void*)0)) {
   FUNC_5(VAR_5, "%s/%s", VAR_2, VAR_4->d_name);


   if (FUNC_6(VAR_5, &VAR_6) == 0)
    if (VAR_6.st_mode & VAR_1 &&
        FUNC_0(VAR_6.st_mode))
     FUNC_3(VAR_4->d_name,
         VAR_5);
  }
  FUNC_1(VAR_3);
 }
}

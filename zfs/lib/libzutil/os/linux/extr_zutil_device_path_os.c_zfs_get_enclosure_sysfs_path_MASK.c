
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int buf ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char const*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 size_t FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char*,char*) ;

char *
FUNC_8(const char *VAR_1)
{
 DIR *VAR_2 = ((void*)0);
 struct dirent *VAR_3;
 char VAR_4[VAR_0];
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 size_t VAR_9;
 int VAR_10;

 if (VAR_1 == ((void*)0))
  return (((void*)0));


 VAR_5 = FUNC_6(VAR_1, '/');
 if (VAR_5 != ((void*)0))
  VAR_1 = VAR_5 + 1;

 VAR_10 = FUNC_0(&VAR_5, "/sys/block/%s/device", VAR_1);
 if (VAR_10 == -1 || VAR_5 == ((void*)0)) {
  VAR_5 = ((void*)0);
  goto end;
 }

 VAR_2 = FUNC_3(VAR_5);
 if (VAR_2 == ((void*)0)) {
  VAR_5 = ((void*)0);
  goto end;
 }





 while ((VAR_3 = FUNC_4(VAR_2))) {

  if (FUNC_7(VAR_3->d_name, "enclosure_device") == ((void*)0))
   continue;

  if (FUNC_0(&VAR_6, "%s/%s", VAR_5, VAR_3->d_name) == -1 ||
      VAR_6 == ((void*)0))
   break;

  VAR_9 = FUNC_5(VAR_6, VAR_4, sizeof (VAR_4));


  if (VAR_9 == -1 || VAR_9 >= sizeof (VAR_4)) {
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
   break;
  }





  VAR_4[VAR_9] = '\0';
  VAR_7 = FUNC_7(VAR_4, "enclosure");
  if (VAR_7 == ((void*)0))
   break;

  if (FUNC_0(&VAR_8, "/sys/class/%s", VAR_7) == -1) {

   VAR_8 = ((void*)0);
   break;
  }

  if (VAR_8 == ((void*)0))
   break;
 }

end:
 FUNC_2(VAR_6);
 FUNC_2(VAR_5);

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);

 return (VAR_8);
}

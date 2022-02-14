
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 char* FUNC_5 (char const*,int *) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_1)
{
 DIR *VAR_2 = ((void*)0);
 struct dirent *VAR_3;
 char *VAR_4;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 char *VAR_7;
 int VAR_8;

 if (VAR_1 == ((void*)0))
  return (((void*)0));


 VAR_4 = FUNC_5(VAR_1, ((void*)0));
 if (VAR_4 == ((void*)0))
  return (((void*)0));





 VAR_5 = FUNC_6(VAR_4, '/');
 if (VAR_5 != ((void*)0))
  VAR_7 = VAR_5 + 1;
 else
  VAR_7 = VAR_5;

 VAR_8 = FUNC_0(&VAR_5, "/sys/block/%s/slaves/", VAR_7);
 if (VAR_8 == -1 || !VAR_5)
  goto end;

 VAR_2 = FUNC_3(VAR_5);
 if (VAR_2 == ((void*)0))
  goto end;


 while ((VAR_3 = FUNC_4(VAR_2))) {
  if (VAR_3->d_type != VAR_0) {
   VAR_8 = FUNC_0(&VAR_6, "/dev/%s", VAR_3->d_name);
   break;
  }
 }

end:
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 FUNC_2(VAR_5);
 FUNC_2(VAR_4);
 return (VAR_6);
}

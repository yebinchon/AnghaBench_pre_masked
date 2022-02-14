
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int comment ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char**,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_6, const char *VAR_7)
{
 char *VAR_8[10], *VAR_9;
 char VAR_10[VAR_5], VAR_11[VAR_4];
 int VAR_12;


 FUNC_3(VAR_10, VAR_6, sizeof (VAR_10));
 VAR_10 [sizeof (VAR_10)-1] = '\0';

 VAR_9 = VAR_10;
 while (*VAR_9 != '\0') {
  switch (*VAR_9) {
  case '/':
  case '-':
  case ':':
  case ' ':
   *VAR_9 = '_';
  }

  ++VAR_9;
 }





 FUNC_2(VAR_11, sizeof (VAR_11), "Comment: %s", VAR_7);

 VAR_8[0] = VAR_1;
 VAR_8[1] = (char *)"-S";
 VAR_8[2] = VAR_0;
 VAR_8[3] = (char *)"usershare";
 VAR_8[4] = (char *)"add";
 VAR_8[5] = (char *)VAR_10;
 VAR_8[6] = (char *)VAR_7;
 VAR_8[7] = (char *)VAR_11;
 VAR_8[8] = "Everyone:F";
 VAR_8[9] = ((void*)0);

 VAR_12 = FUNC_0(VAR_8[0], VAR_8, 0);
 if (VAR_12 < 0)
  return (VAR_3);


 (void) FUNC_1();

 return (VAR_2);
}

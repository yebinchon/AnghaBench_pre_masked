
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmp_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char const*,char*,int) ;

int
FUNC_10(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 char VAR_8[VAR_2];
 char VAR_9[VAR_2];
 char *VAR_10, *VAR_11;


 FUNC_1(VAR_9, 0, VAR_2);
 VAR_11 = FUNC_3(VAR_4);
 VAR_10 = FUNC_7(VAR_11, "/");
 while (VAR_10) {
  FUNC_4(VAR_9, "/", sizeof (VAR_9));
  FUNC_4(VAR_9, VAR_10, sizeof (VAR_9));
  VAR_10 = FUNC_7(((void*)0), "/");
 }
 FUNC_0(VAR_11);

 if (VAR_3[0] != '/')
  return (FUNC_9(VAR_3, VAR_9, VAR_5));

 (void) FUNC_5(VAR_8, VAR_3, VAR_2);
 VAR_6 = FUNC_6(VAR_8);
 VAR_7 = FUNC_6(VAR_9);

 if (VAR_5) {
  VAR_6 = FUNC_8(VAR_8, VAR_2);
  if (VAR_6 == -1)
   return (VAR_1);
 }

 if ((VAR_6 != VAR_7) || FUNC_2(VAR_8, VAR_9))
  return (VAR_0);

 return (0);
}

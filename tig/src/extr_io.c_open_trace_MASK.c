
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char const*,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_5, const char *VAR_6[])
{
 static const char *VAR_7;

 if (!VAR_7) {
  VAR_7 = FUNC_2("TIG_TRACE");
  if (!VAR_7)
   VAR_7 = "";
 }

 if (*VAR_7) {
  int VAR_8 = FUNC_3(VAR_7, VAR_4 | VAR_3 | VAR_2, 0666);
  int VAR_9;

  FUNC_1(VAR_8, VAR_0);
  for (VAR_9 = 0; VAR_6[VAR_9]; VAR_9++) {
   if (FUNC_5(VAR_8, VAR_6[VAR_9], FUNC_4(VAR_6[VAR_9])) == -1
       || FUNC_5(VAR_8, " ", 1) == -1)
    break;
  }
  if (VAR_6[VAR_9] || FUNC_5(VAR_8, "\n", 1) == -1) {
   FUNC_1(VAR_8, VAR_1);
   FUNC_0(VAR_8);
   return VAR_5;
  }

  FUNC_1(VAR_8, VAR_1);
  return VAR_8;
 }

 return VAR_5;
}

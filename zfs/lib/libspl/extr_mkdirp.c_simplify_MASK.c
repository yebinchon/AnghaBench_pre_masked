
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 char* FUNC_0 (size_t,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char*) ;
 size_t FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 size_t VAR_5;
 wchar_t *VAR_6;
 wchar_t *VAR_7;
 char *VAR_8;





 if (!VAR_2) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }





 if ((VAR_8 = FUNC_3(VAR_2)) == ((void*)0)) {
  return (((void*)0));
 }






 VAR_4 = FUNC_4(VAR_8);

 if ((VAR_7 = FUNC_0(VAR_4+1, sizeof (wchar_t))) == ((void*)0)) {
  FUNC_1(VAR_8);
  return (((void*)0));
 }

 if ((VAR_5 = FUNC_2(VAR_7, VAR_8, VAR_4)) == (size_t)-1) {
  FUNC_1(VAR_8);
  FUNC_1(VAR_7);
  return (((void*)0));
 }





 for (VAR_6 = VAR_7, VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  *VAR_6++ = VAR_7[VAR_3];

  if (VAR_7[VAR_3] == '/') {
   VAR_3++;

   while (VAR_7[VAR_3] == '/') {
    VAR_3++;
   }

   VAR_3--;
  }
 }

 *VAR_6 = '\0';





 if (FUNC_5(VAR_8, VAR_7, VAR_4) == (size_t)-1) {
  FUNC_1(VAR_8);
  FUNC_1(VAR_7);
  return (((void*)0));
 }

 FUNC_1(VAR_7);
 return (VAR_8);
}

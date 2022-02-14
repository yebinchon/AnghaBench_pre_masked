
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TString ;


 char* FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 size_t FUNC_3 (int const*) ;

__attribute__((used)) static void FUNC_4(const TString* VAR_0)
{
 const char* VAR_1=FUNC_0(VAR_0);
 size_t VAR_2,VAR_3=FUNC_3(VAR_0);
 FUNC_2("%c",'"');
 for (VAR_2=0; VAR_2<VAR_3; VAR_2++)
 {
  int VAR_4=(int)(unsigned char)VAR_1[VAR_2];
  switch (VAR_4)
  {
   case '"': FUNC_2("\\\""); break;
   case '\\': FUNC_2("\\\\"); break;
   case '\a': FUNC_2("\\a"); break;
   case '\b': FUNC_2("\\b"); break;
   case '\f': FUNC_2("\\f"); break;
   case '\n': FUNC_2("\\n"); break;
   case '\r': FUNC_2("\\r"); break;
   case '\t': FUNC_2("\\t"); break;
   case '\v': FUNC_2("\\v"); break;
   default: if (FUNC_1(VAR_4))
      FUNC_2("%c",VAR_4);
  else
   FUNC_2("\\%03d",VAR_4);
  }
 }
 FUNC_2("%c",'"');
}

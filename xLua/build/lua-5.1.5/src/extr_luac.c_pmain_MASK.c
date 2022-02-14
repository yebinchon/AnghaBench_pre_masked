
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {int argc; char** argv; } ;
typedef int lua_State ;
typedef int Proto ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,int const*,int ,int *,int ) ;
 int FUNC_9 (int const*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_15(lua_State* VAR_6)
{
 struct Smain* VAR_7 = (struct Smain*)FUNC_13(VAR_6, 1);
 int VAR_8=VAR_7->argc;
 char** VAR_9=VAR_7->argv;
 const Proto* VAR_10;
 int VAR_11;
 if (!FUNC_10(VAR_6,VAR_8)) FUNC_3("too many input files");
 for (VAR_11=0; VAR_11<VAR_8; VAR_11++)
 {
  const char* VAR_12=FUNC_0("-") ? ((void*)0) : VAR_9[VAR_11];
  if (FUNC_7(VAR_6,VAR_12)!=0) FUNC_3(FUNC_12(VAR_6,-1));
 }
 VAR_10=FUNC_2(VAR_6,VAR_8);
 if (VAR_1) FUNC_9(VAR_10,VAR_1>1);
 if (VAR_0)
 {
  FILE* VAR_13= (VAR_2==((void*)0)) ? VAR_3 : FUNC_6(VAR_2,"wb");
  if (VAR_13==((void*)0)) FUNC_1("open");
  FUNC_11(VAR_6);
  FUNC_8(VAR_6,VAR_10,VAR_5,VAR_13,VAR_4);
  FUNC_14(VAR_6);
  if (FUNC_5(VAR_13)) FUNC_1("write");
  if (FUNC_4(VAR_13)) FUNC_1("close");
 }
 return 0;
}

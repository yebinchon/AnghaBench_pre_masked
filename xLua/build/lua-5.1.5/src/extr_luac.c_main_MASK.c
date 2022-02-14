
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {int argc; char** argv; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,struct Smain*) ;
 int * FUNC_4 () ;
 char* FUNC_5 (int *,int) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_2, char* VAR_3[])
{
 lua_State* VAR_4;
 struct Smain VAR_5;
 int VAR_6=FUNC_0(VAR_2,VAR_3);
 VAR_2-=VAR_6; VAR_3+=VAR_6;
 if (VAR_2<=0) FUNC_6("no input files given");
 VAR_4=FUNC_4();
 if (VAR_4==((void*)0)) FUNC_1("not enough memory for state");
 VAR_5.argc=VAR_2;
 VAR_5.argv=VAR_3;
 if (FUNC_3(VAR_4,VAR_1,&VAR_5)!=0) FUNC_1(FUNC_5(VAR_4,-1));
 FUNC_2(VAR_4);
 return VAR_0;
}

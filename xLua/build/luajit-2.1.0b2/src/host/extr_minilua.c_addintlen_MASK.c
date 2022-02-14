
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char*VAR_0){
size_t VAR_1=FUNC_1(VAR_0);
char VAR_2=VAR_0[VAR_1-1];
FUNC_0(VAR_0+VAR_1-1,"l");
VAR_0[VAR_1+sizeof("l")-2]=VAR_2;
VAR_0[VAR_1+sizeof("l")-1]='\0';
}

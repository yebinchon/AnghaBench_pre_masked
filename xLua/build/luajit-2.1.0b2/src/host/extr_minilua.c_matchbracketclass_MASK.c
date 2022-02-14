
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(int VAR_0,const char*VAR_1,const char*VAR_2){
int VAR_3=1;
if(*(VAR_1+1)=='^'){
VAR_3=0;
VAR_1++;
}
while(++VAR_1<VAR_2){
if(*VAR_1=='%'){
VAR_1++;
if(FUNC_0(VAR_0,FUNC_1(*VAR_1)))
return VAR_3;
}
else if((*(VAR_1+1)=='-')&&(VAR_1+2<VAR_2)){
VAR_1+=2;
if(FUNC_1(*(VAR_1-2))<=VAR_0&&VAR_0<=FUNC_1(*VAR_1))
return VAR_3;
}
else if(FUNC_1(*VAR_1)==VAR_0)return VAR_3;
}
return!VAR_3;
}

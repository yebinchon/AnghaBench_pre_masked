
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0[],int*VAR_1){
int VAR_2;
int VAR_3;
int VAR_4=0;
int VAR_5=0;
int VAR_6=0;
for(VAR_2=0,VAR_3=1;VAR_3/2<*VAR_1;VAR_2++,VAR_3*=2){
if(VAR_0[VAR_2]>0){
VAR_4+=VAR_0[VAR_2];
if(VAR_4>VAR_3/2){
VAR_6=VAR_3;
VAR_5=VAR_4;
}
}
if(VAR_4==*VAR_1)break;
}
*VAR_1=VAR_6;
return VAR_5;
}

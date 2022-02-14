
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizearray; int * array; } ;
typedef TYPE_1__ Table ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(const Table*VAR_0,int*VAR_1){
int VAR_2;
int VAR_3;
int VAR_4=0;
int VAR_5=1;
for(VAR_2=0,VAR_3=1;VAR_2<=(32-2);VAR_2++,VAR_3*=2){
int VAR_6=0;
int VAR_7=VAR_3;
if(VAR_7>VAR_0->sizearray){
VAR_7=VAR_0->sizearray;
if(VAR_5>VAR_7)
break;
}
for(;VAR_5<=VAR_7;VAR_5++){
if(!FUNC_0(&VAR_0->array[VAR_5-1]))
VAR_6++;
}
VAR_1[VAR_2]+=VAR_6;
VAR_4+=VAR_6;
}
return VAR_4;
}

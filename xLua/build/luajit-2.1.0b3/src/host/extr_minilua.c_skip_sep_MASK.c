
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current; } ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(LexState*VAR_0){
int VAR_1=0;
int VAR_2=VAR_0->current;
FUNC_0(VAR_0);
while(VAR_0->current=='='){
FUNC_0(VAR_0);
VAR_1++;
}
return(VAR_0->current==VAR_2)?VAR_1:(-VAR_1)-1;
}

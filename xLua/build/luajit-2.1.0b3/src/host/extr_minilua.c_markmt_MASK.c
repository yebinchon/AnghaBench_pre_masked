
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* mt; } ;
typedef TYPE_1__ global_State ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(global_State*VAR_0){
int VAR_1;
for(VAR_1=0;VAR_1<(8+1);VAR_1++)
if(VAR_0->mt[VAR_1])FUNC_0(VAR_0,VAR_0->mt[VAR_1]);
}

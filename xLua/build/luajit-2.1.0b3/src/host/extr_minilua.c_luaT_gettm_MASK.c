
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int TString ;
typedef unsigned int TMS ;


 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static const TValue*FUNC_3(Table*VAR_0,TMS VAR_1,TString*VAR_2){
const TValue*VAR_3=FUNC_1(VAR_0,VAR_2);
if(FUNC_2(VAR_3)){
VAR_0->flags|=FUNC_0(1u<<VAR_1);
return ((void*)0);
}
else return VAR_3;
}

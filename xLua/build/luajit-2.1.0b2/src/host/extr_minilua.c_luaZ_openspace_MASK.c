
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {size_t buffsize; char* buffer; } ;
typedef TYPE_1__ Mbuffer ;


 int FUNC_0 (int *,TYPE_1__*,size_t) ;

__attribute__((used)) static char*FUNC_1(lua_State*VAR_0,Mbuffer*VAR_1,size_t VAR_2){
if(VAR_2>VAR_1->buffsize){
if(VAR_2<32)VAR_2=32;
FUNC_0(VAR_0,VAR_1,VAR_2);
}
return VAR_1->buffer;
}

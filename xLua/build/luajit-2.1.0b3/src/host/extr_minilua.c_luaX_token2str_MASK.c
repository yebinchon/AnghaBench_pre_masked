
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef TYPE_1__ LexState ;


 scalar_t__ FUNC_0 (int) ;
 char const* FUNC_1 (int ,char*,int) ;
 char const** VAR_0 ;

__attribute__((used)) static const char*FUNC_2(LexState*VAR_1,int VAR_2){
if(VAR_2<257){
return(FUNC_0(VAR_2))?FUNC_1(VAR_1->L,"char(%d)",VAR_2):
FUNC_1(VAR_1->L,"%c",VAR_2);
}
else
return VAR_0[VAR_2-257];
}

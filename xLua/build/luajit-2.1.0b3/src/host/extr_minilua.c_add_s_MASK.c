
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int luaL_Buffer ;
struct TYPE_4__ {int L; } ;
typedef TYPE_1__ MatchState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ,int,size_t*) ;
 int FUNC_5 (TYPE_1__*,char const,char const*,char const*) ;
 int FUNC_6 (char const) ;

__attribute__((used)) static void FUNC_7(MatchState*VAR_0,luaL_Buffer*VAR_1,const char*VAR_2,
const char*VAR_3){
size_t VAR_4,VAR_5;
const char*VAR_6=FUNC_4(VAR_0->L,3,&VAR_4);
for(VAR_5=0;VAR_5<VAR_4;VAR_5++){
if(VAR_6[VAR_5]!='%')
FUNC_1(VAR_1,VAR_6[VAR_5]);
else{
VAR_5++;
if(!FUNC_0(FUNC_6(VAR_6[VAR_5])))
FUNC_1(VAR_1,VAR_6[VAR_5]);
else if(VAR_6[VAR_5]=='0')
FUNC_2(VAR_1,VAR_2,VAR_3-VAR_2);
else{
FUNC_5(VAR_0,VAR_6[VAR_5]-'1',VAR_2,VAR_3);
FUNC_3(VAR_1);
}
}
}
}

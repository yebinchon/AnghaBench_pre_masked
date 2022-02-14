
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_Number ;
struct TYPE_6__ {int nval; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int OpCode ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(OpCode VAR_0,expdesc*VAR_1,expdesc*VAR_2){
lua_Number VAR_3,VAR_4,VAR_5;
if(!FUNC_0(VAR_1)||!FUNC_0(VAR_2))return 0;
VAR_3=VAR_1->u.nval;
VAR_4=VAR_2->u.nval;
switch(VAR_0){
case 135:VAR_5=FUNC_1(VAR_3,VAR_4);break;
case 129:VAR_5=FUNC_7(VAR_3,VAR_4);break;
case 131:VAR_5=FUNC_5(VAR_3,VAR_4);break;
case 134:
if(VAR_4==0)return 0;
VAR_5=FUNC_2(VAR_3,VAR_4);break;
case 132:
if(VAR_4==0)return 0;
VAR_5=FUNC_4(VAR_3,VAR_4);break;
case 130:VAR_5=FUNC_6(VAR_3,VAR_4);break;
case 128:VAR_5=FUNC_8(VAR_3);break;
case 133:return 0;
default:VAR_5=0;break;
}
if(FUNC_3(VAR_5))return 0;
VAR_1->u.nval=VAR_5;
return 1;
}

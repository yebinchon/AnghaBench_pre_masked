
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int expdesc ;
typedef scalar_t__ UnOpr ;
struct TYPE_11__ {unsigned int left; unsigned int right; } ;
struct TYPE_9__ {int token; } ;
struct TYPE_10__ {int fs; TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;
typedef size_t BinOpr ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,size_t,int *) ;
 int FUNC_5 (int ,size_t,int *,int *) ;
 int FUNC_6 (int ,scalar_t__,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_5__* VAR_2 ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static BinOpr FUNC_9(LexState*VAR_3,expdesc*VAR_4,unsigned int VAR_5){
BinOpr VAR_6;
UnOpr VAR_7;
FUNC_0(VAR_3);
VAR_7=FUNC_2(VAR_3->t.token);
if(VAR_7!=VAR_1){
FUNC_7(VAR_3);
FUNC_9(VAR_3,VAR_4,8);
FUNC_6(VAR_3->fs,VAR_7,VAR_4);
}
else FUNC_8(VAR_3,VAR_4);
VAR_6=FUNC_1(VAR_3->t.token);
while(VAR_6!=VAR_0&&VAR_2[VAR_6].left>VAR_5){
expdesc VAR_8;
BinOpr VAR_9;
FUNC_7(VAR_3);
FUNC_4(VAR_3->fs,VAR_6,VAR_4);
VAR_9=FUNC_9(VAR_3,&VAR_8,VAR_2[VAR_6].right);
FUNC_5(VAR_3->fs,VAR_6,VAR_4,&VAR_8);
VAR_6=VAR_9;
}
FUNC_3(VAR_3);
return VAR_6;
}

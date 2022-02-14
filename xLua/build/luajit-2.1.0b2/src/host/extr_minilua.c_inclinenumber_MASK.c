
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current; int linenumber; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(LexState*VAR_1){
int VAR_2=VAR_1->current;
FUNC_2(VAR_1);
if(FUNC_0(VAR_1)&&VAR_1->current!=VAR_2)
FUNC_2(VAR_1);
if(++VAR_1->linenumber>=(VAR_0-2))
FUNC_1(VAR_1,"chunk has too many lines");
}

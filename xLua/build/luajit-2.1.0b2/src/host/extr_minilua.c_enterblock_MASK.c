
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lu_byte ;
struct TYPE_6__ {int breaklist; struct TYPE_6__* previous; scalar_t__ upval; int nactvar; int isbreakable; } ;
struct TYPE_5__ {TYPE_2__* bl; int nactvar; } ;
typedef TYPE_1__ FuncState ;
typedef TYPE_2__ BlockCnt ;



__attribute__((used)) static void FUNC_0(FuncState*VAR_0,BlockCnt*VAR_1,lu_byte VAR_2){
VAR_1->breaklist=(-1);
VAR_1->isbreakable=VAR_2;
VAR_1->nactvar=VAR_0->nactvar;
VAR_1->upval=0;
VAR_1->previous=VAR_0->bl;
VAR_0->bl=VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {size_t n; TYPE_2__* a; } ;
typedef TYPE_1__ WhereOrSet ;
struct TYPE_5__ {scalar_t__ rRun; int prereq; scalar_t__ nOut; } ;
typedef TYPE_2__ WhereOrCost ;
typedef scalar_t__ LogEst ;
typedef int Bitmask ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(
  WhereOrSet *VAR_1,
  Bitmask VAR_2,
  LogEst VAR_3,
  LogEst VAR_4
){
  u16 VAR_5;
  WhereOrCost *VAR_6;
  for(VAR_5=VAR_1->n, VAR_6=VAR_1->a; VAR_5>0; VAR_5--, VAR_6++){
    if( VAR_3<=VAR_6->rRun && (VAR_2 & VAR_6->prereq)==VAR_2 ){
      goto whereOrInsert_done;
    }
    if( VAR_6->rRun<=VAR_3 && (VAR_6->prereq & VAR_2)==VAR_6->prereq ){
      return 0;
    }
  }
  if( VAR_1->n<VAR_0 ){
    VAR_6 = &VAR_1->a[VAR_1->n++];
    VAR_6->nOut = VAR_4;
  }else{
    VAR_6 = VAR_1->a;
    for(VAR_5=1; VAR_5<VAR_1->n; VAR_5++){
      if( VAR_6->rRun>VAR_1->a[VAR_5].rRun ) VAR_6 = VAR_1->a + VAR_5;
    }
    if( VAR_6->rRun<=VAR_3 ) return 0;
  }
whereOrInsert_done:
  VAR_6->prereq = VAR_2;
  VAR_6->rRun = VAR_3;
  if( VAR_6->nOut>VAR_4 ) VAR_6->nOut = VAR_4;
  return 1;
}

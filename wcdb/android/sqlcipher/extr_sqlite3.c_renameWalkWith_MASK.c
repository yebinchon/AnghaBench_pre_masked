
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sNC ;
struct TYPE_15__ {int pParse; } ;
typedef TYPE_3__ Walker ;
struct TYPE_17__ {int pParse; } ;
struct TYPE_16__ {TYPE_1__* pWith; } ;
struct TYPE_14__ {TYPE_4__* pSelect; } ;
struct TYPE_13__ {int nCte; TYPE_2__* a; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ NameContext ;


 int FUNC_0 (TYPE_5__*,int ,int) ;
 int FUNC_1 (int ,TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(Walker *VAR_0, Select *VAR_1){
  if( VAR_1->pWith ){
    int VAR_2;
    for(VAR_2=0; VAR_2<VAR_1->pWith->nCte; VAR_2++){
      Select *VAR_3 = VAR_1->pWith->a[VAR_2].pSelect;
      NameContext VAR_4;
      FUNC_0(&VAR_4, 0, sizeof(VAR_4));
      VAR_4.pParse = VAR_0->pParse;
      FUNC_1(VAR_4.pParse, VAR_3, &VAR_4);
      FUNC_2(VAR_0, VAR_3);
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_15__ {scalar_t__ nCol; scalar_t__ aCol; scalar_t__ pSelect; } ;
typedef TYPE_4__ Table ;
struct TYPE_13__ {TYPE_1__* pSchema; } ;
struct TYPE_12__ {int tblHash; } ;
typedef int HashElem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 TYPE_4__* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(sqlite3 *VAR_1, int VAR_2){
  HashElem *VAR_3;
  FUNC_2( FUNC_4(VAR_1, VAR_2, 0) );
  if( !FUNC_1(VAR_1, VAR_2, VAR_0) ) return;
  for(VAR_3=FUNC_6(&VAR_1->aDb[VAR_2].pSchema->tblHash); VAR_3;VAR_3=FUNC_7(VAR_3)){
    Table *VAR_4 = FUNC_5(VAR_3);
    if( VAR_4->pSelect ){
      FUNC_3(VAR_1, VAR_4);
      VAR_4->aCol = 0;
      VAR_4->nCol = 0;
    }
  }
  FUNC_0(VAR_1, VAR_2, VAR_0);
}

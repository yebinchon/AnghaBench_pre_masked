
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Table ;
struct TYPE_14__ {int nTab; int nMem; TYPE_2__* db; } ;
struct TYPE_13__ {int tblHash; } ;
struct TYPE_11__ {TYPE_3__* pSchema; } ;
typedef TYPE_3__ Schema ;
typedef TYPE_4__ Parse ;
typedef int HashElem ;


 int FUNC_0 (TYPE_4__*,int *,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int,int,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(Parse *VAR_0, int VAR_1){
  sqlite3 *VAR_2 = VAR_0->db;
  Schema *VAR_3 = VAR_2->aDb[VAR_1].pSchema;
  HashElem *VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;

  FUNC_4(VAR_0, 0, VAR_1);
  VAR_5 = VAR_0->nTab;
  VAR_0->nTab += 3;
  FUNC_3(VAR_0, VAR_1, VAR_5, 0, 0);
  VAR_6 = VAR_0->nMem+1;
  VAR_7 = VAR_0->nTab;
  FUNC_1( FUNC_5(VAR_2, VAR_1, 0) );
  for(VAR_4=FUNC_7(&VAR_3->tblHash); VAR_4; VAR_4=FUNC_8(VAR_4)){
    Table *VAR_8 = (Table*)FUNC_6(VAR_4);
    FUNC_0(VAR_0, VAR_8, 0, VAR_5, VAR_6, VAR_7);
  }
  FUNC_2(VAR_0, VAR_1);
}

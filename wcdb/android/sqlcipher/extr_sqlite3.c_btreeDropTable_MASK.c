
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ autoVacuum; } ;
struct TYPE_12__ {scalar_t__ inTrans; TYPE_2__* pBt; } ;
typedef int Pgno ;
typedef int MemPage ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int,int **,int ) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_11(Btree *VAR_4, Pgno VAR_5, int *VAR_6){
  int VAR_7;
  MemPage *VAR_8 = 0;
  BtShared *VAR_9 = VAR_4->pBt;

  FUNC_2( FUNC_9(VAR_4) );
  FUNC_2( VAR_4->inTrans==VAR_3 );
  FUNC_2( VAR_5>=2 );

  VAR_7 = FUNC_3(VAR_9, (Pgno)VAR_5, &VAR_8, 0);
  if( VAR_7 ) return VAR_7;
  VAR_7 = FUNC_7(VAR_4, VAR_5, 0);
  if( VAR_7 ){
    FUNC_5(VAR_8);
    return VAR_7;
  }

  *VAR_6 = 0;





  if( VAR_9->autoVacuum ){
    Pgno VAR_10;
    FUNC_8(VAR_4, VAR_0, &VAR_10);

    if( VAR_5==VAR_10 ){



      FUNC_4(VAR_8, &VAR_7);
      FUNC_5(VAR_8);
      if( VAR_7!=VAR_2 ){
        return VAR_7;
      }
    }else{




      MemPage *VAR_11;
      FUNC_5(VAR_8);
      VAR_7 = FUNC_3(VAR_9, VAR_10, &VAR_11, 0);
      if( VAR_7!=VAR_2 ){
        return VAR_7;
      }
      VAR_7 = FUNC_6(VAR_9, VAR_11, VAR_1, 0, VAR_5, 0);
      FUNC_5(VAR_11);
      if( VAR_7!=VAR_2 ){
        return VAR_7;
      }
      VAR_11 = 0;
      VAR_7 = FUNC_3(VAR_9, VAR_10, &VAR_11, 0);
      FUNC_4(VAR_11, &VAR_7);
      FUNC_5(VAR_11);
      if( VAR_7!=VAR_2 ){
        return VAR_7;
      }
      *VAR_6 = VAR_10;
    }






    VAR_10--;
    while( VAR_10==FUNC_0(VAR_9)
           || FUNC_1(VAR_9, VAR_10) ){
      VAR_10--;
    }
    FUNC_2( VAR_10!=FUNC_0(VAR_9) );

    VAR_7 = FUNC_10(VAR_4, 4, VAR_10);
  }else{
    FUNC_4(VAR_8, &VAR_7);
    FUNC_5(VAR_8);
  }

  return VAR_7;
}

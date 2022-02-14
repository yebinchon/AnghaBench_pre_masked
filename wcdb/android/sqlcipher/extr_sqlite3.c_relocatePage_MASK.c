
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int mutex; int * pPager; } ;
struct TYPE_11__ {int pgno; int pDbPage; int aData; TYPE_2__* pBt; } ;
typedef int Pgno ;
typedef int Pager ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_1__**,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int,int ) ;
 int FUNC_5 (TYPE_2__*,int,int ,int,int*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(
  BtShared *VAR_6,
  MemPage *VAR_7,
  u8 VAR_8,
  Pgno VAR_9,
  Pgno VAR_10,
  int VAR_11
){
  MemPage *VAR_12;
  Pgno VAR_13 = VAR_7->pgno;
  Pager *VAR_14 = VAR_6->pPager;
  int VAR_15;

  FUNC_1( VAR_8==VAR_2 || VAR_8==VAR_1 ||
      VAR_8==VAR_0 || VAR_8==VAR_3 );
  FUNC_1( FUNC_10(VAR_6->mutex) );
  FUNC_1( VAR_7->pBt==VAR_6 );
  if( VAR_13<3 ) return VAR_4;


  FUNC_0(("AUTOVACUUM: Moving %d to free page %d (ptr page %d type %d)\n",
      VAR_13, VAR_10, VAR_9, VAR_8));
  VAR_15 = FUNC_8(VAR_14, VAR_7->pDbPage, VAR_10, VAR_11);
  if( VAR_15!=VAR_5 ){
    return VAR_15;
  }
  VAR_7->pgno = VAR_10;
  if( VAR_8==VAR_0 || VAR_8==VAR_3 ){
    VAR_15 = FUNC_7(VAR_7);
    if( VAR_15!=VAR_5 ){
      return VAR_15;
    }
  }else{
    Pgno VAR_16 = FUNC_3(VAR_7->aData);
    if( VAR_16!=0 ){
      FUNC_5(VAR_6, VAR_16, VAR_2, VAR_10, &VAR_15);
      if( VAR_15!=VAR_5 ){
        return VAR_15;
      }
    }
  }





  if( VAR_8!=VAR_3 ){
    VAR_15 = FUNC_2(VAR_6, VAR_9, &VAR_12, 0);
    if( VAR_15!=VAR_5 ){
      return VAR_15;
    }
    VAR_15 = FUNC_9(VAR_12->pDbPage);
    if( VAR_15!=VAR_5 ){
      FUNC_6(VAR_12);
      return VAR_15;
    }
    VAR_15 = FUNC_4(VAR_12, VAR_13, VAR_10, VAR_8);
    FUNC_6(VAR_12);
    if( VAR_15==VAR_5 ){
      FUNC_5(VAR_6, VAR_10, VAR_8, VAR_9, &VAR_15);
    }
  }
  return VAR_15;
}

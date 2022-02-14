
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_18__ {int usableSize; int mutex; } ;
struct TYPE_17__ {int nLocal; int nPayload; int nSize; } ;
struct TYPE_16__ {unsigned char* aDataEnd; int pDbPage; TYPE_3__* pBt; int (* xParseCell ) (TYPE_1__*,unsigned char*,TYPE_2__*) ;} ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;
typedef TYPE_3__ BtShared ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_3__*,int,TYPE_1__**,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,unsigned char*,TYPE_2__*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(
  MemPage *VAR_3,
  unsigned char *VAR_4,
  CellInfo *VAR_5
){
  BtShared *VAR_6;
  Pgno VAR_7;
  int VAR_8;
  int VAR_9;
  u32 VAR_10;

  FUNC_1( FUNC_9(VAR_3->pBt->mutex) );
  VAR_3->xParseCell(VAR_3, VAR_4, VAR_5);
  if( VAR_5->nLocal==VAR_5->nPayload ){
    return VAR_2;
  }
  FUNC_11( VAR_4 + VAR_5->nSize == VAR_3->aDataEnd );
  FUNC_11( VAR_4 + (VAR_5->nSize-1) == VAR_3->aDataEnd );
  if( VAR_4 + VAR_5->nSize > VAR_3->aDataEnd ){

    return FUNC_0(VAR_3);
  }
  VAR_7 = FUNC_5(VAR_4 + VAR_5->nSize - 4);
  VAR_6 = VAR_3->pBt;
  FUNC_1( VAR_6->usableSize > 4 );
  VAR_10 = VAR_6->usableSize - 4;
  VAR_9 = (VAR_5->nPayload - VAR_5->nLocal + VAR_10 - 1)/VAR_10;
  FUNC_1( VAR_9>0 ||
    (VAR_0 && (VAR_5->nPayload + VAR_10)<VAR_10)
  );
  while( VAR_9-- ){
    Pgno VAR_11 = 0;
    MemPage *VAR_12 = 0;
    if( VAR_7<2 || VAR_7>FUNC_3(VAR_6) ){



      return VAR_1;
    }
    if( VAR_9 ){
      VAR_8 = FUNC_6(VAR_6, VAR_7, &VAR_12, &VAR_11);
      if( VAR_8 ) return VAR_8;
    }

    if( ( VAR_12 || ((VAR_12 = FUNC_2(VAR_6, VAR_7))!=0) )
     && FUNC_7(VAR_12->pDbPage)!=1
    ){
      VAR_8 = VAR_1;
    }else{
      VAR_8 = FUNC_4(VAR_6, VAR_12, VAR_7);
    }

    if( VAR_12 ){
      FUNC_8(VAR_12->pDbPage);
    }
    if( VAR_8 ) return VAR_8;
    VAR_7 = VAR_11;
  }
  return VAR_2;
}

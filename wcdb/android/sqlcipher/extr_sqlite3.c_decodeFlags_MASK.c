
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int max1bytePayload; int minLocal; int maxLocal; int minLeaf; int maxLeaf; int mutex; } ;
struct TYPE_5__ {int hdrOffset; int pgno; int leaf; int childPtrSize; int intKey; int intKeyLeaf; int max1bytePayload; int minLocal; int maxLocal; int xParseCell; int xCellSize; TYPE_2__* pBt; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(MemPage *VAR_10, int VAR_11){
  BtShared *VAR_12;

  FUNC_1( VAR_10->hdrOffset==(VAR_10->pgno==1 ? 100 : 0) );
  FUNC_1( FUNC_2(VAR_10->pBt->mutex) );
  VAR_10->leaf = (u8)(VAR_11>>3); FUNC_1( VAR_1 == 1<<3 );
  VAR_11 &= ~VAR_1;
  VAR_10->childPtrSize = 4-4*VAR_10->leaf;
  VAR_10->xCellSize = VAR_8;
  VAR_12 = VAR_10->pBt;
  if( VAR_11==(VAR_2 | VAR_0) ){


    FUNC_1( (VAR_2|VAR_0)==5 );


    FUNC_1( (VAR_2|VAR_0|VAR_1)==13 );
    VAR_10->intKey = 1;
    if( VAR_10->leaf ){
      VAR_10->intKeyLeaf = 1;
      VAR_10->xParseCell = VAR_5;
    }else{
      VAR_10->intKeyLeaf = 0;
      VAR_10->xCellSize = VAR_9;
      VAR_10->xParseCell = VAR_7;
    }
    VAR_10->maxLocal = VAR_12->maxLeaf;
    VAR_10->minLocal = VAR_12->minLeaf;
  }else if( VAR_11==VAR_3 ){


    FUNC_1( (VAR_3)==2 );


    FUNC_1( (VAR_3|VAR_1)==10 );
    VAR_10->intKey = 0;
    VAR_10->intKeyLeaf = 0;
    VAR_10->xParseCell = VAR_6;
    VAR_10->maxLocal = VAR_12->maxLocal;
    VAR_10->minLocal = VAR_12->minLocal;
  }else{


    return FUNC_0(VAR_10);
  }
  VAR_10->max1bytePayload = VAR_12->max1bytePayload;
  return VAR_4;
}

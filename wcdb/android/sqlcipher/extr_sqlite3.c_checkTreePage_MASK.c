
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int i64 ;
struct TYPE_20__ {int usableSize; scalar_t__ autoVacuum; } ;
struct TYPE_19__ {int nSize; scalar_t__ nPayload; scalar_t__ nLocal; int nKey; } ;
struct TYPE_18__ {char* zPfx; int v1; int v2; int* heap; scalar_t__ mxErr; TYPE_4__* pBt; } ;
struct TYPE_17__ {int isInit; int* aData; int hdrOffset; int nCell; int leaf; int* aCellIdx; int (* xCellSize ) (TYPE_1__*,int*) ;scalar_t__ intKey; int (* xParseCell ) (TYPE_1__*,int*,TYPE_3__*) ;} ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ IntegrityCk ;
typedef TYPE_3__ CellInfo ;
typedef TYPE_4__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_1__**,int ) ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int*,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 int FUNC_7 (TYPE_2__*,int,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int*,TYPE_3__*) ;
 int FUNC_15 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_16(
  IntegrityCk *VAR_3,
  int VAR_4,
  i64 *VAR_5,
  i64 VAR_6
){
  MemPage *VAR_7 = 0;
  int VAR_8;
  int VAR_9;
  int VAR_10 = -1, VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17 = 1;
  int VAR_18 = 1;

  u8 *VAR_19;
  u8 *VAR_20;
  u8 *VAR_21;
  BtShared *VAR_22;
  u32 VAR_23;
  u32 VAR_24;
  u32 VAR_25;
  u32 *VAR_26 = 0;
  u32 VAR_27, VAR_28 = 0;
  const char *VAR_29 = VAR_3->zPfx;
  int VAR_30 = VAR_3->v1;
  int VAR_31 = VAR_3->v2;
  u8 VAR_32 = 0;



  VAR_22 = VAR_3->pBt;
  VAR_24 = VAR_22->usableSize;
  if( VAR_4==0 ) return 0;
  if( FUNC_8(VAR_3, VAR_4) ) return 0;
  VAR_3->zPfx = "Page %d: ";
  VAR_3->v1 = VAR_4;
  if( (VAR_9 = FUNC_1(VAR_22, (Pgno)VAR_4, &VAR_7, 0))!=0 ){
    FUNC_5(VAR_3,
       "unable to get the page. error code=%d", VAR_9);
    goto end_of_check;
  }



  VAR_32 = VAR_7->isInit;
  VAR_7->isInit = 0;
  if( (VAR_9 = FUNC_4(VAR_7))!=0 ){
    FUNC_0( VAR_9==VAR_2 );
    FUNC_5(VAR_3,
                   "btreeInitPage() returns error code %d", VAR_9);
    goto end_of_check;
  }
  VAR_19 = VAR_7->aData;
  VAR_14 = VAR_7->hdrOffset;


  VAR_3->zPfx = "On tree page %d cell %d: ";
  VAR_25 = FUNC_11(&VAR_19[VAR_14+5]);
  FUNC_0( VAR_25<=VAR_24 );



  VAR_16 = FUNC_9(&VAR_19[VAR_14+3]);
  FUNC_0( VAR_7->nCell==VAR_16 );



  VAR_15 = VAR_14 + 12 - 4*VAR_7->leaf;
  FUNC_0( VAR_7->aCellIdx==&VAR_19[VAR_15] );
  VAR_21 = &VAR_19[VAR_15 + 2*(VAR_16-1)];

  if( !VAR_7->leaf ){

    VAR_12 = FUNC_12(&VAR_19[VAR_14+8]);

    if( VAR_22->autoVacuum ){
      VAR_3->zPfx = "On page %d at right child: ";
      FUNC_7(VAR_3, VAR_12, VAR_0, VAR_4);
    }

    VAR_10 = FUNC_16(VAR_3, VAR_12, &VAR_6, VAR_6);
    VAR_18 = 0;
  }else{


    VAR_26 = VAR_3->heap;
    VAR_26[0] = 0;
  }



  for(VAR_8=VAR_16-1; VAR_8>=0 && VAR_3->mxErr; VAR_8--){
    CellInfo VAR_33;


    VAR_3->v2 = VAR_8;
    FUNC_0( VAR_21==&VAR_19[VAR_15 + VAR_8*2] );
    VAR_23 = FUNC_10(VAR_21);
    VAR_21 -= 2;
    if( VAR_23<VAR_25 || VAR_23>VAR_24-4 ){
      FUNC_5(VAR_3, "Offset %d out of range %d..%d",
                             VAR_23, VAR_25, VAR_24-4);
      VAR_17 = 0;
      continue;
    }
    VAR_20 = &VAR_19[VAR_23];
    VAR_7->xParseCell(VAR_7, VAR_20, &VAR_33);
    if( VAR_23+VAR_33.nSize>VAR_24 ){
      FUNC_5(VAR_3, "Extends off end of page");
      VAR_17 = 0;
      continue;
    }


    if( VAR_7->intKey ){
      if( VAR_18 ? (VAR_33.nKey > VAR_6) : (VAR_33.nKey >= VAR_6) ){
        FUNC_5(VAR_3, "Rowid %lld out of order", VAR_33.nKey);
      }
      VAR_6 = VAR_33.nKey;
      VAR_18 = 0;
    }


    if( VAR_33.nPayload>VAR_33.nLocal ){
      int VAR_34;
      Pgno VAR_35;
      FUNC_0( VAR_23 + VAR_33.nSize - 4 <= VAR_24 );
      VAR_34 = (VAR_33.nPayload - VAR_33.nLocal + VAR_24 - 5)/(VAR_24 - 4);
      VAR_35 = FUNC_12(&VAR_20[VAR_33.nSize - 4]);

      if( VAR_22->autoVacuum ){
        FUNC_7(VAR_3, VAR_35, VAR_1, VAR_4);
      }

      FUNC_6(VAR_3, 0, VAR_35, VAR_34);
    }

    if( !VAR_7->leaf ){

      VAR_12 = FUNC_12(VAR_20);

      if( VAR_22->autoVacuum ){
        FUNC_7(VAR_3, VAR_12, VAR_0, VAR_4);
      }

      VAR_11 = FUNC_16(VAR_3, VAR_12, &VAR_6, VAR_6);
      VAR_18 = 0;
      if( VAR_11!=VAR_10 ){
        FUNC_5(VAR_3, "Child page depth differs");
        VAR_10 = VAR_11;
      }
    }else{

      FUNC_2(VAR_26, (VAR_23<<16)|(VAR_23+VAR_33.nSize-1));
    }
  }
  *VAR_5 = VAR_6;



  VAR_3->zPfx = 0;
  if( VAR_17 && VAR_3->mxErr>0 ){



    if( !VAR_7->leaf ){
      VAR_26 = VAR_3->heap;
      VAR_26[0] = 0;
      for(VAR_8=VAR_16-1; VAR_8>=0; VAR_8--){
        u32 VAR_36;
        VAR_23 = FUNC_10(&VAR_19[VAR_15+VAR_8*2]);
        VAR_36 = VAR_7->xCellSize(VAR_7, &VAR_19[VAR_23]);
        FUNC_2(VAR_26, (VAR_23<<16)|(VAR_23+VAR_36-1));
      }
    }






    VAR_8 = FUNC_9(&VAR_19[VAR_14+1]);
    while( VAR_8>0 ){
      int VAR_37, VAR_38;
      FUNC_0( (u32)VAR_8<=VAR_24-4 );
      VAR_37 = FUNC_9(&VAR_19[VAR_8+2]);
      FUNC_0( (u32)(VAR_8+VAR_37)<=VAR_24 );
      FUNC_2(VAR_26, (((u32)VAR_8)<<16)|(VAR_8+VAR_37-1));




      VAR_38 = FUNC_9(&VAR_19[VAR_8]);


      FUNC_0( VAR_38==0 || VAR_38>VAR_8+VAR_37 );
      FUNC_0( (u32)VAR_38<=VAR_24-4 );
      VAR_8 = VAR_38;
    }
    VAR_13 = 0;
    VAR_28 = VAR_25 - 1;
    while( FUNC_3(VAR_26,&VAR_27) ){
      if( (VAR_28&0xffff)>=(VAR_27>>16) ){
        FUNC_5(VAR_3,
          "Multiple uses for byte %u of page %d", VAR_27>>16, VAR_4);
        break;
      }else{
        VAR_13 += (VAR_27>>16) - (VAR_28&0xffff) - 1;
        VAR_28 = VAR_27;
      }
    }
    VAR_13 += VAR_24 - (VAR_28&0xffff) - 1;





    if( VAR_26[0]==0 && VAR_13!=VAR_19[VAR_14+7] ){
      FUNC_5(VAR_3,
          "Fragmentation of %d bytes reported as %d on page %d",
          VAR_13, VAR_19[VAR_14+7], VAR_4);
    }
  }

end_of_check:
  if( !VAR_17 ) VAR_7->isInit = VAR_32;
  FUNC_13(VAR_7);
  VAR_3->zPfx = VAR_29;
  VAR_3->v1 = VAR_30;
  VAR_3->v2 = VAR_31;
  return VAR_10+1;
}

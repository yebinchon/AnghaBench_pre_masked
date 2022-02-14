
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_7__ {scalar_t__ nOverflow; unsigned char* aData; int hdrOffset; int cellOffset; int nCell; int (* xCellSize ) (TYPE_2__*,unsigned char*) ;unsigned char nFree; int pDbPage; TYPE_1__* pBt; } ;
struct TYPE_6__ {int usableSize; int pPager; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int ) ;
 unsigned char* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,unsigned char*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(MemPage *VAR_2, int VAR_3){
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  unsigned char *VAR_12;
  unsigned char *VAR_13;
  unsigned char *VAR_14;
  int VAR_15;
  int VAR_16;

  FUNC_1( FUNC_7(VAR_2->pDbPage) );
  FUNC_1( VAR_2->pBt!=0 );
  FUNC_1( VAR_2->pBt->usableSize <= VAR_0 );
  FUNC_1( VAR_2->nOverflow==0 );
  FUNC_1( FUNC_9(VAR_2->pBt->mutex) );
  VAR_13 = 0;
  VAR_14 = VAR_12 = VAR_2->aData;
  VAR_6 = VAR_2->hdrOffset;
  VAR_9 = VAR_2->cellOffset;
  VAR_11 = VAR_2->nCell;
  FUNC_1( VAR_11==FUNC_2(&VAR_12[VAR_6+3]) );
  VAR_15 = VAR_9 + 2*VAR_11;
  VAR_8 = VAR_2->pBt->usableSize;






  if( (int)VAR_12[VAR_6+7]<=VAR_3 ){
    int VAR_17 = FUNC_2(&VAR_12[VAR_6+1]);




    FUNC_1( VAR_17<=VAR_8-4 );
    if( VAR_17 ){
      int VAR_18 = FUNC_2(&VAR_12[VAR_17]);
      if( VAR_18>VAR_8-4 ) return FUNC_0(VAR_2);
      if( 0==VAR_18 || (VAR_12[VAR_18]==0 && VAR_12[VAR_18+1]==0) ){
        u8 *VAR_19 = &VAR_12[VAR_9 + VAR_11*2];
        u8 *VAR_20;
        int VAR_21 = 0;
        int VAR_22 = FUNC_2(&VAR_12[VAR_17+2]);
        int VAR_23 = FUNC_2(&VAR_12[VAR_6+5]);
        if( VAR_23>=VAR_17 ){
          return FUNC_0(VAR_2);
        }
        if( VAR_18 ){
          if( VAR_17+VAR_22>VAR_18 ) return FUNC_0(VAR_2);
          VAR_21 = FUNC_2(&VAR_12[VAR_18+2]);
          if( VAR_18+VAR_21 > VAR_8 ) return FUNC_0(VAR_2);
          FUNC_4(&VAR_12[VAR_17+VAR_22+VAR_21], &VAR_12[VAR_17+VAR_22], VAR_18-(VAR_17+VAR_22));
          VAR_22 += VAR_21;
        }
        VAR_10 = VAR_23+VAR_22;
        FUNC_1( VAR_10+(VAR_17-VAR_23) <= VAR_8 );
        FUNC_4(&VAR_12[VAR_10], &VAR_12[VAR_23], VAR_17-VAR_23);
        for(VAR_20=&VAR_12[VAR_9]; VAR_20<VAR_19; VAR_20+=2){
          VAR_5 = FUNC_2(VAR_20);
          if( VAR_5<VAR_17 ){ FUNC_6(VAR_20, VAR_5+VAR_22); }
          else if( VAR_5<VAR_18 ){ FUNC_6(VAR_20, VAR_5+VAR_21); }
        }
        goto defragment_out;
      }
    }
  }

  VAR_10 = VAR_8;
  VAR_16 = VAR_8 - 4;
  for(VAR_4=0; VAR_4<VAR_11; VAR_4++){
    u8 *VAR_24;
    VAR_24 = &VAR_12[VAR_9 + VAR_4*2];
    VAR_5 = FUNC_2(VAR_24);
    FUNC_11( VAR_5==VAR_15 );
    FUNC_11( VAR_5==VAR_16 );



    if( VAR_5<VAR_15 || VAR_5>VAR_16 ){
      return FUNC_0(VAR_2);
    }
    FUNC_1( VAR_5>=VAR_15 && VAR_5<=VAR_16 );
    VAR_7 = VAR_2->xCellSize(VAR_2, &VAR_14[VAR_5]);
    VAR_10 -= VAR_7;
    if( VAR_10<VAR_15 || VAR_5+VAR_7>VAR_8 ){
      return FUNC_0(VAR_2);
    }
    FUNC_1( VAR_10+VAR_7<=VAR_8 && VAR_10>=VAR_15 );
    FUNC_11( VAR_10+VAR_7==VAR_8 );
    FUNC_11( VAR_5+VAR_7==VAR_8 );
    FUNC_6(VAR_24, VAR_10);
    if( VAR_13==0 ){
      int VAR_25;
      if( VAR_10==VAR_5 ) continue;
      VAR_13 = FUNC_8(VAR_2->pBt->pPager);
      VAR_25 = FUNC_2(&VAR_12[VAR_6+5]);
      FUNC_3(&VAR_13[VAR_25], &VAR_12[VAR_25], (VAR_10+VAR_7) - VAR_25);
      VAR_14 = VAR_13;
    }
    FUNC_3(&VAR_12[VAR_10], &VAR_14[VAR_5], VAR_7);
  }
  VAR_12[VAR_6+7] = 0;

 defragment_out:
  if( VAR_12[VAR_6+7]+VAR_10-VAR_15!=VAR_2->nFree ){
    return FUNC_0(VAR_2);
  }
  FUNC_1( VAR_10>=VAR_15 );
  FUNC_6(&VAR_12[VAR_6+5], VAR_10);
  VAR_12[VAR_6+1] = 0;
  VAR_12[VAR_6+2] = 0;
  FUNC_5(&VAR_12[VAR_15], 0, VAR_10-VAR_15);
  FUNC_1( FUNC_7(VAR_2->pDbPage) );
  return VAR_1;
}

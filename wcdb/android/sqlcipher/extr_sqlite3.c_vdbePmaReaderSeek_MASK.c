
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_15__ {scalar_t__ aMap; int iReadOff; int nBuffer; int * aBuffer; int pFd; int iEof; TYPE_1__* pIncr; } ;
struct TYPE_14__ {TYPE_2__* pSorter; } ;
struct TYPE_13__ {int pFd; int iEof; } ;
struct TYPE_12__ {int pgsz; } ;
struct TYPE_11__ {scalar_t__ bEof; } ;
typedef TYPE_3__ SorterFile ;
typedef TYPE_4__ SortSubtask ;
typedef TYPE_5__ PmaReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(
  SortSubtask *VAR_3,
  PmaReader *VAR_4,
  SorterFile *VAR_5,
  i64 VAR_6
){
  int VAR_7 = VAR_2;

  FUNC_0( VAR_4->pIncr==0 || VAR_4->pIncr->bEof==0 );

  if( FUNC_1(201) ) return VAR_0;
  if( VAR_4->aMap ){
    FUNC_4(VAR_4->pFd, 0, VAR_4->aMap);
    VAR_4->aMap = 0;
  }
  VAR_4->iReadOff = VAR_6;
  VAR_4->iEof = VAR_5->iEof;
  VAR_4->pFd = VAR_5->pFd;

  VAR_7 = FUNC_6(VAR_3, VAR_5, &VAR_4->aMap);
  if( VAR_7==VAR_2 && VAR_4->aMap==0 ){
    int VAR_8 = VAR_3->pSorter->pgsz;
    int VAR_9 = VAR_4->iReadOff % VAR_8;
    if( VAR_4->aBuffer==0 ){
      VAR_4->aBuffer = (u8*)FUNC_2(VAR_8);
      if( VAR_4->aBuffer==0 ) VAR_7 = VAR_1;
      VAR_4->nBuffer = VAR_8;
    }
    if( VAR_7==VAR_2 && VAR_9 ){
      int VAR_10 = VAR_8 - VAR_9;
      if( (VAR_4->iReadOff + VAR_10) > VAR_4->iEof ){
        VAR_10 = (int)(VAR_4->iEof - VAR_4->iReadOff);
      }
      VAR_7 = FUNC_3(
          VAR_4->pFd, &VAR_4->aBuffer[VAR_9], VAR_10, VAR_4->iReadOff
      );
      FUNC_5( VAR_7!=VAR_2 );
    }
  }

  return VAR_7;
}

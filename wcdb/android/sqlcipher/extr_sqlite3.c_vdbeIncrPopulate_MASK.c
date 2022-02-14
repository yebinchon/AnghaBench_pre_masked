
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_21__ {scalar_t__ iStartOff; scalar_t__ bEof; scalar_t__ mxSz; TYPE_6__* pMerger; TYPE_3__* pTask; TYPE_2__* aFile; } ;
struct TYPE_20__ {size_t* aTree; TYPE_3__* pTask; TYPE_5__* aReadr; } ;
struct TYPE_19__ {int nKey; scalar_t__ pFd; int aKey; } ;
struct TYPE_18__ {scalar_t__ iWriteOff; scalar_t__ iBufEnd; } ;
struct TYPE_17__ {TYPE_1__* pSorter; } ;
struct TYPE_16__ {int iEof; int pFd; } ;
struct TYPE_15__ {int pgsz; } ;
typedef TYPE_2__ SorterFile ;
typedef TYPE_3__ SortSubtask ;
typedef TYPE_4__ PmaWriter ;
typedef TYPE_5__ PmaReader ;
typedef TYPE_6__ MergeEngine ;
typedef TYPE_7__ IncrMerger ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (int ,TYPE_4__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_8(IncrMerger *VAR_1){
  int VAR_2 = VAR_0;
  int VAR_3;
  i64 VAR_4 = VAR_1->iStartOff;
  SorterFile *VAR_5 = &VAR_1->aFile[1];
  SortSubtask *VAR_6 = VAR_1->pTask;
  MergeEngine *VAR_7 = VAR_1->pMerger;
  PmaWriter VAR_8;
  FUNC_0( VAR_1->bEof==0 );

  FUNC_7(VAR_6, "enter");

  FUNC_6(VAR_5->pFd, &VAR_8, VAR_6->pSorter->pgsz, VAR_4);
  while( VAR_2==VAR_0 ){
    int VAR_9;
    PmaReader *VAR_10 = &VAR_7->aReadr[ VAR_7->aTree[1] ];
    int VAR_11 = VAR_10->nKey;
    i64 VAR_12 = VAR_8.iWriteOff + VAR_8.iBufEnd;



    if( VAR_10->pFd==0 ) break;
    if( (VAR_12 + VAR_11 + FUNC_1(VAR_11))>(VAR_4 + VAR_1->mxSz) ) break;


    FUNC_4(&VAR_8, VAR_11);
    FUNC_3(&VAR_8, VAR_10->aKey, VAR_11);
    FUNC_0( VAR_1->pMerger->pTask==VAR_6 );
    VAR_2 = FUNC_2(VAR_1->pMerger, &VAR_9);
  }

  VAR_3 = FUNC_5(&VAR_8, &VAR_5->iEof);
  if( VAR_2==VAR_0 ) VAR_2 = VAR_3;
  FUNC_7(VAR_6, "exit");
  return VAR_2;
}

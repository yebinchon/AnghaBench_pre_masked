
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct SrcList_item {int iCursor; int pTab; } ;
typedef int sSum ;
struct TYPE_27__ {TYPE_3__* pAndInfo; TYPE_2__* pOrInfo; } ;
struct TYPE_29__ {int eOperator; int leftCursor; TYPE_4__ u; } ;
typedef TYPE_6__ WhereTerm ;
struct TYPE_30__ {int n; TYPE_5__* a; } ;
typedef TYPE_7__ WhereOrSet ;
struct TYPE_31__ {TYPE_11__* pWC; TYPE_7__* pOrSet; scalar_t__ pOrderBy; TYPE_9__* pNew; TYPE_10__* pWInfo; } ;
typedef TYPE_8__ WhereLoopBuilder ;
struct TYPE_32__ {int iTab; int maskSelf; int nLTerm; int prereq; scalar_t__ nOut; scalar_t__ rRun; TYPE_7__ u; scalar_t__ iSortIdx; scalar_t__ rSetup; int wsFlags; TYPE_6__** aLTerm; } ;
typedef TYPE_9__ WhereLoop ;
struct TYPE_22__ {TYPE_1__* pTabList; } ;
typedef TYPE_10__ WhereInfo ;
struct TYPE_23__ {int nTerm; TYPE_6__* a; int op; struct TYPE_23__* pOuter; int pWInfo; } ;
typedef TYPE_11__ WhereClause ;
struct TYPE_28__ {int prereq; scalar_t__ nOut; scalar_t__ rRun; } ;
struct TYPE_26__ {TYPE_11__ wc; } ;
struct TYPE_25__ {int indexable; TYPE_11__ wc; } ;
struct TYPE_24__ {struct SrcList_item* a; } ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_11__*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (TYPE_8__*,int ,int ) ;
 int FUNC_8 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_9 (TYPE_7__*,int,int ,int ) ;
 int FUNC_10 (TYPE_7__*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_11(
  WhereLoopBuilder *VAR_6,
  Bitmask VAR_7,
  Bitmask VAR_8
){
  WhereInfo *VAR_9 = VAR_6->pWInfo;
  WhereClause *VAR_10;
  WhereLoop *VAR_11;
  WhereTerm *VAR_12, *VAR_13;
  int VAR_14 = VAR_0;
  int VAR_15;
  WhereClause VAR_16;
  WhereLoopBuilder VAR_17;
  WhereOrSet VAR_18, VAR_19;
  struct SrcList_item *VAR_20;

  VAR_10 = VAR_6->pWC;
  VAR_13 = VAR_10->a + VAR_10->nTerm;
  VAR_11 = VAR_6->pNew;
  FUNC_3(&VAR_18, 0, sizeof(VAR_18));
  VAR_20 = VAR_9->pTabList->a + VAR_11->iTab;
  VAR_15 = VAR_20->iCursor;

  for(VAR_12=VAR_10->a; VAR_12<VAR_13 && VAR_14==VAR_0; VAR_12++){
    if( (VAR_12->eOperator & VAR_4)!=0
     && (VAR_12->u.pOrInfo->indexable & VAR_11->maskSelf)!=0
    ){
      WhereClause * const VAR_21 = &VAR_12->u.pOrInfo->wc;
      WhereTerm * const VAR_22 = &VAR_21->a[VAR_21->nTerm];
      WhereTerm *VAR_23;
      int VAR_24 = 1;
      int VAR_25, VAR_26;

      VAR_17 = *VAR_6;
      VAR_17.pOrderBy = 0;
      VAR_17.pOrSet = &VAR_19;

      FUNC_1(0x200, ("Begin processing OR-clause %p\n", VAR_12));
      for(VAR_23=VAR_21->a; VAR_23<VAR_22; VAR_23++){
        if( (VAR_23->eOperator & VAR_3)!=0 ){
          VAR_17.pWC = &VAR_23->u.pAndInfo->wc;
        }else if( VAR_23->leftCursor==VAR_15 ){
          VAR_16.pWInfo = VAR_10->pWInfo;
          VAR_16.pOuter = VAR_10;
          VAR_16.op = VAR_1;
          VAR_16.nTerm = 1;
          VAR_16.a = VAR_23;
          VAR_17.pWC = &VAR_16;
        }else{
          continue;
        }
        VAR_19.n = 0;
        if( FUNC_0(VAR_20->pTab) ){
          VAR_14 = FUNC_7(&VAR_17, VAR_7, VAR_8);
        }else

        {
          VAR_14 = FUNC_6(&VAR_17, VAR_7);
        }
        if( VAR_14==VAR_0 ){
          VAR_14 = FUNC_11(&VAR_17, VAR_7, VAR_8);
        }
        FUNC_2( VAR_14==VAR_0 || VAR_19.n==0 );
        if( VAR_19.n==0 ){
          VAR_18.n = 0;
          break;
        }else if( VAR_24 ){
          FUNC_10(&VAR_18, &VAR_19);
          VAR_24 = 0;
        }else{
          WhereOrSet VAR_27;
          FUNC_10(&VAR_27, &VAR_18);
          VAR_18.n = 0;
          for(VAR_25=0; VAR_25<VAR_27.n; VAR_25++){
            for(VAR_26=0; VAR_26<VAR_19.n; VAR_26++){
              FUNC_9(&VAR_18, VAR_27.a[VAR_25].prereq | VAR_19.a[VAR_26].prereq,
                            FUNC_4(VAR_27.a[VAR_25].rRun, VAR_19.a[VAR_26].rRun),
                            FUNC_4(VAR_27.a[VAR_25].nOut, VAR_19.a[VAR_26].nOut));
            }
          }
        }
      }
      VAR_11->nLTerm = 1;
      VAR_11->aLTerm[0] = VAR_12;
      VAR_11->wsFlags = VAR_2;
      VAR_11->rSetup = 0;
      VAR_11->iSortIdx = 0;
      FUNC_3(&VAR_11->u, 0, sizeof(VAR_11->u));
      for(VAR_25=0; VAR_14==VAR_0 && VAR_25<VAR_18.n; VAR_25++){
        VAR_11->rRun = VAR_18.a[VAR_25].rRun + 1;
        VAR_11->nOut = VAR_18.a[VAR_25].nOut;
        VAR_11->prereq = VAR_18.a[VAR_25].prereq;
        VAR_14 = FUNC_8(VAR_6, VAR_11);
      }
      FUNC_1(0x200, ("End processing OR-clause %p\n", VAR_12));
    }
  }
  return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_24__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_15__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


struct TYPE_42__ {TYPE_24__* pFuncArg; } ;
struct TYPE_41__ {int isCorrelated; scalar_t__ isTabFunc; } ;
struct SrcList_item {char* zName; TYPE_10__* pSelect; TYPE_3__ u1; TYPE_2__ fg; } ;
struct ExprList_item {int pExpr; } ;
struct TYPE_46__ {scalar_t__ mallocFailed; } ;
typedef TYPE_7__ sqlite3 ;
typedef int sNC ;
struct TYPE_47__ {TYPE_24__* pPartition; TYPE_24__* pOrderBy; struct TYPE_47__* pNextWin; } ;
typedef TYPE_8__ Window ;
struct TYPE_44__ {TYPE_12__* pNC; } ;
struct TYPE_48__ {TYPE_11__* pParse; TYPE_5__ u; } ;
typedef TYPE_9__ Walker ;
struct TYPE_45__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_43__ {scalar_t__ nExpr; } ;
struct TYPE_40__ {scalar_t__ nExpr; } ;
struct TYPE_39__ {TYPE_24__* pEList; } ;
struct TYPE_38__ {TYPE_4__* pEList; } ;
struct TYPE_37__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_36__ {int ncFlags; struct TYPE_36__* pNext; TYPE_1__ uNC; TYPE_6__* pSrcList; scalar_t__ nRef; TYPE_10__* pWinSelect; TYPE_11__* pParse; } ;
struct TYPE_35__ {char* zAuthContext; scalar_t__ nErr; TYPE_7__* db; } ;
struct TYPE_34__ {int selFlags; scalar_t__ pOrderBy; struct TYPE_34__* pPrior; TYPE_15__* pNext; TYPE_24__* pEList; TYPE_8__* pWinDefn; TYPE_6__* pSrc; int pWhere; int pHaving; TYPE_13__* pGroupBy; int pLimit; } ;
typedef TYPE_10__ Select ;
typedef TYPE_11__ Parse ;
typedef TYPE_12__ NameContext ;
typedef TYPE_13__ ExprList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_12__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_11__*,TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_12__*,TYPE_10__*,TYPE_13__*,char*) ;
 int FUNC_5 (TYPE_11__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_12__*,TYPE_24__*) ;
 scalar_t__ FUNC_7 (TYPE_12__*,int ) ;
 int FUNC_8 (TYPE_11__*,TYPE_10__*,TYPE_12__*) ;
 int FUNC_9 (TYPE_11__*,TYPE_10__*,TYPE_12__*) ;
 int FUNC_10 (TYPE_11__*,TYPE_15__*) ;

__attribute__((used)) static int FUNC_11(Walker *VAR_16, Select *VAR_17){
  NameContext *VAR_18;
  NameContext VAR_19;
  int VAR_20;
  int VAR_21;
  Parse *VAR_22;
  int VAR_23;
  ExprList *VAR_24;
  Select *VAR_25;
  sqlite3 *VAR_26;


  FUNC_1( VAR_17!=0 );
  if( VAR_17->selFlags & VAR_13 ){
    return VAR_15;
  }
  VAR_18 = VAR_16->u.pNC;
  VAR_22 = VAR_16->pParse;
  VAR_26 = VAR_22->db;
  if( (VAR_17->selFlags & VAR_11)==0 ){
    FUNC_9(VAR_22, VAR_17, VAR_18);
    return (VAR_22->nErr || VAR_26->mallocFailed) ? VAR_14 : VAR_15;
  }

  VAR_20 = VAR_17->pPrior!=0;
  VAR_21 = 0;
  VAR_25 = VAR_17;
  while( VAR_17 ){
    FUNC_1( (VAR_17->selFlags & VAR_11)!=0 );
    FUNC_1( (VAR_17->selFlags & VAR_13)==0 );
    VAR_17->selFlags |= VAR_13;




    FUNC_2(&VAR_19, 0, sizeof(VAR_19));
    VAR_19.pParse = VAR_22;
    VAR_19.pWinSelect = VAR_17;
    if( FUNC_7(&VAR_19, VAR_17->pLimit) ){
      return VAR_14;
    }







    if( VAR_17->selFlags & VAR_10 ){
      Select *VAR_27 = VAR_17->pSrc->a[0].pSelect;
      FUNC_1( VAR_17->pSrc->nSrc==1 && VAR_17->pOrderBy );
      FUNC_1( VAR_27->pPrior && VAR_27->pOrderBy==0 );
      VAR_27->pOrderBy = VAR_17->pOrderBy;
      VAR_17->pOrderBy = 0;
    }



    for(VAR_23=0; VAR_23<VAR_17->pSrc->nSrc; VAR_23++){
      struct SrcList_item *VAR_28 = &VAR_17->pSrc->a[VAR_23];
      if( VAR_28->pSelect ){
        NameContext *VAR_29;
        int VAR_30 = 0;
        const char *VAR_31 = VAR_22->zAuthContext;






        for(VAR_29=VAR_18; VAR_29; VAR_29=VAR_29->pNext) VAR_30 += VAR_29->nRef;

        if( VAR_28->zName ) VAR_22->zAuthContext = VAR_28->zName;
        FUNC_8(VAR_22, VAR_28->pSelect, VAR_18);
        VAR_22->zAuthContext = VAR_31;
        if( VAR_22->nErr || VAR_26->mallocFailed ) return VAR_14;

        for(VAR_29=VAR_18; VAR_29; VAR_29=VAR_29->pNext) VAR_30 -= VAR_29->nRef;
        FUNC_1( VAR_28->fg.isCorrelated==0 && VAR_30<=0 );
        VAR_28->fg.isCorrelated = (VAR_30!=0);
      }
    }




    VAR_19.ncFlags = VAR_2|VAR_3;
    VAR_19.pSrcList = VAR_17->pSrc;
    VAR_19.pNext = VAR_18;


    if( FUNC_6(&VAR_19, VAR_17->pEList) ) return VAR_14;
    VAR_19.ncFlags &= ~VAR_3;




    FUNC_1( (VAR_17->selFlags & VAR_9)==0 );
    VAR_24 = VAR_17->pGroupBy;
    if( VAR_24 || (VAR_19.ncFlags & VAR_4)!=0 ){
      FUNC_1( VAR_5==VAR_12 );
      VAR_17->selFlags |= VAR_9 | (VAR_19.ncFlags&VAR_5);
    }else{
      VAR_19.ncFlags &= ~VAR_2;
    }



    if( VAR_17->pHaving && !VAR_24 ){
      FUNC_5(VAR_22, "a GROUP BY clause is required before HAVING");
      return VAR_14;
    }
    FUNC_1( (VAR_19.ncFlags & (VAR_6|VAR_8))==0 );
    VAR_19.uNC.pEList = VAR_17->pEList;
    VAR_19.ncFlags |= VAR_7;
    if( FUNC_7(&VAR_19, VAR_17->pHaving) ) return VAR_14;
    if( FUNC_7(&VAR_19, VAR_17->pWhere) ) return VAR_14;


    for(VAR_23=0; VAR_23<VAR_17->pSrc->nSrc; VAR_23++){
      struct SrcList_item *VAR_32 = &VAR_17->pSrc->a[VAR_23];
      if( VAR_32->fg.isTabFunc
       && FUNC_6(&VAR_19, VAR_32->u1.pFuncArg)
      ){
        return VAR_14;
      }
    }




    VAR_19.pNext = 0;
    VAR_19.ncFlags |= VAR_2|VAR_3;






    if( VAR_17->selFlags & VAR_10 ){
      Select *VAR_33 = VAR_17->pSrc->a[0].pSelect;
      VAR_17->pOrderBy = VAR_33->pOrderBy;
      VAR_33->pOrderBy = 0;
    }
    if( VAR_20<=VAR_21
     && FUNC_4(&VAR_19, VAR_17, VAR_17->pOrderBy, "ORDER")
    ){
      return VAR_14;
    }
    if( VAR_26->mallocFailed ){
      return VAR_14;
    }
    VAR_19.ncFlags &= ~VAR_3;




    if( VAR_24 ){
      struct ExprList_item *VAR_34;

      if( FUNC_4(&VAR_19, VAR_17, VAR_24, "GROUP") || VAR_26->mallocFailed ){
        return VAR_14;
      }
      for(VAR_23=0, VAR_34=VAR_24->a; VAR_23<VAR_24->nExpr; VAR_23++, VAR_34++){
        if( FUNC_0(VAR_34->pExpr, VAR_0) ){
          FUNC_5(VAR_22, "aggregate functions are not allowed in "
              "the GROUP BY clause");
          return VAR_14;
        }
      }
    }

    if( VAR_1 ){
      Window *VAR_35;
      for(VAR_35=VAR_17->pWinDefn; VAR_35; VAR_35=VAR_35->pNextWin){
        if( FUNC_6(&VAR_19, VAR_35->pOrderBy)
         || FUNC_6(&VAR_19, VAR_35->pPartition)
        ){
          return VAR_14;
        }
      }
    }



    if( VAR_17->pNext && VAR_17->pEList->nExpr!=VAR_17->pNext->pEList->nExpr ){
      FUNC_10(VAR_22, VAR_17->pNext);
      return VAR_14;
    }



    VAR_17 = VAR_17->pPrior;
    VAR_21++;
  }




  if( VAR_20 && FUNC_3(VAR_22, VAR_25) ){
    return VAR_14;
  }

  return VAR_15;
}

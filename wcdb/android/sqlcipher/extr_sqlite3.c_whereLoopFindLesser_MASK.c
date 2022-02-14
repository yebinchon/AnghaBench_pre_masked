
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iTab; scalar_t__ iSortIdx; scalar_t__ rSetup; int wsFlags; scalar_t__ nSkip; int prereq; scalar_t__ rRun; scalar_t__ nOut; struct TYPE_5__* pNextLoop; } ;
typedef TYPE_1__ WhereLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static WhereLoop **FUNC_1(
  WhereLoop **VAR_3,
  const WhereLoop *VAR_4
){
  WhereLoop *VAR_5;
  for(VAR_5=(*VAR_3); VAR_5; VAR_3=&VAR_5->pNextLoop, VAR_5=*VAR_3){
    if( VAR_5->iTab!=VAR_4->iTab || VAR_5->iSortIdx!=VAR_4->iSortIdx ){



      continue;
    }



    FUNC_0( VAR_5->rSetup==0 || VAR_4->rSetup==0
                 || VAR_5->rSetup==VAR_4->rSetup );




    FUNC_0( VAR_5->rSetup>=VAR_4->rSetup );




    if( (VAR_5->wsFlags & VAR_0)!=0
     && (VAR_4->nSkip)==0
     && (VAR_4->wsFlags & VAR_2)!=0
     && (VAR_4->wsFlags & VAR_1)!=0
     && (VAR_5->prereq & VAR_4->prereq)==VAR_4->prereq
    ){
      break;
    }






    if( (VAR_5->prereq & VAR_4->prereq)==VAR_5->prereq
     && VAR_5->rSetup<=VAR_4->rSetup
     && VAR_5->rRun<=VAR_4->rRun
     && VAR_5->nOut<=VAR_4->nOut
    ){
      return 0;
    }






    if( (VAR_5->prereq & VAR_4->prereq)==VAR_4->prereq
     && VAR_5->rRun>=VAR_4->rRun
     && VAR_5->nOut>=VAR_4->nOut
    ){
      FUNC_0( VAR_5->rSetup>=VAR_4->rSetup );
      break;
    }
  }
  return VAR_3;
}

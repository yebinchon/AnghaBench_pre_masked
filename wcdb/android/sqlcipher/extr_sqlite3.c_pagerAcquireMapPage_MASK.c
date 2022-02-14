
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {int nExtra; int pageSize; int nMmapOut; int fd; TYPE_1__* pMmapFreelist; } ;
struct TYPE_5__ {void* pExtra; scalar_t__ flags; int nRef; scalar_t__ pPage; int pgno; void* pData; TYPE_2__* pPager; struct TYPE_5__* pDirty; } ;
typedef int Pgno ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,void*) ;

__attribute__((used)) static int FUNC_4(
  Pager *VAR_3,
  Pgno VAR_4,
  void *VAR_5,
  PgHdr **VAR_6
){
  PgHdr *VAR_7;

  if( VAR_3->pMmapFreelist ){
    *VAR_6 = VAR_7 = VAR_3->pMmapFreelist;
    VAR_3->pMmapFreelist = VAR_7->pDirty;
    VAR_7->pDirty = 0;
    FUNC_0( VAR_3->nExtra>=8 );
    FUNC_1(VAR_7->pExtra, 0, 8);
  }else{
    *VAR_6 = VAR_7 = (PgHdr *)FUNC_2(sizeof(PgHdr) + VAR_3->nExtra);
    if( VAR_7==0 ){
      FUNC_3(VAR_3->fd, (i64)(VAR_4-1) * VAR_3->pageSize, VAR_5);
      return VAR_1;
    }
    VAR_7->pExtra = (void *)&VAR_7[1];
    VAR_7->flags = VAR_0;
    VAR_7->nRef = 1;
    VAR_7->pPager = VAR_3;
  }

  FUNC_0( VAR_7->pExtra==(void *)&VAR_7[1] );
  FUNC_0( VAR_7->pPage==0 );
  FUNC_0( VAR_7->flags==VAR_0 );
  FUNC_0( VAR_7->pPager==VAR_3 );
  FUNC_0( VAR_7->nRef==1 );

  VAR_7->pgno = VAR_4;
  VAR_7->pData = VAR_5;
  VAR_3->nMmapOut++;

  return VAR_2;
}

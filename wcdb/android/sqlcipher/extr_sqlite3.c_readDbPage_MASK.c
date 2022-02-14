
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int i64 ;
struct TYPE_9__ {scalar_t__ eState; int nRead; int dbFileVers; scalar_t__ pageSize; int fd; int pWal; } ;
struct TYPE_8__ {int pgno; scalar_t__ pData; TYPE_2__* pPager; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ,int,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (int ,int,scalar_t__*) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(PgHdr *VAR_6){
  Pager *VAR_7 = VAR_6->pPager;
  int VAR_8 = VAR_4;


  u32 VAR_9 = 0;

  FUNC_5( VAR_7->eState>=VAR_1 && !VAR_0 );
  FUNC_5( FUNC_6(VAR_7->fd) );

  if( FUNC_9(VAR_7) ){
    VAR_8 = FUNC_12(VAR_7->pWal, VAR_6->pgno, &VAR_9);
    if( VAR_8 ) return VAR_8;
  }
  if( VAR_9 ){
    VAR_8 = FUNC_13(VAR_7->pWal, VAR_9,VAR_7->pageSize,VAR_6->pData);
  }else

  {
    i64 VAR_10 = (VAR_6->pgno-1)*(i64)VAR_7->pageSize;
    VAR_8 = FUNC_11(VAR_7->fd, VAR_6->pData, VAR_7->pageSize, VAR_10);
    if( VAR_8==VAR_2 ){
      VAR_8 = VAR_4;
    }
  }

  if( VAR_6->pgno==1 ){
    if( VAR_8 ){
      FUNC_8(VAR_7->dbFileVers, 0xff, sizeof(VAR_7->dbFileVers));
    }else{
      u8 *VAR_11 = &((u8*)VAR_6->pData)[24];
      FUNC_7(&VAR_7->dbFileVers, VAR_11, sizeof(VAR_7->dbFileVers));
    }
  }
  FUNC_0(VAR_7, VAR_6->pData, VAR_6->pgno, 3, VAR_8 = VAR_3);

  FUNC_4(VAR_5);
  FUNC_4(VAR_7->nRead);
  FUNC_1(("PGIN %p %d\n", VAR_7, VAR_6->pgno));
  FUNC_3(("FETCH %d page %d hash(%08x)\n",
               FUNC_2(VAR_7), VAR_6->pgno, FUNC_10(VAR_6)));

  return VAR_8;
}

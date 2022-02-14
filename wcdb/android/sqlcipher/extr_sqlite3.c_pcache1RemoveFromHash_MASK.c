
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int nHash; int nPage; TYPE_2__** apHash; TYPE_1__* pGroup; } ;
struct TYPE_7__ {unsigned int iKey; struct TYPE_7__* pNext; TYPE_3__* pCache; } ;
struct TYPE_6__ {int mutex; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PCache1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(PgHdr1 *VAR_0, int VAR_1){
  unsigned int VAR_2;
  PCache1 *VAR_3 = VAR_0->pCache;
  PgHdr1 **VAR_4;

  FUNC_0( FUNC_2(VAR_3->pGroup->mutex) );
  VAR_2 = VAR_0->iKey % VAR_3->nHash;
  for(VAR_4=&VAR_3->apHash[VAR_2]; (*VAR_4)!=VAR_0; VAR_4=&(*VAR_4)->pNext);
  *VAR_4 = (*VAR_4)->pNext;

  VAR_3->nPage--;
  if( VAR_1 ) FUNC_1(VAR_0);
}

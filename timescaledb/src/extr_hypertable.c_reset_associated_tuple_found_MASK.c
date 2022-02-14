
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_6__* tuple; int scanrel; int desc; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_9__ {int t_self; } ;
struct TYPE_8__ {int associated_schema_name; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_2__ FormData_hypertable ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_8(TupleInfo *VAR_2, void *VAR_3)
{
 HeapTuple VAR_4;
 FormData_hypertable VAR_5;
 CatalogSecurityContext VAR_6;

 FUNC_1(&VAR_5, VAR_2->tuple, VAR_2->desc);

 FUNC_3(&VAR_5.associated_schema_name, VAR_0);

 VAR_4 = FUNC_2(&VAR_5, VAR_2->desc);
 FUNC_4(FUNC_5(), &VAR_6);
 FUNC_7(VAR_2->scanrel, &VAR_2->tuple->t_self, VAR_4);
 FUNC_6(&VAR_6);

 FUNC_0(VAR_4);

 return VAR_1;
}

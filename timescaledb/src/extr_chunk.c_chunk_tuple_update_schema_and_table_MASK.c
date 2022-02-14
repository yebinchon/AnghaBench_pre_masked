
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
struct TYPE_8__ {int table_name; int schema_name; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_2__ FormData_chunk ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_8(TupleInfo *VAR_1, void *VAR_2)
{
 FormData_chunk VAR_3;
 FormData_chunk *VAR_4 = VAR_2;
 CatalogSecurityContext VAR_5;
 HeapTuple VAR_6;

 FUNC_0(&VAR_3, VAR_1->tuple, VAR_1->desc);

 FUNC_3(&VAR_3.schema_name, &VAR_4->schema_name);
 FUNC_3(&VAR_3.table_name, &VAR_4->table_name);

 VAR_6 = FUNC_1(&VAR_3, VAR_1->desc);

 FUNC_4(FUNC_5(), &VAR_5);
 FUNC_7(VAR_1->scanrel, &VAR_1->tuple->t_self, VAR_6);
 FUNC_6(&VAR_5);
 FUNC_2(VAR_6);
 return VAR_0;
}


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
struct TYPE_8__ {int chunk_sizing_func_schema; int associated_schema_name; int schema_name; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_2__ FormData_hypertable ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_6(TupleInfo *VAR_1, void *VAR_2)
{
 const char **VAR_3 = (const char **) VAR_2;
 const char *VAR_4 = VAR_3[0];
 const char *VAR_5 = VAR_3[1];
 bool VAR_6 = 0;
 FormData_hypertable VAR_7;

 FUNC_1(&VAR_7, VAR_1->tuple, VAR_1->desc);





 if (FUNC_3(&VAR_7.schema_name, VAR_4) == 0)
 {
  FUNC_4(&VAR_7.schema_name, VAR_5);
  VAR_6 = 1;
 }
 if (FUNC_3(&VAR_7.associated_schema_name, VAR_4) == 0)
 {
  FUNC_4(&VAR_7.associated_schema_name, VAR_5);
  VAR_6 = 1;
 }
 if (FUNC_3(&VAR_7.chunk_sizing_func_schema, VAR_4) == 0)
 {
  FUNC_4(&VAR_7.chunk_sizing_func_schema, VAR_5);
  VAR_6 = 1;
 }


 if (VAR_6)
 {
  HeapTuple VAR_8 = FUNC_2(&VAR_7, VAR_1->desc);
  FUNC_5(VAR_1->scanrel, &VAR_1->tuple->t_self, VAR_8);
  FUNC_0(VAR_8);
 }


 return VAR_0;
}

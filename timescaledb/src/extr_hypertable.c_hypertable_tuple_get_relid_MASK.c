
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_6__ {int table_name; int schema_name; } ;
typedef int ScanTupleResult ;
typedef int Oid ;
typedef TYPE_2__ FormData_hypertable ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_5(TupleInfo *VAR_1, void *VAR_2)
{
 Oid *VAR_3 = VAR_2;
 FormData_hypertable VAR_4;
 Oid VAR_5;

 FUNC_4(&VAR_4, VAR_1->tuple, VAR_1->desc);

 VAR_5 = FUNC_2(FUNC_0(VAR_4.schema_name), 1);

 if (FUNC_1(VAR_5))
  *VAR_3 = FUNC_3(FUNC_0(VAR_4.table_name), VAR_5);

 return VAR_0;
}

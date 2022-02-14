
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_8__ {int ht_oids; int * table_name; int * schema_name; } ;
struct TYPE_7__ {int table_name; int schema_name; } ;
typedef int ScanTupleResult ;
typedef int Oid ;
typedef TYPE_2__ FormData_hypertable ;
typedef TYPE_3__ AccumHypertable ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static ScanTupleResult
FUNC_9(TupleInfo *VAR_2, void *VAR_3)
{
 Oid VAR_4;
 FormData_hypertable VAR_5;
 AccumHypertable *VAR_6 = VAR_3;
 Oid VAR_7;

 FUNC_7(&VAR_5, VAR_2->tuple, VAR_2->desc);
 VAR_7 = FUNC_5(FUNC_3(VAR_5.schema_name), 1);

 if (!FUNC_4(VAR_7))
  return VAR_0;

 VAR_4 = FUNC_6(FUNC_3(VAR_5.table_name), VAR_7);
 if (!FUNC_4(VAR_4))
  return VAR_0;

 if ((VAR_6->schema_name == ((void*)0) ||
   FUNC_0(FUNC_1(VAR_1,
            FUNC_2(VAR_6->schema_name),
            FUNC_2(&VAR_5.schema_name)))) &&
  (VAR_6->table_name == ((void*)0) ||
   FUNC_0(FUNC_1(VAR_1,
            FUNC_2(VAR_6->table_name),
            FUNC_2(&VAR_5.table_name)))))
  VAR_6->ht_oids = FUNC_8(VAR_6->ht_oids, VAR_4);

 return VAR_0;
}

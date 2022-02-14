
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_8__ {int num_filtered; int userid; int hcache; } ;
typedef TYPE_2__ TablespaceScanInfo ;
struct TYPE_10__ {int hypertable_id; } ;
struct TYPE_9__ {int main_table_relid; } ;
typedef int ScanFilterResult ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ FormData_tablespace ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static ScanFilterResult
FUNC_4(TupleInfo *VAR_2, void *VAR_3)
{
 TablespaceScanInfo *VAR_4 = VAR_3;
 FormData_tablespace *VAR_5 = (FormData_tablespace *) FUNC_1(VAR_2->tuple);
 Hypertable *VAR_6;

 VAR_6 = FUNC_2(VAR_4->hcache, VAR_5->hypertable_id);

 FUNC_0(((void*)0) != VAR_6);

 if (FUNC_3(VAR_6->main_table_relid, VAR_4->userid))
  return VAR_1;

 VAR_4->num_filtered++;

 return VAR_0;
}

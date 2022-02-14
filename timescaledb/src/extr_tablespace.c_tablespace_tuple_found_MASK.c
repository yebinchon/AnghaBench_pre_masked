
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int Tablespaces ;
struct TYPE_6__ {int tablespace_name; } ;
typedef int ScanTupleResult ;
typedef int Oid ;
typedef TYPE_2__ FormData_tablespace ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_4(TupleInfo *VAR_1, void *VAR_2)
{
 Tablespaces *VAR_3 = VAR_2;
 FormData_tablespace *VAR_4 = (FormData_tablespace *) FUNC_0(VAR_1->tuple);
 Oid VAR_5 = FUNC_2(FUNC_1(VAR_4->tablespace_name), 1);

 if (((void*)0) != VAR_3)
  FUNC_3(VAR_3, VAR_4, VAR_5);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int argtype ;
struct TYPE_3__ {int chunk_sizing_func_name; int chunk_sizing_func_schema; } ;
typedef int Oid ;
typedef TYPE_1__ FormData_hypertable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static Oid
FUNC_4(FormData_hypertable *VAR_2)
{
 Oid VAR_3[] = { VAR_0, VAR_1, VAR_1 };
 return FUNC_0(FUNC_2(FUNC_3(FUNC_1(VAR_2->chunk_sizing_func_schema)),
          FUNC_3(FUNC_1(VAR_2->chunk_sizing_func_name))),
        sizeof(VAR_3) / sizeof(VAR_3[0]),
        VAR_3,
        0);
}

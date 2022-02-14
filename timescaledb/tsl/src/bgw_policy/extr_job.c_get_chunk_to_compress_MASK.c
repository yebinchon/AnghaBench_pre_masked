
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_8__ {int id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_9__ {int space; } ;
typedef int StrategyNumber ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef int FormData_ts_interval ;
typedef TYPE_3__ Dimension ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int32
FUNC_5(Hypertable *VAR_2, FormData_ts_interval *VAR_3)
{
 Dimension *VAR_4 = FUNC_0(VAR_2->space, 0);
 StrategyNumber VAR_5 = VAR_0;
 Oid VAR_6 = FUNC_1(VAR_4);
 int64 VAR_7 = FUNC_4(FUNC_3(VAR_3, VAR_4),
            VAR_6);
 return FUNC_2(VAR_4->fd.id,
               VAR_1,
               -1,
               VAR_5,
               VAR_7);
}

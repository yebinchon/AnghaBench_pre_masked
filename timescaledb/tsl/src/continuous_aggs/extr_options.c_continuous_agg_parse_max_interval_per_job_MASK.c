
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {int parsed; int is_default; } ;
typedef TYPE_1__ WithClauseResult ;
typedef int Oid ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int ,char*) ;

int64
FUNC_6(Oid VAR_3, WithClauseResult *VAR_4,
            int64 VAR_5)
{
 char *VAR_6;
 int64 VAR_7;

 FUNC_0(!VAR_4[VAR_0].is_default);

 VAR_6 = FUNC_1(VAR_4[VAR_0].parsed);

 VAR_7 = FUNC_5(VAR_6, VAR_3, "max_interval_per_job");

 if (VAR_7 < VAR_5)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("parameter timescaledb.max_interval_per_job must be at least the size "
      "of the time_bucket width")));
 return VAR_7;
}

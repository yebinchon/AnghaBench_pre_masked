
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int row; int events; int args; int funcname; int relation; int trigname; int timing; int type; } ;
struct TYPE_5__ {int objectId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int Hypertable ;
typedef TYPE_2__ CreateTrigStmt ;
typedef int Cache ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int ) ;
 int * FUNC_14 () ;
 TYPE_1__ FUNC_15 (int *,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_16(Oid VAR_10, char *VAR_11)
{
 ObjectAddress VAR_12;
 char *VAR_13 = FUNC_6(VAR_10);
 Oid VAR_14 = FUNC_7(VAR_10);
 char *VAR_15 = FUNC_5(VAR_14);
 Cache *VAR_16;
 Hypertable *VAR_17;

 CreateTrigStmt VAR_18 = {
  .type = VAR_9,
  .row = 1,
  .timing = VAR_5,
  .trigname = VAR_0,
  .relation = FUNC_10(VAR_15, VAR_13, -1),
  .funcname =
   FUNC_9(FUNC_11(VAR_4), FUNC_11(VAR_1)),
  .args = FUNC_8(FUNC_11(VAR_11)),
  .events = VAR_7 | VAR_8 | VAR_6,
 };
 if (FUNC_1(VAR_10, VAR_0))
  return;
 VAR_16 = FUNC_14();
 VAR_17 = FUNC_13(VAR_16, VAR_10);
 VAR_12 = FUNC_15(VAR_17, &VAR_18, ((void*)0));
 if (!FUNC_0(VAR_12.objectId))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("could not create continuous aggregate trigger")));
 FUNC_12(VAR_16);
}

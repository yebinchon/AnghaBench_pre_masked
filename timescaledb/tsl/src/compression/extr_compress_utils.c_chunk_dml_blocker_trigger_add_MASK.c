
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
typedef TYPE_2__ CreateTrigStmt ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (TYPE_2__*,int *,int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(Oid VAR_9)
{
 ObjectAddress VAR_10;
 char *VAR_11 = FUNC_4(VAR_9);
 Oid VAR_12 = FUNC_5(VAR_9);
 char *VAR_13 = FUNC_3(VAR_12);


 CreateTrigStmt VAR_14 = {
  .type = VAR_8,
  .row = 1,
  .timing = VAR_6,
  .trigname = VAR_0,
  .relation = FUNC_7(VAR_13, VAR_11, -1),
  .funcname =
   FUNC_6(FUNC_8(VAR_3), FUNC_8(VAR_1)),
  .args = VAR_5,
  .events = VAR_7,
 };
 VAR_10 = FUNC_0(&VAR_14, ((void*)0), VAR_9, VAR_4, VAR_4, VAR_4, 0);

 if (!FUNC_1(VAR_10.objectId))
  FUNC_2(VAR_2, "could not create dml blocker trigger");

 return;
}

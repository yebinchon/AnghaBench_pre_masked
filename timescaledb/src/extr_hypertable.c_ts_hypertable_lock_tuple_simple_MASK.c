
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HTSU_Result ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

bool
FUNC_7(Oid VAR_2)
{
 HTSU_Result VAR_3 = FUNC_6(VAR_2);

 switch (VAR_3)
 {
  case 130:






   return 1;
  case 131:

   return 1;
  case 129:
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_4("hypertable \"%s\" has already been updated by another transaction",
       FUNC_5(VAR_2)),
      FUNC_3("Retry the operation again")));
  case 133:
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_4("hypertable \"%s\" is being updated by another transaction",
       FUNC_5(VAR_2)),
      FUNC_3("Retry the operation again")));
  case 128:

   return 0;
  case 132:
   FUNC_0(VAR_1, "attempted to lock invisible tuple");
   return 0;
  default:
   FUNC_0(VAR_1, "unexpected tuple lock status");
   return 0;
 }
}

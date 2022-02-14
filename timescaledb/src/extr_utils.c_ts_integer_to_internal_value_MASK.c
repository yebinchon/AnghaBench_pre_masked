
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static Datum
FUNC_5(int64 VAR_1, Oid VAR_2)
{
 switch (VAR_2)
 {
  case 130:
   return FUNC_0(VAR_1);
  case 129:
   return FUNC_1(VAR_1);
  case 128:
   return FUNC_2(VAR_1);
  default:
   FUNC_3(VAR_0, "unknown time type OID %d in ts_internal_to_time_value", VAR_2);
   FUNC_4();
 }
}

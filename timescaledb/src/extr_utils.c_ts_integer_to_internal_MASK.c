
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;



 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int64
FUNC_4(Datum VAR_1, Oid VAR_2)
{
 switch (VAR_2)
 {
  case 128:
   return FUNC_2(VAR_1);
  case 129:
   return (int64) FUNC_1(VAR_1);
  case 130:
   return (int64) FUNC_0(VAR_1);
  default:
   FUNC_3(VAR_0, "unknown interval type OID %d", VAR_2);
   return -1;
 }
}

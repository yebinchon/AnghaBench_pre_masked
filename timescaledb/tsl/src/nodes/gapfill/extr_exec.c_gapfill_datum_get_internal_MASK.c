
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
 int VAR_1 ;





 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

int64
FUNC_8(Datum VAR_2, Oid VAR_3)
{
 switch (VAR_3)
 {
  case 132:
   return FUNC_0(VAR_2);
  case 133:
  case 131:
   return FUNC_1(VAR_2);
  case 129:
  case 128:
  case 130:
   return FUNC_2(VAR_2);
  default:





   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("unsupported datatype for time_bucket_gapfill: %s",
       FUNC_6(VAR_3))));
   FUNC_7();
   break;
 }
}

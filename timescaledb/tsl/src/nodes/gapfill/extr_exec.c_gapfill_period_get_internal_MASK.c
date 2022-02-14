
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;


 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static inline int64
FUNC_11(Oid VAR_4, Oid VAR_5, Datum VAR_6)
{
 switch (VAR_4)
 {
  case 133:
   FUNC_0(VAR_2 == VAR_5);
   return FUNC_9(FUNC_4(VAR_6)) / VAR_3;
   break;
  case 129:
  case 128:
   FUNC_0(VAR_2 == VAR_5);
   return FUNC_9(FUNC_4(VAR_6));
   break;
  case 132:
   FUNC_0(132 == VAR_5);
   return FUNC_1(VAR_6);
  case 131:
   FUNC_0(131 == VAR_5);
   return FUNC_2(VAR_6);
  case 130:
   FUNC_0(130 == VAR_5);
   return FUNC_3(VAR_6);
  default:





   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("unsupported datatype for time_bucket_gapfill: %s",
       FUNC_8(VAR_4))));
   FUNC_10();
   break;
 }
}

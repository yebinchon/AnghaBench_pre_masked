
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static Datum
FUNC_14(int64 VAR_6, Oid VAR_7, Oid VAR_8)
{
 Datum VAR_9;
 int64 VAR_10;

 FUNC_0(FUNC_4(VAR_7));

 FUNC_13(VAR_8, VAR_7);
 VAR_9 = FUNC_8(VAR_8);

 switch (VAR_7)
 {
  case 130:
   VAR_10 = FUNC_1(VAR_9) - VAR_6;
   if (VAR_10 < VAR_3 || VAR_10 > VAR_2)
    FUNC_9(VAR_1,
      (FUNC_10(VAR_0), FUNC_11("ts_interval overflow")));
   return FUNC_5(VAR_10);
  case 129:
   VAR_10 = FUNC_2(VAR_9) - VAR_6;
   if (VAR_10 < VAR_5 || VAR_10 > VAR_4)
    FUNC_9(VAR_1,
      (FUNC_10(VAR_0), FUNC_11("ts_interval overflow")));
   return FUNC_6(VAR_10);
  case 128:
   VAR_10 = FUNC_3(VAR_9) - VAR_6;
   if (VAR_10 > FUNC_3(VAR_9))
    FUNC_9(VAR_1,
      (FUNC_10(VAR_0), FUNC_11("ts_interval overflow")));
   return FUNC_7(VAR_10);
  default:
   FUNC_12();
 }
}

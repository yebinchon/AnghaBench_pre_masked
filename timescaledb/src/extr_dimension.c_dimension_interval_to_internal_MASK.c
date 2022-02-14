
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int64
FUNC_13(const char *VAR_7, Oid VAR_8, Oid VAR_9, Datum VAR_10,
          bool VAR_11)
{
 int64 VAR_12;

 if (!FUNC_5(VAR_8))
  FUNC_8(VAR_5,
    (FUNC_9(VAR_4),
     FUNC_10("invalid dimension type: \"%s\" must be an integer, date or timestamp",
      VAR_7)));

 if (!FUNC_7(VAR_9))
 {
  if (FUNC_4(VAR_8))
   FUNC_8(VAR_5,
     (FUNC_9(VAR_3),
      FUNC_10("integer dimensions require an explicit interval")));

  VAR_10 = FUNC_6(VAR_11 ? VAR_2 :
              VAR_1);
  VAR_9 = 129;
 }

 switch (VAR_9)
 {
  case 131:
   VAR_12 = FUNC_11(VAR_8, FUNC_0(VAR_10));
   break;
  case 130:
   VAR_12 = FUNC_11(VAR_8, FUNC_1(VAR_10));
   break;
  case 129:
   VAR_12 = FUNC_11(VAR_8, FUNC_2(VAR_10));
   break;
  case 128:
   if (FUNC_4(VAR_8))
    FUNC_8(VAR_5,
      (FUNC_9(VAR_3),
       FUNC_10(
        "invalid interval: must be an integer type for integer dimensions")));

   VAR_12 = FUNC_12(FUNC_3(VAR_10));
   break;
  default:
   FUNC_8(VAR_5,
     (FUNC_9(VAR_3),
      FUNC_10("invalid interval: must be an interval or integer type")));
 }

 if (VAR_8 == VAR_0 && (VAR_12 <= 0 || VAR_12 % VAR_6 != 0))
  FUNC_8(VAR_5,
    (FUNC_9(VAR_3),
     FUNC_10("invalid interval: must be multiples of one day")));

 return VAR_12;
}

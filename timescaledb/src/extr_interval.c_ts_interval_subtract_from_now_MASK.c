
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer_interval; int time_interval; scalar_t__ is_time_interval; } ;
typedef int Oid ;
typedef TYPE_1__ FormData_ts_interval ;
typedef int Dimension ;
typedef int Datum ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_2 ;


 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int,int) ;

Datum
FUNC_14(FormData_ts_interval *VAR_7, Dimension *VAR_8)
{
 Oid VAR_9;
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(VAR_8 != ((void*)0));

 VAR_9 = FUNC_11(VAR_8);

 if (VAR_7->is_time_interval)
 {
  Datum VAR_10 = FUNC_5(FUNC_3());

  switch (VAR_9)
  {
   case 129:
    VAR_10 = FUNC_1(VAR_6, VAR_10);
    VAR_10 = FUNC_2(VAR_4,
            VAR_10,
            FUNC_4(&VAR_7->time_interval));

    return VAR_10;
   case 128:
    VAR_10 = FUNC_2(VAR_5,
            VAR_10,
            FUNC_4(&VAR_7->time_interval));

    return VAR_10;
   case 130:
    VAR_10 = FUNC_1(VAR_6, VAR_10);
    VAR_10 = FUNC_2(VAR_4,
            VAR_10,
            FUNC_4(&VAR_7->time_interval));
    VAR_10 = FUNC_1(VAR_3, VAR_10);

    return VAR_10;
   default:
    FUNC_6(VAR_1,
      (FUNC_7(VAR_0),
       FUNC_8("unknown time type OID %d", VAR_9)));
  }
 }
 else
 {
  Oid VAR_11 = FUNC_9(VAR_8);
  FUNC_13(VAR_11, VAR_9);

  if (VAR_2 == VAR_11)
   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_8("integer_now function must be set")));

  return FUNC_12(VAR_7->integer_interval, VAR_9, VAR_11);
 }

 FUNC_10();
 return 0;
}

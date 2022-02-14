
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int integer_now_func_schema; int integer_now_func; } ;
struct TYPE_13__ {TYPE_1__ fd; } ;
struct TYPE_12__ {int is_time_interval; int integer_interval; int time_interval; } ;
struct TYPE_11__ {int space; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef TYPE_3__ FormData_ts_interval ;
typedef TYPE_4__ Dimension ;
typedef int Datum ;
typedef int Cache ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;




 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (int) ;
 TYPE_4__* FUNC_10 (int ,int ) ;
 TYPE_3__* FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int const,int,char*) ;
 TYPE_2__* FUNC_16 (int *,int) ;
 int * FUNC_17 () ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (int ,int) ;

FormData_ts_interval *
FUNC_20(Oid VAR_3, Datum VAR_4, Oid VAR_5, char *VAR_6,
         char *VAR_7)
{
 Hypertable *VAR_8;
 Cache *VAR_9;
 FormData_ts_interval *VAR_10 = FUNC_11(sizeof(FormData_ts_interval));
 Oid VAR_11;
 Dimension *VAR_12;

 FUNC_18(VAR_3, FUNC_1());

 VAR_9 = FUNC_17();
 VAR_8 = FUNC_16(VAR_9, VAR_3);

 if (VAR_8 == ((void*)0))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_8("could not add drop_chunks policy because \"%s\" is not a hypertable",
      FUNC_9(VAR_3))));

 VAR_12 = FUNC_10(VAR_8->space, 0);

 if (((void*)0) == VAR_12)
  FUNC_4(VAR_2, "internal error: no open dimension found while parsing interval");

 VAR_11 = FUNC_14(VAR_12);
 FUNC_13(VAR_9);

 switch (VAR_5)
 {
  case 128:
   if (FUNC_2(VAR_11))
    FUNC_5(VAR_2,
      (FUNC_6(VAR_0),
       FUNC_8("invalid parameter value for %s", VAR_6),
       FUNC_7("INTERVAL time duration cannot be used with hypertables with "
         "integer-based time dimensions")));
   FUNC_15(128, VAR_11, VAR_7);
   VAR_10->is_time_interval = 1;
   VAR_10->time_interval = *FUNC_0(VAR_4);
   break;
  case 131:
  case 130:
  case 129:
   if (!FUNC_2(VAR_11))
    FUNC_5(VAR_2,
      (FUNC_6(VAR_0),
       FUNC_8("invalid parameter value for %s", VAR_6),
       FUNC_7("integer-based time duration cannot be used with hypertables with "
         "a timestamp-based time dimensions")));

   if (FUNC_12(FUNC_3(VAR_12->fd.integer_now_func)) == 0 ||
    FUNC_12(FUNC_3(VAR_12->fd.integer_now_func_schema)) == 0)
    FUNC_5(VAR_2,
      (FUNC_6(VAR_0),
       FUNC_8("integer_now_func not set on hypertable %s", FUNC_9(VAR_3))));

   VAR_10->is_time_interval = 0;
   VAR_10->integer_interval = FUNC_19(VAR_4, VAR_5);

   break;
  default:
   FUNC_5(VAR_2,
     (FUNC_6(VAR_0),
      FUNC_8("invalid type for parameter %s in %s", VAR_6, VAR_7)));
 }

 return VAR_10;
}

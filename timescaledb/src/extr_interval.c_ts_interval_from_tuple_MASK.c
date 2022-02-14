
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_7__ {int integer_interval; int time_interval; scalar_t__ is_time_interval; } ;
struct TYPE_6__ {int t_data; int t_tableOid; int t_self; int t_len; } ;
typedef int Oid ;
typedef int HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef TYPE_2__ FormData_ts_interval ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*,int ,scalar_t__*,int*) ;
 int FUNC_11 (int ,int ) ;
 TYPE_2__* FUNC_12 (int) ;

FormData_ts_interval *
FUNC_13(Datum VAR_5)
{
 bool VAR_6[VAR_4];
 Datum VAR_7[VAR_4];
 HeapTupleHeader VAR_8;
 HeapTupleData VAR_9;
 FormData_ts_interval *VAR_10;

 Oid VAR_11;
 int32 VAR_12;
 TupleDesc VAR_13;

 VAR_8 = FUNC_2(VAR_5);
 VAR_11 = FUNC_8(VAR_8);
 VAR_12 = FUNC_7(VAR_8);
 VAR_13 = FUNC_11(VAR_11, VAR_12);

 VAR_9.t_len = FUNC_6(VAR_8);
 FUNC_9(&(VAR_9.t_self));
 VAR_9.t_tableOid = VAR_3;
 VAR_9.t_data = VAR_8;

 FUNC_10(&VAR_9, VAR_13, VAR_7, VAR_6);

 FUNC_5(VAR_13);

 VAR_10 = FUNC_12(sizeof(FormData_ts_interval));

 FUNC_0(!VAR_6[FUNC_1(VAR_1)]);

 VAR_10->is_time_interval = VAR_7[FUNC_1(VAR_1)];
 if (VAR_10->is_time_interval)
 {
  FUNC_0(!VAR_6[FUNC_1(VAR_2)]);
  FUNC_0(VAR_6[FUNC_1(VAR_0)]);
  VAR_10->time_interval =
   *FUNC_4(VAR_7[FUNC_1(VAR_2)]);
 }
 else
 {
  FUNC_0(VAR_6[FUNC_1(VAR_2)]);
  FUNC_0(!VAR_6[FUNC_1(VAR_0)]);
  VAR_10->integer_interval =
   FUNC_3(VAR_7[FUNC_1(VAR_0)]);
 }

 return VAR_10;
}

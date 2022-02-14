
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_6__ {void* orderby_nullsfirst; void* orderby_asc; void* orderby_column_index; void* segmentby_column_index; void* algo_id; int attname; int hypertable_id; } ;
typedef TYPE_2__ FormData_hypertable_compression ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,int *,int*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_8(FormData_hypertable_compression *VAR_9, TupleInfo *VAR_10)
{
 Datum VAR_11[VAR_8];
 bool VAR_12[VAR_8];

 FUNC_6(VAR_10->tuple, VAR_10->desc, VAR_11, VAR_12);

 FUNC_0(!VAR_12[FUNC_1(VAR_2)]);
 FUNC_0(!VAR_12[FUNC_1(VAR_1)]);
 FUNC_0(!VAR_12[FUNC_1(VAR_0)]);

 VAR_9->hypertable_id =
  FUNC_4(VAR_11[FUNC_1(VAR_2)]);
 FUNC_7(&VAR_9->attname,
     FUNC_5(VAR_11[FUNC_1(VAR_1)]),
     VAR_7);
 VAR_9->algo_id =
  FUNC_3(VAR_11[FUNC_1(VAR_0)]);

 if (VAR_12[FUNC_1(VAR_6)])
  VAR_9->segmentby_column_index = 0;
 else
  VAR_9->segmentby_column_index = FUNC_3(
   VAR_11[FUNC_1(VAR_6)]);

 if (VAR_12[FUNC_1(VAR_4)])
  VAR_9->orderby_column_index = 0;
 else
 {
  FUNC_0(!VAR_12[FUNC_1(VAR_3)]);
  FUNC_0(!VAR_12[FUNC_1(VAR_5)]);

  VAR_9->orderby_column_index = FUNC_3(
   VAR_11[FUNC_1(VAR_4)]);
  VAR_9->orderby_asc =
   FUNC_2(VAR_11[FUNC_1(VAR_3)]);
  VAR_9->orderby_nullsfirst = FUNC_2(
   VAR_11[FUNC_1(VAR_5)]);
 }
}

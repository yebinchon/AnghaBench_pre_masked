
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int TupleDesc ;
struct TYPE_15__ {scalar_t__ typid; int typlen; int typbyval; } ;
struct TYPE_19__ {TYPE_2__ base; } ;
struct TYPE_18__ {int isnull; int value; int time; } ;
struct TYPE_17__ {size_t time_index; int gapfill_typid; TYPE_1__** columns; } ;
struct TYPE_16__ {int t_data; int t_tableOid; int t_self; int t_len; } ;
struct TYPE_14__ {scalar_t__ typid; } ;
struct TYPE_13__ {scalar_t__ atttypid; } ;
typedef int HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;
typedef TYPE_4__ GapFillState ;
typedef TYPE_5__ GapFillInterpolateSample ;
typedef TYPE_6__ GapFillInterpolateColumnState ;
typedef int Expr ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;
 TYPE_12__* FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_4__*,int *,int*) ;
 int FUNC_15 (TYPE_3__*,int,int ,int*) ;
 int FUNC_16 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_17(GapFillState *VAR_4, GapFillInterpolateColumnState *VAR_5,
      GapFillInterpolateSample *VAR_6, Expr *VAR_7)
{
 HeapTupleHeader VAR_8;
 HeapTupleData VAR_9;
 TupleDesc VAR_10;
 Datum VAR_11;
 bool VAR_12;
 Datum VAR_13 = FUNC_14(VAR_4, VAR_7, &VAR_12);

 if (VAR_12)
 {
  VAR_6->isnull = 1;
  return;
 }

 VAR_8 = FUNC_1(VAR_13);
 if (FUNC_4(VAR_8) != 2)
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("interpolate RECORD arguments must have 2 elements")));


 FUNC_0(VAR_3 == FUNC_6(VAR_8));
 VAR_10 = FUNC_16(FUNC_6(VAR_8), FUNC_5(VAR_8));


 VAR_9.t_len = FUNC_3(VAR_8);
 FUNC_7(&(VAR_9.t_self));
 VAR_9.t_tableOid = VAR_2;
 VAR_9.t_data = VAR_8;


 if (FUNC_8(VAR_10, 0)->atttypid != VAR_4->columns[VAR_4->time_index]->typid)
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("first argument of interpolate returned record must match used timestamp "
      "datatype")));


 if (FUNC_8(VAR_10, 1)->atttypid != VAR_5->base.typid)
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("second argument of interpolate returned record must match used "
      "interpolate datatype")));

 VAR_11 = FUNC_15(&VAR_9, 1, VAR_10, &VAR_6->isnull);
 if (!VAR_6->isnull)
 {
  VAR_6->time = FUNC_13(VAR_11, VAR_4->gapfill_typid);

  VAR_11 = FUNC_15(&VAR_9, 2, VAR_10, &VAR_6->isnull);
  if (!VAR_6->isnull)
   VAR_6->value = FUNC_9(VAR_11, VAR_5->base.typbyval, VAR_5->base.typlen);
 }

 FUNC_2(VAR_10);
}

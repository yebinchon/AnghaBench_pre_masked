
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mctx; int desc; int tuple; } ;
typedef TYPE_2__ TupleInfo ;
struct TYPE_7__ {int column_name; int interval_length; void* num_slices; int integer_now_func; int integer_now_func_schema; int partitioning_func; int partitioning_func_schema; int column_type; int aligned; void* hypertable_id; void* id; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ fd; int column_attno; int partitioning; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_3__ Dimension ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_0 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int *,int*) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_15(Dimension *VAR_14, TupleInfo *VAR_15, Oid VAR_16)
{
 Datum VAR_17[VAR_13];
 bool VAR_18[VAR_13];





 FUNC_11(VAR_15->tuple, VAR_15->desc, VAR_17, VAR_18);

 VAR_14->type = FUNC_9(VAR_15);
 VAR_14->fd.id = FUNC_3(VAR_17[FUNC_0(VAR_4)]);
 VAR_14->fd.hypertable_id =
  FUNC_3(VAR_17[FUNC_0(VAR_3)]);
 VAR_14->fd.aligned = FUNC_1(VAR_17[FUNC_0(VAR_0)]);
 VAR_14->fd.column_type =
  FUNC_6(VAR_17[FUNC_0(VAR_2)]);
 FUNC_12(&VAR_14->fd.column_name,
     FUNC_5(VAR_17[FUNC_0(VAR_1)]),
     VAR_12);

 if (!VAR_18[VAR_10 - 1] &&
  !VAR_18[VAR_9 - 1])
 {
  MemoryContext VAR_19;

  VAR_14->fd.num_slices =
   FUNC_2(VAR_17[FUNC_0(VAR_8)]);

  FUNC_12(&VAR_14->fd.partitioning_func_schema,
      FUNC_5(
       VAR_17[FUNC_0(VAR_10)]),
      VAR_12);
  FUNC_12(&VAR_14->fd.partitioning_func,
      FUNC_5(VAR_17[FUNC_0(VAR_9)]),
      VAR_12);

  VAR_19 = FUNC_7(VAR_15->mctx);
  VAR_14->partitioning = FUNC_14(FUNC_8(VAR_14->fd.partitioning_func_schema),
               FUNC_8(VAR_14->fd.partitioning_func),
               FUNC_8(VAR_14->fd.column_name),
               VAR_14->type,
               VAR_16);
  FUNC_7(VAR_19);
 }

 if (!VAR_18[VAR_6 - 1] &&
  !VAR_18[VAR_5 - 1])
 {
  FUNC_13(&VAR_14->fd.integer_now_func_schema,
    FUNC_5(
     VAR_17[FUNC_0(VAR_6)]));
  FUNC_13(&VAR_14->fd.integer_now_func,
    FUNC_5(VAR_17[FUNC_0(VAR_5)]));
 }

 if (VAR_14->type == VAR_11)
  VAR_14->fd.num_slices = FUNC_2(VAR_17[VAR_8 - 1]);
 else
  VAR_14->fd.interval_length =
   FUNC_4(VAR_17[FUNC_0(VAR_7)]);

 VAR_14->column_attno = FUNC_10(VAR_16, FUNC_8(VAR_14->fd.column_name));
}

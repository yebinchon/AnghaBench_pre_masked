
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* tuple; int scanrel; int desc; } ;
typedef TYPE_2__ TupleInfo ;
struct TYPE_9__ {int t_self; } ;
struct TYPE_6__ {scalar_t__ num_slices; scalar_t__ interval_length; int integer_now_func_schema; int integer_now_func; int partitioning_func_schema; int partitioning_func; int column_type; int column_name; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
typedef int ScanTupleResult ;
typedef int HeapTuple ;
typedef TYPE_3__ Dimension ;
typedef int Datum ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_4__*,int ,int *,int*) ;
 int FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_13(TupleInfo *VAR_10, void *VAR_11)
{
 Dimension *VAR_12 = VAR_11;
 HeapTuple VAR_13;
 Datum VAR_14[VAR_8];
 bool VAR_15[VAR_8];
 CatalogSecurityContext VAR_16;

 FUNC_7(VAR_10->tuple, VAR_10->desc, VAR_14, VAR_15);

 FUNC_0((VAR_12->fd.num_slices <= 0 && VAR_12->fd.interval_length > 0) ||
     (VAR_12->fd.num_slices > 0 && VAR_12->fd.interval_length <= 0));

 VAR_14[FUNC_1(VAR_0)] =
  FUNC_4(&VAR_12->fd.column_name);
 VAR_14[FUNC_1(VAR_1)] =
  FUNC_6(VAR_12->fd.column_type);
 VAR_14[FUNC_1(VAR_5)] = FUNC_2(VAR_12->fd.num_slices);

 if (!VAR_15[FUNC_1(VAR_6)] &&
  !VAR_15[FUNC_1(VAR_7)])
 {
  VAR_14[FUNC_1(VAR_6)] =
   FUNC_4(&VAR_12->fd.partitioning_func);
  VAR_14[FUNC_1(VAR_7)] =
   FUNC_4(&VAR_12->fd.partitioning_func_schema);
 }

 if (*FUNC_5(VAR_12->fd.integer_now_func) != '\0' &&
  *FUNC_5(VAR_12->fd.integer_now_func_schema) != '\0')
 {
  VAR_14[FUNC_1(VAR_2)] =
   FUNC_4(&VAR_12->fd.integer_now_func);
  VAR_14[FUNC_1(VAR_3)] =
   FUNC_4(&VAR_12->fd.integer_now_func_schema);
  VAR_15[FUNC_1(VAR_2)] = 0;
  VAR_15[FUNC_1(VAR_3)] = 0;
 }

 if (!VAR_15[FUNC_1(VAR_4)])
  VAR_14[FUNC_1(VAR_4)] =
   FUNC_3(VAR_12->fd.interval_length);

 VAR_13 = FUNC_8(VAR_10->desc, VAR_14, VAR_15);

 FUNC_9(FUNC_10(), &VAR_16);
 FUNC_12(VAR_10->scanrel, &VAR_10->tuple->t_self, VAR_13);
 FUNC_11(&VAR_16);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ int64 ;
struct TYPE_4__ {int main_table_relid; } ;
typedef int StrategyNumber ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ Hyperspace ;
typedef int FormData_ts_interval ;
typedef int Dimension ;
typedef int Datum ;
typedef int ChunkScanCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int *,int ,scalar_t__,int ,scalar_t__,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,char*) ;
 int * FUNC_7 (int ,int ,scalar_t__,char*,char*) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static ChunkScanCtx *
FUNC_10(Hyperspace *VAR_7, Dimension *VAR_8,
            Datum VAR_9, Oid VAR_10,
            Datum VAR_11, Oid VAR_12, int VAR_13,
            MemoryContext VAR_14, char *VAR_15,
            uint64 *VAR_16)
{
 ChunkScanCtx *VAR_17 = ((void*)0);
 FormData_ts_interval *VAR_18;

 int64 VAR_19 = -1;
 int64 VAR_20 = -1;

 StrategyNumber VAR_21 = VAR_6;
 StrategyNumber VAR_22 = VAR_6;

 MemoryContext VAR_23;

 if (VAR_8 == ((void*)0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2), FUNC_4("no time dimension found")));

 if (VAR_10 != VAR_5)
 {
  Oid VAR_24 = FUNC_5(VAR_8);
  FUNC_6(VAR_10, VAR_24, VAR_15);

  if (VAR_10 == VAR_4)
  {
   VAR_18 = FUNC_7(VAR_7->main_table_relid,
             VAR_9,
             VAR_10,
             "older_than",
             VAR_15);
   VAR_19 = FUNC_9(FUNC_8(VAR_18, VAR_8),
               VAR_24);
  }
  else
  {
   VAR_19 = FUNC_9(VAR_9, VAR_10);
  }

  VAR_22 = VAR_1;
 }

 if (VAR_12 != VAR_5)
 {
  Oid VAR_25 = FUNC_5(VAR_8);
  FUNC_6(VAR_12, VAR_25, VAR_15);

  if (VAR_12 == VAR_4)
  {
   VAR_18 = FUNC_7(VAR_7->main_table_relid,
             VAR_11,
             VAR_12,
             "newer_than",
             VAR_15);
   VAR_20 = FUNC_9(FUNC_8(VAR_18, VAR_8),
               VAR_25);
  }
  else
  {
   VAR_20 = FUNC_9(VAR_11, VAR_12);
  }

  VAR_21 = VAR_0;
 }

 if (VAR_10 != VAR_5 && VAR_12 != VAR_5 && VAR_19 < VAR_20)
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("When both older_than and newer_than are specified, "
      "older_than must refer to a time that is more recent than newer_than so "
      "that a valid overlapping range is specified")));

 VAR_23 = FUNC_0(VAR_14);
 VAR_17 = FUNC_1(VAR_7,
              VAR_8,
              VAR_21,
              VAR_20,
              VAR_22,
              VAR_19,
              VAR_13,
              VAR_16);
 FUNC_0(VAR_23);

 return VAR_17;
}

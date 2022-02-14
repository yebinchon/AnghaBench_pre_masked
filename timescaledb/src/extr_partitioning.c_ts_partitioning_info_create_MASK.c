
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Var ;
struct TYPE_8__ {scalar_t__ hash_proc; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_11__ {int fn_oid; } ;
struct TYPE_10__ {TYPE_7__ func_fmgr; int rettype; int schema; int name; } ;
struct TYPE_9__ {scalar_t__ column_attnum; TYPE_4__ partfunc; int dimtype; int column; } ;
typedef TYPE_2__ PartitioningInfo ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int FuncExpr ;
typedef int DimensionType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char const*,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,TYPE_7__*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (scalar_t__,int ) ;
 int * FUNC_12 (int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int * FUNC_13 (int,scalar_t__,scalar_t__,int,scalar_t__,int ) ;
 TYPE_2__* FUNC_14 (int) ;
 int FUNC_15 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ FUNC_16 (char const*,char const*) ;

PartitioningInfo *
FUNC_17(const char *VAR_8, const char *VAR_9, const char *VAR_10,
       DimensionType VAR_11, Oid VAR_12)
{
 PartitioningInfo *VAR_13;
 Oid VAR_14, VAR_15, VAR_16 = VAR_5;
 Var *VAR_17;
 FuncExpr *VAR_18;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("partitioning function information cannot be null")));

 VAR_13 = FUNC_14(sizeof(PartitioningInfo));
 FUNC_0(VAR_13->partfunc.name, VAR_9, VAR_6);
 FUNC_0(VAR_13->column, VAR_10, VAR_6);
 VAR_13->column_attnum = FUNC_7(VAR_12, VAR_13->column);
 VAR_13->dimtype = VAR_11;


 if (VAR_13->column_attnum == VAR_4)
  return ((void*)0);

 FUNC_0(VAR_13->partfunc.schema, VAR_8, VAR_6);


 VAR_14 = FUNC_8(VAR_12, VAR_13->column_attnum);

 if (VAR_11 == VAR_1)
 {
  TypeCacheEntry *VAR_19 = FUNC_11(VAR_14, VAR_7);

  if (VAR_19->hash_proc == VAR_5 &&
   FUNC_16(VAR_8, VAR_9))
   FUNC_1(VAR_3, "could not find hash function for type %s", FUNC_6(VAR_14));
 }

 FUNC_15(&VAR_13->partfunc, VAR_14, VAR_11);






 VAR_15 = FUNC_9(VAR_14);

 VAR_17 = FUNC_13(1, VAR_13->column_attnum, VAR_14, -1, VAR_15, 0);

 VAR_18 = FUNC_12(VAR_13->partfunc.func_fmgr.fn_oid,
      VAR_13->partfunc.rettype,
      FUNC_10(VAR_17),
      VAR_16,
      VAR_15,
      VAR_0);

 FUNC_5((Node *) VAR_18, &VAR_13->partfunc.func_fmgr);

 return VAR_13;
}

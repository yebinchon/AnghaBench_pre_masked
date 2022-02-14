
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int oidvector ;
struct TYPE_9__ {TYPE_2__* funcinfo; int funcid; } ;
struct TYPE_8__ {int nargs; int * funcname; int arg_types; scalar_t__ is_timescaledb_func; } ;
struct TYPE_7__ {int keysize; int entrysize; int hcxt; } ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_2__ FuncInfo ;
typedef TYPE_3__ FuncEntry ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int *,int ) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,TYPE_1__*,int) ;
 TYPE_3__* FUNC_11 (int ,int *,int ,int*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 char* FUNC_14 () ;

__attribute__((used)) static void
FUNC_15()
{
 HASHCTL VAR_11 = {
  .keysize = sizeof(Oid),
  .entrysize = sizeof(FuncEntry),
  .hcxt = VAR_1,
 };
 Oid VAR_12 = FUNC_9(FUNC_14(), 0);
 Oid VAR_13 = FUNC_9("pg_catalog", 0);
 HeapTuple VAR_14;
 Relation VAR_15;
 int VAR_16;

 VAR_9 = FUNC_10("func_cache", VAR_8, &VAR_11, VAR_4 | VAR_3);

 VAR_15 = FUNC_13(VAR_7, VAR_0);

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
 {
  FuncInfo *VAR_17 = &VAR_10[VAR_16];
  Oid VAR_18 = VAR_17->is_timescaledb_func ? VAR_12 : VAR_13;
  oidvector *VAR_19 = FUNC_7(VAR_17->arg_types, VAR_17->nargs);
  FuncEntry *VAR_20;
  bool VAR_21;
  Oid VAR_22;

  VAR_14 = FUNC_6(VAR_6,
        FUNC_4(VAR_17->funcname),
        FUNC_4(VAR_19),
        FUNC_3(VAR_18));

  if (!FUNC_2(VAR_14))
   FUNC_8(VAR_2,
     "cache lookup failed for function \"%s\" with %d args",
     VAR_17->funcname,
     VAR_17->nargs);

  VAR_22 = FUNC_1(VAR_14);

  VAR_20 = FUNC_11(VAR_9, &VAR_22, VAR_5, &VAR_21);
  FUNC_0(!VAR_21);
  VAR_20->funcid = VAR_22;
  VAR_20->funcinfo = VAR_17;
  FUNC_5(VAR_14);
 }

 FUNC_12(VAR_15, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int regproc ;
struct TYPE_7__ {int func_name; int func_schema; int func; } ;
struct TYPE_5__ {scalar_t__* values; } ;
struct TYPE_6__ {scalar_t__ pronargs; scalar_t__ prorettype; int proname; int pronamespace; TYPE_1__ proargtypes; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;
typedef TYPE_3__ ChunkSizingInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;

void
FUNC_14(regproc VAR_7, ChunkSizingInfo *VAR_8)
{
 HeapTuple VAR_9;
 Form_pg_proc VAR_10;
 Oid *VAR_11;

 if (!FUNC_4(VAR_7))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2), (FUNC_11("invalid chunk sizing function"))));

 VAR_9 = FUNC_6(VAR_6, FUNC_3(VAR_7));

 if (!FUNC_1(VAR_9))
  FUNC_7(VAR_3, "cache lookup failed for function %u", VAR_7);

 VAR_10 = (Form_pg_proc) FUNC_0(VAR_9);
 VAR_11 = VAR_10->proargtypes.values;

 if (VAR_10->pronargs != VAR_0 || VAR_11[0] != VAR_4 ||
  VAR_11[1] != VAR_5 || VAR_11[2] != VAR_5 || VAR_10->prorettype != VAR_5)
 {
  FUNC_5(VAR_9);
  FUNC_8(VAR_3,
    (FUNC_9(VAR_1),
     FUNC_11("invalid function signature"),
     FUNC_10("A chunk sizing function's signature should be (int, bigint, bigint) -> "
       "bigint")));
 }

 if (((void*)0) != VAR_8)
 {
  VAR_8->func = VAR_7;
  FUNC_13(&VAR_8->func_schema, FUNC_12(VAR_10->pronamespace));
  FUNC_13(&VAR_8->func_name, FUNC_2(VAR_10->proname));
 }

 FUNC_5(VAR_9);
}

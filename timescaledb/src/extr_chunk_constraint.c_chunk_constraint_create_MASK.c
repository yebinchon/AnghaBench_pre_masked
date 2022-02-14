
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int hypertable_constraint_name; } ;
struct TYPE_9__ {TYPE_1__ fd; } ;
struct TYPE_8__ {scalar_t__ contype; int conindid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__ FormData_pg_constraint ;
typedef TYPE_3__ ChunkConstraint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static Oid
FUNC_11(ChunkConstraint *VAR_3, Oid VAR_4, int32 VAR_5, Oid VAR_6,
      int32 VAR_7)
{
 Oid VAR_8;

 FUNC_10(1);
 VAR_8 = FUNC_6(VAR_3, VAR_4);
 FUNC_10(0);







 if (!FUNC_3(VAR_8))
  return VAR_2;

 if (!FUNC_8(VAR_3))
 {
  Oid VAR_9 =
   FUNC_7(VAR_6,
          FUNC_2(VAR_3->fd.hypertable_constraint_name),
          0);
  HeapTuple VAR_10 = FUNC_5(VAR_1, VAR_9);

  if (FUNC_1(VAR_10))
  {
   FormData_pg_constraint *VAR_11 = (FormData_pg_constraint *) FUNC_0(VAR_10);

   if (FUNC_3(VAR_11->conindid) && VAR_11->contype != VAR_0)
    FUNC_9(VAR_7,
               VAR_9,
               VAR_5,
               VAR_8);

   FUNC_4(VAR_10);
  }
 }

 return VAR_8;
}

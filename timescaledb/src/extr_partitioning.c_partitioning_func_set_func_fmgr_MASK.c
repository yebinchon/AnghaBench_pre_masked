
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int proc_filter ;
struct TYPE_3__ {int func_fmgr; int rettype; int name; int schema; } ;
typedef TYPE_1__ PartitioningFunc ;
typedef int Oid ;
typedef scalar_t__ DimensionType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_7(PartitioningFunc *VAR_6, Oid VAR_7, DimensionType VAR_8)
{
 Oid VAR_9;
 proc_filter VAR_10 = VAR_8 == VAR_1 ? VAR_4 :
               VAR_5;

 if (VAR_8 != VAR_1 && VAR_8 != VAR_2)
  FUNC_1(VAR_3, "invalid dimension type %u", VAR_8);

 VAR_9 = FUNC_6(VAR_6->schema, VAR_6->name, &VAR_6->rettype, VAR_10, &VAR_7);

 if (!FUNC_0(VAR_9))
 {
  if (VAR_8 == VAR_1)
   FUNC_2(VAR_3,
     (FUNC_4("invalid partitioning function"),
      FUNC_3("A partitioning function for a closed (space) dimension "
        "must be IMMUTABLE and have the signature (anyelement) -> integer")));
  else
   FUNC_2(VAR_3,
     (FUNC_4("invalid partitioning function"),
      FUNC_3("A partitioning function for a open (time) dimension "
        "must be IMMUTABLE, take one argument, and return a supported time "
        "type")));
 }

 FUNC_5(VAR_9, &VAR_6->func_fmgr, VAR_0);
}

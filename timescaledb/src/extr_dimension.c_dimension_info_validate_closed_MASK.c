
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int * colname; int num_slices; int num_slices_is_set; int coltype; int partitioning_func; } ;
typedef TYPE_1__ DimensionInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_10(DimensionInfo *VAR_5)
{
 FUNC_0(VAR_5->type == VAR_0);

 if (!FUNC_3(VAR_5->partitioning_func))
  VAR_5->partitioning_func = FUNC_8();
 else if (!FUNC_9(VAR_5->partitioning_func, VAR_5->type, VAR_5->coltype))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_1),
     FUNC_7("invalid partitioning function"),
     FUNC_6("A valid partitioning function for closed (space) dimensions must be "
       "IMMUTABLE "
       "and have the signature (anyelement) -> integer.")));

 if (!VAR_5->num_slices_is_set || !FUNC_1(VAR_5->num_slices))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_7("invalid number of partitions for dimension \"%s\"",
      FUNC_2(*VAR_5->colname)),
     FUNC_6("A closed (space) dimension must specify between 1 and %d partitions.",
       VAR_4)));
}

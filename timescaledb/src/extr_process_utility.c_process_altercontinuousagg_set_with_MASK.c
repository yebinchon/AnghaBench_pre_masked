
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WithClauseResult ;
struct TYPE_2__ {int (* continuous_agg_update_options ) (int *,int *) ;} ;
typedef int Oid ;
typedef int List ;
typedef int ContinuousAgg ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_1__* VAR_3 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int const*,int **,int **) ;

__attribute__((used)) static void
FUNC_8(ContinuousAgg *VAR_4, Oid VAR_5, const List *VAR_6)
{
 WithClauseResult *VAR_7;
 List *VAR_8 = VAR_2, *VAR_9 = VAR_2;

 FUNC_0(VAR_4, VAR_5);

 FUNC_7(VAR_6, &VAR_9, &VAR_8);
 if (FUNC_4(VAR_8) > 0)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("only timescaledb parameters allowed in WITH clause for continuous "
      "aggregate")));

 if (FUNC_4(VAR_9) > 0)
 {
  VAR_7 = FUNC_6(VAR_9);
  VAR_3->continuous_agg_update_options(VAR_4, VAR_7);
 }
}

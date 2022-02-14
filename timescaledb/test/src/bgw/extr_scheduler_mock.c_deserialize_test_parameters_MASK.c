
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_7__ {int root; } ;
struct TYPE_5__ {int numeric; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ val; } ;
typedef scalar_t__ Oid ;
typedef int Numeric ;
typedef TYPE_2__ JsonbValue ;
typedef TYPE_3__ Jsonb ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(char *VAR_3, int32 *VAR_4, Oid *VAR_5)
{
 Jsonb *VAR_6 = (Jsonb *) FUNC_3(FUNC_4(VAR_1, FUNC_1(VAR_3)));
 JsonbValue *VAR_7 = FUNC_6(&VAR_6->root, 0);
 JsonbValue *VAR_8 = FUNC_6(&VAR_6->root, 1);
 Numeric VAR_9;
 Numeric VAR_10;

 FUNC_0(VAR_7->type == VAR_0);
 FUNC_0(VAR_8->type == VAR_0);

 VAR_9 = VAR_7->val.numeric;
 VAR_10 = VAR_8->val.numeric;
 *VAR_4 = FUNC_2(FUNC_4(VAR_2, FUNC_5(VAR_9)));
 *VAR_5 =
  (Oid) FUNC_2(FUNC_4(VAR_2, FUNC_5(VAR_10)));
}

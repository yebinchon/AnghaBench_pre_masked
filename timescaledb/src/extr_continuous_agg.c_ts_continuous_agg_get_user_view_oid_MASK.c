
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_view_schema; int user_view_name; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef int Oid ;
typedef TYPE_2__ ContinuousAgg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

Oid
FUNC_5(ContinuousAgg *VAR_1)
{
 Oid VAR_2 =
  FUNC_4(FUNC_0(VAR_1->data.user_view_name),
        FUNC_3(FUNC_0(VAR_1->data.user_view_schema), 0));
 if (!FUNC_1(VAR_2))
  FUNC_2(VAR_0, "could not find user view for continuous agg");
 return VAR_2;
}

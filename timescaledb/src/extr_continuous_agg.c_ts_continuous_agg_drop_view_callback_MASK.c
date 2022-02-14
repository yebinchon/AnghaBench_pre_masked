
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef int ContinuousAggViewType ;
typedef TYPE_1__ ContinuousAgg ;





 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char const*,char const*) ;

void
FUNC_4(ContinuousAgg *VAR_1, const char *VAR_2, const char *VAR_3)
{
 ContinuousAggViewType VAR_4;
 VAR_4 = FUNC_3(&VAR_1->data, VAR_2, VAR_3);
 switch (VAR_4)
 {
  case 128:
   FUNC_0(VAR_1, 0 );
   break;
  case 129:
  case 130:
   FUNC_1(VAR_1);
   break;
  default:
   FUNC_2(VAR_0, "unknown continuous aggregate view type");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int direct_view_name; int direct_view_schema; int partial_view_name; int partial_view_schema; int user_view_name; int user_view_schema; } ;
typedef TYPE_1__ FormData_continuous_agg ;
typedef int ContinuousAggViewType ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

ContinuousAggViewType
FUNC_1(FormData_continuous_agg *VAR_4, const char *VAR_5, const char *VAR_6)
{
 if (FUNC_0(&VAR_4->user_view_schema, VAR_5) &&
  FUNC_0(&VAR_4->user_view_name, VAR_6))
  return VAR_3;
 else if (FUNC_0(&VAR_4->partial_view_schema, VAR_5) &&
    FUNC_0(&VAR_4->partial_view_name, VAR_6))
  return VAR_2;
 else if (FUNC_0(&VAR_4->direct_view_schema, VAR_5) &&
    FUNC_0(&VAR_4->direct_view_name, VAR_6))
  return VAR_0;
 else
  return VAR_1;
}

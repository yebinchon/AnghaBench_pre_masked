
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum graph_display { ____Placeholder_graph_display } graph_display ;
typedef enum commit_order { ____Placeholder_commit_order } commit_order ;
struct TYPE_2__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

const char *
FUNC_0(enum graph_display VAR_5)
{
 enum commit_order VAR_6 = VAR_4;

 if (VAR_6 == VAR_0 &&
     VAR_5 != VAR_2)
  VAR_6 = VAR_1;

 return VAR_3[VAR_6].name;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {int active_point; int id; } ;
struct TYPE_2__ {scalar_t__ field; scalar_t__ reversed; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_2, const void *VAR_3)
{
 const struct window_pane *const *VAR_4 = VAR_2;
 const struct window_pane *const *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_1->field == VAR_0)
  VAR_6 = (*VAR_4)->active_point - (*VAR_5)->active_point;
 else {




  VAR_6 = (*VAR_4)->id - (*VAR_5)->id;
 }
 if (VAR_1->reversed)
  VAR_6 = -VAR_6;
 return (VAR_6);
}

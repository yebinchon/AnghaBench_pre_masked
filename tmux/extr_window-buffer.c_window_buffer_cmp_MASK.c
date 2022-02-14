
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_buffer_itemdata {int order; int size; int name; } ;
struct TYPE_2__ {scalar_t__ field; scalar_t__ reversed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_1(const void *VAR_3, const void *VAR_4)
{
 const struct window_buffer_itemdata *const *VAR_5 = VAR_3;
 const struct window_buffer_itemdata *const *VAR_6 = VAR_4;
 int VAR_7 = 0;

 if (VAR_2->field == VAR_1)
  VAR_7 = (*VAR_6)->order - (*VAR_5)->order;
 else if (VAR_2->field == VAR_0)
  VAR_7 = (*VAR_6)->size - (*VAR_5)->size;


 if (VAR_7 == 0)
  VAR_7 = FUNC_0((*VAR_5)->name, (*VAR_6)->name);

 if (VAR_2->reversed)
  VAR_7 = -VAR_7;
 return (VAR_7);
}

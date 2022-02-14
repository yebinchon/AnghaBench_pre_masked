
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; TYPE_1__* backing; } ;
struct grid_cell {int flags; } ;
struct TYPE_2__ {int grid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*,int ) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_5 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_7(struct window_mode_entry *VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_1->data;
 u_int VAR_3, VAR_4;
 struct grid_cell VAR_5;

 VAR_3 = FUNC_1(VAR_2->backing) + VAR_2->cy - VAR_2->oy;
 VAR_4 = VAR_2->cx;
 while (VAR_4 > 0) {
  FUNC_0(VAR_2->backing->grid, VAR_4, VAR_3, &VAR_5);
  if (~VAR_5.flags & VAR_0)
   break;
  VAR_4--;
 }
 if (VAR_4 == 0 && VAR_3 > 0) {
  FUNC_3(VAR_1, 0);
  FUNC_2(VAR_1);
 } else if (VAR_4 > 0) {
  FUNC_5(VAR_1, VAR_4 - 1, VAR_2->cy);
  if (FUNC_6(VAR_1, 1))
   FUNC_4(VAR_1, VAR_2->cy, 1);
 }
}

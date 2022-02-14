
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; scalar_t__ jumpchar; struct screen* backing; } ;
struct screen {int grid; } ;
struct TYPE_2__ {int size; scalar_t__* data; } ;
struct grid_cell {int flags; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 scalar_t__ FUNC_2 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_6(struct window_mode_entry *VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_1->data;
 struct screen *VAR_3 = VAR_2->backing;
 struct grid_cell VAR_4;
 u_int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_2->cx + 2;
 VAR_6 = FUNC_1(VAR_3) + VAR_2->cy - VAR_2->oy;
 VAR_7 = FUNC_2(VAR_1, VAR_6);

 while (VAR_5 < VAR_7) {
  FUNC_0(VAR_3->grid, VAR_5, VAR_6, &VAR_4);
  if (!(VAR_4.flags & VAR_0) &&
      VAR_4.data.size == 1 && *VAR_4.data.data == VAR_2->jumpchar) {
   FUNC_4(VAR_1, VAR_5 - 1, VAR_2->cy);
   if (FUNC_5(VAR_1, 1))
    FUNC_3(VAR_1, VAR_2->cy, 1);
   return;
  }
  VAR_5++;
 }
}

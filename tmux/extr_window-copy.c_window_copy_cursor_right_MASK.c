
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct TYPE_5__ {int * sel; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; TYPE_1__* backing; TYPE_2__ screen; scalar_t__ rectflag; } ;
struct grid_cell {int flags; } ;
struct TYPE_4__ {int grid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct window_mode_entry*,int ) ;
 int FUNC_5 (struct window_mode_entry*) ;
 scalar_t__ FUNC_6 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_7 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_8 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_10(struct window_mode_entry *VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_1->data;
 u_int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 struct grid_cell VAR_8;

 VAR_4 = FUNC_1(VAR_2->backing) + VAR_2->cy - VAR_2->oy;
 VAR_5 = FUNC_1(VAR_2->backing) + FUNC_3(VAR_2->backing) - 1;
 if (VAR_2->screen.sel != ((void*)0) && VAR_2->rectflag)
  VAR_3 = FUNC_2(&VAR_2->screen);
 else
  VAR_3 = FUNC_6(VAR_1, VAR_4);

 if (VAR_2->cx >= VAR_3 && VAR_4 < VAR_5) {
  FUNC_5(VAR_1);
  FUNC_4(VAR_1, 0);
 } else if (VAR_2->cx < VAR_3) {
  VAR_6 = VAR_2->cx + 1;
  VAR_7 = FUNC_1(VAR_2->backing) + VAR_2->cy - VAR_2->oy;
  while (VAR_6 < VAR_3) {
   FUNC_0(VAR_2->backing->grid, VAR_6, VAR_7, &VAR_8);
   if (~VAR_8.flags & VAR_0)
    break;
   VAR_6++;
  }
  FUNC_8(VAR_1, VAR_6, VAR_2->cy);
  if (FUNC_9(VAR_1, 1))
   FUNC_7(VAR_1, VAR_2->cy, 1);
 }
}

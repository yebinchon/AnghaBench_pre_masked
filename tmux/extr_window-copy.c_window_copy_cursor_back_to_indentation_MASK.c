
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; TYPE_2__* backing; } ;
struct TYPE_3__ {int size; char* data; } ;
struct grid_cell {TYPE_1__ data; } ;
struct TYPE_4__ {int grid; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_6(struct window_mode_entry *VAR_0)
{
 struct window_copy_mode_data *VAR_1 = VAR_0->data;
 u_int VAR_2, VAR_3, VAR_4;
 struct grid_cell VAR_5;

 VAR_2 = 0;
 VAR_3 = FUNC_1(VAR_1->backing) + VAR_1->cy - VAR_1->oy;
 VAR_4 = FUNC_2(VAR_0, VAR_3);

 while (VAR_2 < VAR_4) {
  FUNC_0(VAR_1->backing->grid, VAR_2, VAR_3, &VAR_5);
  if (VAR_5.data.size != 1 || *VAR_5.data.data != ' ')
   break;
  VAR_2++;
 }

 FUNC_4(VAR_0, VAR_2, VAR_1->cy);
 if (FUNC_5(VAR_0, 1))
  FUNC_3(VAR_0, VAR_1->cy, 1);
}

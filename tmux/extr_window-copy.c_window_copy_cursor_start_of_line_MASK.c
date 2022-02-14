
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ lineflag; scalar_t__ cy; scalar_t__ oy; struct screen* backing; } ;
struct screen {struct grid* grid; } ;
struct grid {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct grid*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct window_mode_entry*,int ) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_4 (struct window_mode_entry*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_6(struct window_mode_entry *VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_2->data;
 struct screen *VAR_4 = VAR_3->backing;
 struct grid *VAR_5 = VAR_4->grid;
 u_int VAR_6;

 if (VAR_3->cx == 0 && VAR_3->lineflag == VAR_1) {
  VAR_6 = FUNC_1(VAR_4) + VAR_3->cy - VAR_3->oy;
  while (VAR_6 > 0 &&
      FUNC_0(VAR_5, VAR_6 - 1)->flags & VAR_0) {
   FUNC_2(VAR_2, 0);
   VAR_6 = FUNC_1(VAR_4) + VAR_3->cy - VAR_3->oy;
  }
 }
 FUNC_4(VAR_2, 0, VAR_3->cy);
 if (FUNC_5(VAR_2, 1))
  FUNC_3(VAR_2, VAR_3->cy, 1);
}

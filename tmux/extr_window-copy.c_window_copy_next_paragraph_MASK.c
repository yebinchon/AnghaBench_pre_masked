
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int dummy; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; int backing; struct screen screen; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 scalar_t__ FUNC_2 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct window_mode_entry *VAR_0)
{
 struct window_copy_mode_data *VAR_1 = VAR_0->data;
 struct screen *VAR_2 = &VAR_1->screen;
 u_int VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_1->backing) + VAR_1->cy - VAR_1->oy;
 VAR_3 = FUNC_0(VAR_1->backing) + FUNC_1(VAR_2) - 1;

 while (VAR_5 < VAR_3 && FUNC_2(VAR_0, VAR_5) == 0)
  VAR_5++;

 while (VAR_5 < VAR_3 && FUNC_2(VAR_0, VAR_5) > 0)
  VAR_5++;

 VAR_4 = FUNC_2(VAR_0, VAR_5);
 FUNC_3(VAR_0, VAR_4, VAR_5);
}

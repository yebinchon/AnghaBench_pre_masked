
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; struct screen* backing; } ;
struct screen {int dummy; } ;


 scalar_t__ FUNC_0 (struct screen*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct window_mode_entry*,int ) ;
 scalar_t__ FUNC_3 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,scalar_t__,char const*) ;
 int FUNC_5 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_6 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_8(struct window_mode_entry *VAR_0,
    const char *VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_0->data;
 struct screen *VAR_3 = VAR_2->backing;
 u_int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_4 = VAR_2->cx;
 VAR_5 = FUNC_0(VAR_3) + VAR_2->cy - VAR_2->oy;
 VAR_6 = FUNC_3(VAR_0, VAR_5);
 VAR_7 = FUNC_0(VAR_3) + FUNC_1(VAR_3) - 1;







 do {
  while (VAR_4 > VAR_6 ||
      FUNC_4(VAR_0, VAR_4, VAR_5, VAR_1) == VAR_8) {

   if (VAR_4 > VAR_6) {
    if (VAR_5 == VAR_7)
     return;
    FUNC_2(VAR_0, 0);
    VAR_4 = 0;

    VAR_5 = FUNC_0(VAR_3) + VAR_2->cy - VAR_2->oy;
    VAR_6 = FUNC_3(VAR_0, VAR_5);
   } else
    VAR_4++;
  }
  VAR_8 = !VAR_8;
 } while (VAR_8 == 1);

 FUNC_6(VAR_0, VAR_4, VAR_2->cy);
 if (FUNC_7(VAR_0, 1))
  FUNC_5(VAR_0, VAR_2->cy, 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; int backing; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct window_mode_entry*,int ) ;
 scalar_t__ FUNC_2 (struct window_mode_entry*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct window_mode_entry*,scalar_t__,scalar_t__,char const*) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_5 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_7(struct window_mode_entry *VAR_0,
    const char *VAR_1, int VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_0->data;
 u_int VAR_4, VAR_5;

 VAR_4 = VAR_3->cx;
 VAR_5 = FUNC_0(VAR_3->backing) + VAR_3->cy - VAR_3->oy;


 if (VAR_2 || FUNC_3(VAR_0, VAR_4, VAR_5, VAR_1)) {
  for (;;) {
   if (VAR_4 > 0) {
    VAR_4--;
    if (!FUNC_3(VAR_0, VAR_4, VAR_5, VAR_1))
     break;
   } else {
    if (VAR_3->cy == 0 &&
        (FUNC_0(VAR_3->backing) == 0 ||
        VAR_3->oy >= FUNC_0(VAR_3->backing) - 1))
     goto out;
    FUNC_1(VAR_0, 0);

    VAR_5 = FUNC_0(VAR_3->backing) + VAR_3->cy - VAR_3->oy;
    VAR_4 = FUNC_2(VAR_0, VAR_5);


    if (VAR_4 > 0 &&
        FUNC_3(VAR_0, VAR_4 - 1, VAR_5, VAR_1))
     break;
   }
  }
 }


 while (VAR_4 > 0 && !FUNC_3(VAR_0, VAR_4 - 1, VAR_5, VAR_1))
  VAR_4--;

out:
 FUNC_5(VAR_0, VAR_4, VAR_3->cy);
 if (FUNC_6(VAR_0, 1))
  FUNC_4(VAR_0, VAR_3->cy, 1);
}

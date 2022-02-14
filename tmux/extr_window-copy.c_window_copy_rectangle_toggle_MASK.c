
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int rectflag; scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; int backing; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_5(struct window_mode_entry *VAR_0)
{
 struct window_copy_mode_data *VAR_1 = VAR_0->data;
 u_int VAR_2, VAR_3;

 VAR_1->rectflag = !VAR_1->rectflag;

 VAR_3 = FUNC_0(VAR_1->backing) + VAR_1->cy - VAR_1->oy;
 VAR_2 = FUNC_1(VAR_0, VAR_3);
 if (VAR_1->cx > VAR_2)
  FUNC_3(VAR_0, VAR_2, VAR_1->cy);

 FUNC_4(VAR_0, 1);
 FUNC_2(VAR_0);
}

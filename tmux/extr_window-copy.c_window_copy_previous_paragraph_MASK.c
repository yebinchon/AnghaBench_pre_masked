
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; int backing; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_2 (struct window_mode_entry*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct window_mode_entry *VAR_0)
{
 struct window_copy_mode_data *VAR_1 = VAR_0->data;
 u_int VAR_2;

 VAR_2 = FUNC_0(VAR_1->backing) + VAR_1->cy - VAR_1->oy;

 while (VAR_2 > 0 && FUNC_1(VAR_0, VAR_2) == 0)
  VAR_2--;

 while (VAR_2 > 0 && FUNC_1(VAR_0, VAR_2) > 0)
  VAR_2--;

 FUNC_2(VAR_0, 0, VAR_2);
}

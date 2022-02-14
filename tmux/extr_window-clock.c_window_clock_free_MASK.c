
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_clock_mode_data* data; } ;
struct window_clock_mode_data {int screen; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct window_clock_mode_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct window_mode_entry *VAR_0)
{
 struct window_clock_mode_data *VAR_1 = VAR_0->data;

 FUNC_0(&VAR_1->timer);
 FUNC_2(&VAR_1->screen);
 FUNC_1(VAR_1);
}

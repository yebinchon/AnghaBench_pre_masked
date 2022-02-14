
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_mode_entry {struct window_clock_mode_data* data; } ;
struct screen {int dummy; } ;
struct window_clock_mode_data {struct screen screen; } ;


 int FUNC_0 (struct screen*,int ,int ,int ) ;
 int FUNC_1 (struct window_mode_entry*) ;

__attribute__((used)) static void
FUNC_2(struct window_mode_entry *VAR_0, u_int VAR_1, u_int VAR_2)
{
 struct window_clock_mode_data *VAR_3 = VAR_0->data;
 struct screen *VAR_4 = &VAR_3->screen;

 FUNC_0(VAR_4, VAR_1, VAR_2, 0);
 FUNC_1(VAR_0);
}

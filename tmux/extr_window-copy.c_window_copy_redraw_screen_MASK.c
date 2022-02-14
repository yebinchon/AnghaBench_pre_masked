
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int screen; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct window_mode_entry*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct window_mode_entry *VAR_0)
{
 struct window_copy_mode_data *VAR_1 = VAR_0->data;

 FUNC_1(VAR_0, 0, FUNC_0(&VAR_1->screen));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {TYPE_1__* backing; } ;
struct grid_cell {int flags; int data; } ;
struct TYPE_2__ {int grid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct grid_cell*) ;
 int FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2(struct window_mode_entry *VAR_1, u_int VAR_2, u_int VAR_3,
    const char *VAR_4)
{
 struct window_copy_mode_data *VAR_5 = VAR_1->data;
 struct grid_cell VAR_6;

 FUNC_0(VAR_5->backing->grid, VAR_2, VAR_3, &VAR_6);
 if (VAR_6.flags & VAR_0)
  return (0);
 return (FUNC_1(VAR_4, &VAR_6.data));
}

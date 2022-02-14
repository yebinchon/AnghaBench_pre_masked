
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {TYPE_1__* backing; } ;
struct TYPE_2__ {int grid; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_1(struct window_mode_entry *VAR_0, u_int VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_0->data;

 return (FUNC_0(VAR_2->backing->grid, VAR_1));
}

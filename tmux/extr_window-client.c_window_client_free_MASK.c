
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct window_mode_entry {struct window_client_modedata* data; } ;
struct window_client_modedata {size_t item_size; struct window_client_modedata* command; struct window_client_modedata* format; struct window_client_modedata* item_list; int data; } ;


 int FUNC_0 (struct window_client_modedata*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct window_client_modedata) ;

__attribute__((used)) static void
FUNC_3(struct window_mode_entry *VAR_0)
{
 struct window_client_modedata *VAR_1 = VAR_0->data;
 u_int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1->data);

 for (VAR_2 = 0; VAR_2 < VAR_1->item_size; VAR_2++)
  FUNC_2(VAR_1->item_list[VAR_2]);
 FUNC_0(VAR_1->item_list);

 FUNC_0(VAR_1->format);
 FUNC_0(VAR_1->command);

 FUNC_0(VAR_1);
}

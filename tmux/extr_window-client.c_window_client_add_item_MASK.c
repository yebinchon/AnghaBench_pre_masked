
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_client_modedata {scalar_t__ item_size; struct window_client_itemdata** item_list; } ;
struct window_client_itemdata {int dummy; } ;


 struct window_client_itemdata* FUNC_0 (int,int) ;
 struct window_client_itemdata** FUNC_1 (struct window_client_itemdata**,scalar_t__,int) ;

__attribute__((used)) static struct window_client_itemdata *
FUNC_2(struct window_client_modedata *VAR_0)
{
 struct window_client_itemdata *VAR_1;

 VAR_0->item_list = FUNC_1(VAR_0->item_list, VAR_0->item_size + 1,
     sizeof *VAR_0->item_list);
 VAR_1 = VAR_0->item_list[VAR_0->item_size++] = FUNC_0(1, sizeof *VAR_1);
 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu_data {int menu; int s; int data; int (* cb ) (int ,int ,int ,int ) ;int * item; } ;
struct client {struct menu_data* overlay_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct menu_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct client *VAR_2)
{
 struct menu_data *VAR_3 = VAR_2->overlay_data;

 if (VAR_3->item != ((void*)0))
  FUNC_0(VAR_3->item);

 if (VAR_3->cb != ((void*)0))
  VAR_3->cb(VAR_3->menu, VAR_1, VAR_0, VAR_3->data);

 FUNC_3(&VAR_3->s);
 FUNC_2(VAR_3->menu);
 FUNC_1(VAR_3);
}

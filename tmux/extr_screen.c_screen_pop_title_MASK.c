
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_title_entry {struct screen_title_entry* text; } ;
struct screen {int * titles; } ;


 struct screen_title_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct screen_title_entry*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct screen_title_entry*) ;
 int FUNC_3 (struct screen*,struct screen_title_entry*) ;

void
FUNC_4(struct screen *VAR_1)
{
 struct screen_title_entry *VAR_2;

 if (VAR_1->titles == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_1->titles);
 if (VAR_2 != ((void*)0)) {
  FUNC_3(VAR_1, VAR_2->text);

  FUNC_1(VAR_1->titles, VAR_2, VAR_0);
  FUNC_2(VAR_2->text);
  FUNC_2(VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_title_entry {int text; } ;
struct screen {int * titles; int title; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct screen_title_entry*,int ) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct screen *VAR_1)
{
 struct screen_title_entry *VAR_2;

 if (VAR_1->titles == ((void*)0)) {
  VAR_1->titles = FUNC_2(sizeof *VAR_1->titles);
  FUNC_0(VAR_1->titles);
 }
 VAR_2 = FUNC_2(sizeof *VAR_2);
 VAR_2->text = FUNC_3(VAR_1->title);
 FUNC_1(VAR_1->titles, VAR_2, VAR_0);
}

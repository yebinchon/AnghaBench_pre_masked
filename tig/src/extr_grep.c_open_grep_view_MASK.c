
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int pos; scalar_t__ lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 struct view VAR_2 ;
 scalar_t__ FUNC_2 (struct view*) ;
 int FUNC_3 (struct view*,struct view*,int ) ;

void
FUNC_4(struct view *VAR_3)
{
 struct view *VAR_4 = &VAR_2;
 bool VAR_5 = VAR_3 == VAR_4;

 if ((!VAR_3 && FUNC_2(VAR_4)) || (VAR_4->lines && !VAR_5)) {
  FUNC_3(VAR_3, VAR_4, VAR_0);
 } else {
  if (FUNC_1()) {
   FUNC_0(&VAR_4->pos);
   FUNC_3(VAR_3, VAR_4, VAR_1);
  }
 }
}

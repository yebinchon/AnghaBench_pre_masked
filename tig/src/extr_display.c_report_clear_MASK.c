
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;


 size_t VAR_0 ;
 struct view** VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct view*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(void)
{
 struct view *VAR_5 = VAR_1[VAR_0];

 if (!VAR_5)
  return;

 if (!VAR_2 && !VAR_3) {
  FUNC_2(VAR_4);
  FUNC_0();
 }
 VAR_3 = 1;
 FUNC_1(VAR_5);
}

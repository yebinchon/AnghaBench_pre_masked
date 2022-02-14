
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_visitor_state {void* member_1; int member_3; int * member_2; int member_0; } ;
typedef int key_visitor_fn ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct key_visitor_state*,int,int) ;
 int FUNC_2 (int ,struct key_visitor_state*) ;
 int * VAR_1 ;

bool
FUNC_3(key_visitor_fn VAR_2, void *VAR_3, bool VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  struct key_visitor_state VAR_6 = { VAR_2, VAR_3, &VAR_1[VAR_5], VAR_4 };

  if (!FUNC_2(VAR_0, &VAR_6)
      || !FUNC_1(&VAR_6, 1, 1)
      || !FUNC_1(&VAR_6, 1, 0)
      || !FUNC_1(&VAR_6, 0, 0))
   return 0;
 }

 return 1;
}

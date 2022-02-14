
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vatpic {struct vm* vm; } ;


 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 int FUNC_2 (struct vatpic*,int) ;
 struct vatpic* FUNC_3 (int) ;

struct vatpic *
FUNC_4(struct vm *VAR_0)
{
 struct vatpic *VAR_1;

 VAR_1 = FUNC_3(sizeof(struct vatpic));
 FUNC_1(VAR_1);
 FUNC_2(VAR_1, sizeof(struct vatpic));
 VAR_1->vm = VAR_0;

 FUNC_0(VAR_1);

 return (VAR_1);
}

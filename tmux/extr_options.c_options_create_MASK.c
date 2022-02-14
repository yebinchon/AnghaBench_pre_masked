
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {struct options* parent; int tree; } ;


 int FUNC_0 (int *) ;
 struct options* FUNC_1 (int,int) ;

struct options *
FUNC_2(struct options *VAR_0)
{
 struct options *VAR_1;

 VAR_1 = FUNC_1(1, sizeof *VAR_1);
 FUNC_0(&VAR_1->tree);
 VAR_1->parent = VAR_0;
 return (VAR_1);
}

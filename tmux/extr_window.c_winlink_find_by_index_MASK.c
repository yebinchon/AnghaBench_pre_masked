
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlinks {int dummy; } ;
struct winlink {int idx; } ;


 struct winlink* FUNC_0 (int ,struct winlinks*,struct winlink*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

struct winlink *
FUNC_2(struct winlinks *VAR_1, int VAR_2)
{
 struct winlink VAR_3;

 if (VAR_2 < 0)
  FUNC_1("bad index");

 VAR_3.idx = VAR_2;
 return (FUNC_0(VAR_0, VAR_1, &VAR_3));
}

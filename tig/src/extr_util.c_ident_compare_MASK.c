
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ident {int name; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(const struct ident *VAR_0, const struct ident *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return (!!VAR_0) - (!!VAR_1);
 if (!VAR_0->name || !VAR_1->name)
  return (!!VAR_0->name) - (!!VAR_1->name);
 return FUNC_0(VAR_0->name, VAR_1->name);
}

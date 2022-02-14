
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybinding {size_t keys; } ;
struct key {int dummy; } ;


 int FUNC_0 (struct keybinding const*,struct key const*,size_t,int*) ;

__attribute__((used)) static bool
FUNC_1(const struct keybinding *VAR_0, const struct key VAR_1[],
    size_t VAR_2, bool *VAR_3)
{
 if (VAR_0->keys != VAR_2)
  return 0;
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}

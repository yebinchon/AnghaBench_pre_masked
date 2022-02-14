
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybinding {int keys; int key; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int ,size_t*,char*,char const*,char const*) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_1, size_t *VAR_2, const struct keybinding *VAR_3, bool VAR_4)
{
 const char *VAR_5 = *VAR_2 > 0 ? ", " : "";
 const char *VAR_6 = FUNC_0(VAR_3->key, VAR_3->keys, VAR_4);

 return FUNC_1(VAR_1, VAR_0, VAR_2, "%s%s", VAR_5, VAR_6);
}

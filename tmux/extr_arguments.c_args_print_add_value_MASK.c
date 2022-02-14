
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_value {int value; } ;
struct args_entry {char* flag; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char**,size_t*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char **VAR_0, size_t *VAR_1, struct args_entry *VAR_2,
    struct args_value *VAR_3)
{
 char *VAR_4;

 if (**VAR_0 != '\0')
  FUNC_1(VAR_0, VAR_1, " -%c ", VAR_2->flag);
 else
  FUNC_1(VAR_0, VAR_1, "-%c ", VAR_2->flag);

 VAR_4 = FUNC_0(VAR_3->value);
 FUNC_1(VAR_0, VAR_1, "%s", VAR_4);
 FUNC_2(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ_entry {char* value; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2(struct environ_entry *VAR_0)
{
 const char *VAR_1 = VAR_0->value;
 char VAR_2, *VAR_3, *VAR_4;

 VAR_3 = VAR_4 = FUNC_1(FUNC_0(VAR_1) * 2 + 1);
 while ((VAR_2 = *VAR_1++) != '\0') {

  if (VAR_2 == '$' || VAR_2 == '`' || VAR_2 == '"' || VAR_2 == '\\')
   *VAR_3++ = '\\';
  *VAR_3++ = VAR_2;
 }
 *VAR_3 = '\0';

 return (VAR_4);
}

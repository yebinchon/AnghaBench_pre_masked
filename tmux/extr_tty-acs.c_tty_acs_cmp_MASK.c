
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty_acs_entry {int key; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct tty_acs_entry *VAR_2 = VAR_1;
 u_char VAR_3;

 VAR_3 = *(u_char *) VAR_0;
 return (VAR_3 - VAR_2->key);
}

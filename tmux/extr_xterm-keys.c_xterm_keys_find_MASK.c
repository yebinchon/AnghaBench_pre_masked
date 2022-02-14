
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct xterm_keys_entry {int key; int template; } ;
typedef int key_code ;


 int VAR_0 ;
 size_t FUNC_0 (struct xterm_keys_entry*) ;
 int FUNC_1 (int ,char const*,size_t,size_t*,int*) ;
 struct xterm_keys_entry* VAR_1 ;

int
FUNC_2(const char *VAR_2, size_t VAR_3, size_t *VAR_4, key_code *VAR_5)
{
 const struct xterm_keys_entry *VAR_6;
 u_int VAR_7;
 int VAR_8;
 key_code VAR_9;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  VAR_6 = &VAR_1[VAR_7];

  VAR_8 = FUNC_1(VAR_6->template, VAR_2, VAR_3, VAR_4,
      &VAR_9);
  if (VAR_8 == -1)
   continue;
  if (VAR_8 == 0)
   *VAR_5 = (VAR_6->key|VAR_9|VAR_0);
  return (VAR_8);
 }
 return (-1);
}

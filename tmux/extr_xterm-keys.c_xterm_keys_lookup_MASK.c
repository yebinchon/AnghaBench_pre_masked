
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct xterm_keys_entry {int key; int template; } ;
typedef int key_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct xterm_keys_entry*) ;
 size_t FUNC_1 (char*,char*) ;
 char* FUNC_2 (int ) ;
 struct xterm_keys_entry* VAR_5 ;

char *
FUNC_3(key_code VAR_6)
{
 const struct xterm_keys_entry *VAR_7;
 u_int VAR_8;
 key_code VAR_9;
 char *VAR_10;

 VAR_9 = 1;
 if (VAR_6 & VAR_3)
  VAR_9 += 1;
 if (VAR_6 & VAR_1)
  VAR_9 += 2;
 if (VAR_6 & VAR_0)
  VAR_9 += 4;





 if (VAR_9 == 1)
  return (((void*)0));






 if ((VAR_6 & (VAR_1|VAR_4)) == VAR_1)
  return (((void*)0));


 VAR_6 &= VAR_2;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  VAR_7 = &VAR_5[VAR_8];
  if (VAR_6 == VAR_7->key)
   break;
 }
 if (VAR_8 == FUNC_0(VAR_5))
  return (((void*)0));


 VAR_10 = FUNC_2(VAR_7->template);
 VAR_10[FUNC_1(VAR_10, "_")] = '0' + VAR_9;
 return (VAR_10);
}

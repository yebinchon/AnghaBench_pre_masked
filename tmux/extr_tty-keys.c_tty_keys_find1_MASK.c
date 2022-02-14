
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_key {char const ch; scalar_t__ key; struct tty_key* right; struct tty_key* left; struct tty_key* next; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct tty_key *
FUNC_0(struct tty_key *VAR_1, const char *VAR_2, size_t VAR_3, size_t *VAR_4)
{

 if (VAR_3 == 0)
  return (((void*)0));


 if (VAR_1 == ((void*)0))
  return (((void*)0));


 if (VAR_1->ch == *VAR_2) {

  VAR_2++; VAR_3--;
  (*VAR_4)++;


  if (VAR_3 == 0 || (VAR_1->next == ((void*)0) && VAR_1->key != VAR_0))
   return (VAR_1);


  VAR_1 = VAR_1->next;
 } else {
  if (*VAR_2 < VAR_1->ch)
   VAR_1 = VAR_1->left;
  else if (*VAR_2 > VAR_1->ch)
   VAR_1 = VAR_1->right;
 }


 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4));
}

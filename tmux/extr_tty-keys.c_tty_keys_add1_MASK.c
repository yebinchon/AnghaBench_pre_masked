
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_key {char ch; struct tty_key* right; struct tty_key* left; struct tty_key* next; int key; } ;
typedef int key_code ;


 int VAR_0 ;
 struct tty_key* FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct tty_key **VAR_1, const char *VAR_2, key_code VAR_3)
{
 struct tty_key *VAR_4;


 VAR_4 = *VAR_1;
 if (VAR_4 == ((void*)0)) {
  VAR_4 = *VAR_1 = FUNC_0(1, sizeof *VAR_4);
  VAR_4->ch = *VAR_2;
  VAR_4->key = VAR_0;
 }


 if (*VAR_2 == VAR_4->ch) {

  VAR_2++;


  if (*VAR_2 == '\0') {
   VAR_4->key = VAR_3;
   return;
  }


  VAR_1 = &VAR_4->next;
 } else {
  if (*VAR_2 < VAR_4->ch)
   VAR_1 = &VAR_4->left;
  else if (*VAR_2 > VAR_4->ch)
   VAR_1 = &VAR_4->right;
 }


 FUNC_1(VAR_1, VAR_2, VAR_3);
}

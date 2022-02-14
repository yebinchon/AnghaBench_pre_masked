
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_key {struct tty_key* right; struct tty_key* left; struct tty_key* next; } ;


 int FUNC_0 (struct tty_key*) ;

__attribute__((used)) static void
FUNC_1(struct tty_key *VAR_0)
{
 if (VAR_0->next != ((void*)0))
  FUNC_1(VAR_0->next);
 if (VAR_0->left != ((void*)0))
  FUNC_1(VAR_0->left);
 if (VAR_0->right != ((void*)0))
  FUNC_1(VAR_0->right);
 FUNC_0(VAR_0);
}

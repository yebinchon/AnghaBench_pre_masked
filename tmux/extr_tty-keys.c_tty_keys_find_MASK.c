
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_key {int dummy; } ;
struct tty {int key_tree; } ;


 struct tty_key* FUNC_0 (int ,char const*,size_t,size_t*) ;

__attribute__((used)) static struct tty_key *
FUNC_1(struct tty *VAR_0, const char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
 *VAR_3 = 0;
 return (FUNC_0(VAR_0->key_tree, VAR_1, VAR_2, VAR_3));
}

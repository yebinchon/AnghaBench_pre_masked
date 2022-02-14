
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_key {int key; } ;
struct tty {int key_tree; } ;
typedef int key_code ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int ,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char const*,int ) ;
 struct tty_key* FUNC_4 (struct tty*,char const*,int ,size_t*) ;

__attribute__((used)) static void
FUNC_5(struct tty *VAR_0, const char *VAR_1, key_code VAR_2)
{
 struct tty_key *VAR_3;
 size_t VAR_4;
 const char *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if ((VAR_3 = FUNC_4(VAR_0, VAR_1, FUNC_2(VAR_1), &VAR_4)) == ((void*)0)) {
  FUNC_1("new key %s: 0x%llx (%s)", VAR_1, VAR_2, VAR_5);
  FUNC_3(&VAR_0->key_tree, VAR_1, VAR_2);
 } else {
  FUNC_1("replacing key %s: 0x%llx (%s)", VAR_1, VAR_2, VAR_5);
  VAR_3->key = VAR_2;
 }
}

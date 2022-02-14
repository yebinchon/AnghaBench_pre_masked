
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_info {char* help; int name; } ;
struct doc_action_iterator {char const* group; int end_group; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static bool
FUNC_4(void *VAR_0, const struct request_info *VAR_1, const char *VAR_2)
{
 struct doc_action_iterator *VAR_3 = VAR_0;

 if (VAR_3->group != VAR_2) {
  if (VAR_3->end_group) {
   FUNC_1(0);
   FUNC_3("\n");
  }

  FUNC_0(VAR_2);
  FUNC_1(1);

  VAR_3->group = VAR_2;
  VAR_3->end_group = 1;
 }

 FUNC_3("|%-24s|%s\n", FUNC_2(VAR_1->name), VAR_1->help);
 return 1;
}

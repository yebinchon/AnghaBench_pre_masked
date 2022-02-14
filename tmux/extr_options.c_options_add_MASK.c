
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_entry {int name; struct options* owner; } ;
struct options {int tree; } ;


 int FUNC_0 (int ,int *,struct options_entry*) ;
 struct options_entry* FUNC_1 (struct options*,char const*) ;
 int FUNC_2 (struct options_entry*) ;
 int VAR_0 ;
 struct options_entry* FUNC_3 (int,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct options_entry *
FUNC_5(struct options *VAR_1, const char *VAR_2)
{
 struct options_entry *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3);

 VAR_3 = FUNC_3(1, sizeof *VAR_3);
 VAR_3->owner = VAR_1;
 VAR_3->name = FUNC_4(VAR_2);

 FUNC_0(VAR_0, &VAR_1->tree, VAR_3);
 return (VAR_3);
}

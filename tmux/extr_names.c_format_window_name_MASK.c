
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int id; int options; int active; } ;
struct format_tree {int dummy; } ;


 int VAR_0 ;
 struct format_tree* FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (struct format_tree*,int ) ;
 int FUNC_2 (struct format_tree*,struct window*) ;
 char* FUNC_3 (struct format_tree*,char const*) ;
 int FUNC_4 (struct format_tree*) ;
 char* FUNC_5 (int ,char*) ;

__attribute__((used)) static char *
FUNC_6(struct window *VAR_1)
{
 struct format_tree *VAR_2;
 const char *VAR_3;
 char *VAR_4;

 VAR_2 = FUNC_0(((void*)0), ((void*)0), VAR_0|VAR_1->id, 0);
 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_1->active);

 VAR_3 = FUNC_5(VAR_1->options, "automatic-rename-format");
 VAR_4 = FUNC_3(VAR_2, VAR_3);

 FUNC_4(VAR_2);
 return (VAR_4);
}

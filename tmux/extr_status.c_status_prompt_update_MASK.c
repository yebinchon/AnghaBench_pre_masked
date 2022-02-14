
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_tree {int dummy; } ;
struct client {char* prompt_string; char* prompt_buffer; int flags; scalar_t__ prompt_hindex; int prompt_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct format_tree* FUNC_0 (struct client*,int *,int ,int ) ;
 int FUNC_1 (struct format_tree*,struct client*,int *,int *,int *) ;
 void* FUNC_2 (struct format_tree*,char const*) ;
 int FUNC_3 (struct format_tree*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void
FUNC_7(struct client *VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct format_tree *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_0(VAR_2, ((void*)0), VAR_1, 0);
 FUNC_1(VAR_5, VAR_2, ((void*)0), ((void*)0), ((void*)0));

 VAR_6 = FUNC_2(VAR_5, VAR_4);

 FUNC_4(VAR_2->prompt_string);
 VAR_2->prompt_string = FUNC_2(VAR_5, VAR_3);

 FUNC_4(VAR_2->prompt_buffer);
 VAR_2->prompt_buffer = FUNC_5(VAR_6);
 VAR_2->prompt_index = FUNC_6(VAR_2->prompt_buffer);

 VAR_2->prompt_hindex = 0;

 VAR_2->flags |= VAR_0;

 FUNC_4(VAR_6);
 FUNC_3(VAR_5);
}

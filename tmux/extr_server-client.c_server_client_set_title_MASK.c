
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int options; } ;
struct format_tree {int dummy; } ;
struct client {char* title; int tty; struct session* session; } ;


 int VAR_0 ;
 struct format_tree* FUNC_0 (struct client*,int *,int ,int ) ;
 int FUNC_1 (struct format_tree*,struct client*,int *,int *,int *) ;
 char* FUNC_2 (struct format_tree*,char const*) ;
 int FUNC_3 (struct format_tree*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct client *VAR_1)
{
 struct session *VAR_2 = VAR_1->session;
 const char *VAR_3;
 char *VAR_4;
 struct format_tree *VAR_5;

 VAR_3 = FUNC_5(VAR_2->options, "set-titles-string");

 VAR_5 = FUNC_0(VAR_1, ((void*)0), VAR_0, 0);
 FUNC_1(VAR_5, VAR_1, ((void*)0), ((void*)0), ((void*)0));

 VAR_4 = FUNC_2(VAR_5, VAR_3);
 if (VAR_1->title == ((void*)0) || FUNC_6(VAR_4, VAR_1->title) != 0) {
  FUNC_4(VAR_1->title);
  VAR_1->title = FUNC_8(VAR_4);
  FUNC_7(&VAR_1->tty, VAR_1->title);
 }
 FUNC_4(VAR_4);

 FUNC_3(VAR_5);
}

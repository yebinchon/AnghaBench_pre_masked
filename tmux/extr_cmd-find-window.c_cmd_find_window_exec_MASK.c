
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args {char** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int FUNC_0 (struct args*) ;
 int FUNC_1 (struct args*,char) ;
 struct args* FUNC_2 (char*,int,char**) ;
 int FUNC_3 (struct args*,float,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct window_pane*,int *,TYPE_1__*,struct args*) ;
 int VAR_1 ;
 int FUNC_6 (char**,char*,char const*,...) ;

__attribute__((used)) static enum cmd_retval
FUNC_7(struct cmd *VAR_2, struct cmdq_item *VAR_3)
{
 struct args *VAR_4 = VAR_2->args, *VAR_5;
 struct window_pane *VAR_6 = VAR_3->target.wp;
 const char *VAR_7 = VAR_4->argv[0];
 char *VAR_8, *VAR_9 = { ((void*)0) };
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_4, 'C');
 VAR_11 = FUNC_1(VAR_4, 'N');
 VAR_12 = FUNC_1(VAR_4, 'T');

 if (!VAR_10 && !VAR_11 && !VAR_12)
  VAR_10 = VAR_11 = VAR_12 = 1;

 if (!FUNC_1(VAR_4, 'r')) {
  if (VAR_10 && VAR_11 && VAR_12) {
   FUNC_6(&VAR_8,
       "#{||:"
       "#{C:%s},#{||:#{m:*%s*,#{window_name}},"
       "#{m:*%s*,#{pane_title}}}}",
       VAR_7, VAR_7, VAR_7);
  } else if (VAR_10 && VAR_11) {
   FUNC_6(&VAR_8,
       "#{||:#{C:%s},#{m:*%s*,#{window_name}}}",
       VAR_7, VAR_7);
  } else if (VAR_10 && VAR_12) {
   FUNC_6(&VAR_8,
       "#{||:#{C:%s},#{m:*%s*,#{pane_title}}}",
       VAR_7, VAR_7);
  } else if (VAR_11 && VAR_12) {
   FUNC_6(&VAR_8,
       "#{||:#{m:*%s*,#{window_name}},"
       "#{m:*%s*,#{pane_title}}}",
       VAR_7, VAR_7);
  } else if (VAR_10)
   FUNC_6(&VAR_8, "#{C:%s}", VAR_7);
  else if (VAR_11)
   FUNC_6(&VAR_8, "#{m:*%s*,#{window_name}}", VAR_7);
  else
   FUNC_6(&VAR_8, "#{m:*%s*,#{pane_title}}", VAR_7);
 } else {
  if (VAR_10 && VAR_11 && VAR_12) {
   FUNC_6(&VAR_8,
       "#{||:"
       "#{C/r:%s},#{||:#{m/r:%s,#{window_name}},"
       "#{m/r:%s,#{pane_title}}}}",
       VAR_7, VAR_7, VAR_7);
  } else if (VAR_10 && VAR_11) {
   FUNC_6(&VAR_8,
       "#{||:#{C/r:%s},#{m/r:%s,#{window_name}}}",
       VAR_7, VAR_7);
  } else if (VAR_10 && VAR_12) {
   FUNC_6(&VAR_8,
       "#{||:#{C/r:%s},#{m/r:%s,#{pane_title}}}",
       VAR_7, VAR_7);
  } else if (VAR_11 && VAR_12) {
   FUNC_6(&VAR_8,
       "#{||:#{m/r:%s,#{window_name}},"
       "#{m/r:%s,#{pane_title}}}",
       VAR_7, VAR_7);
  } else if (VAR_10)
   FUNC_6(&VAR_8, "#{C/r:%s}", VAR_7);
  else if (VAR_11)
   FUNC_6(&VAR_8, "#{m/r:%s,#{window_name}}", VAR_7);
  else
   FUNC_6(&VAR_8, "#{m/r:%s,#{pane_title}}", VAR_7);
 }

 VAR_5 = FUNC_2("", 1, &VAR_9);
 if (FUNC_1(VAR_4, 'Z'))
  FUNC_3(VAR_5, 'Z', ((void*)0));
 FUNC_3(VAR_5, 'f', VAR_8);

 FUNC_5(VAR_6, &VAR_1, &VAR_3->target, VAR_5);

 FUNC_0(VAR_5);
 FUNC_4(VAR_8);

 return (VAR_0);
}

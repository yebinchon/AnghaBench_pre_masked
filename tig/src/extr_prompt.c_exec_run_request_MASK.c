
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {int watch; int env; } ;
struct TYPE_3__ {scalar_t__ internal; scalar_t__ exit; scalar_t__ confirm; int quick; int echo; int silent; } ;
struct run_request {TYPE_1__ flags; int argv; } ;
typedef enum request { ____Placeholder_request } request ;
typedef int cmd ;
struct TYPE_4__ {int cdup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char const***,char const**,int,int) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const**,int*,char*) ;
 int FUNC_3 (int ,char*,int,char*) ;
 scalar_t__ FUNC_4 (char const**,char*,int,char*) ;
 int FUNC_5 (char const**) ;
 int FUNC_6 (char const**,int ,int ,int,int ,int ,int,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct view*,char const**) ;
 scalar_t__ FUNC_10 (char*,char*,char*,char const*) ;
 scalar_t__ FUNC_11 (int *) ;

enum request
FUNC_12(struct view *VAR_7, struct run_request *VAR_8)
{
 const char **VAR_9 = ((void*)0);
 bool VAR_10 = 0;
 enum request VAR_11 = VAR_0;
 char VAR_12[VAR_4];
 const char *VAR_13[VAR_3];
 int VAR_14 = 0;

 if (!FUNC_3(VAR_8->argv, VAR_12, sizeof(VAR_12), " ")
     || !FUNC_2(VAR_13, &VAR_14, VAR_12)
     || !FUNC_0(VAR_7->env, &VAR_9, VAR_13, 0, 1)
     || !VAR_9) {
  FUNC_8("Failed to format arguments");
  return VAR_0;
 }

 if (VAR_8->flags.internal) {
  VAR_11 = FUNC_9(VAR_7, VAR_9);

 } else {
  VAR_10 = !VAR_8->flags.confirm;

  if (VAR_8->flags.confirm) {
   char VAR_15[VAR_5], VAR_16[VAR_5];
   const char *VAR_17 = VAR_8->flags.exit ? " and exit" : "";

   if (FUNC_4(VAR_9, VAR_15, sizeof(VAR_15), " ") &&
       FUNC_10(VAR_16, "Run `%s`%s?", VAR_15, VAR_17) &&
       FUNC_7(VAR_16)) {
    VAR_10 = 1;
   }
  }

  if (VAR_10)
   FUNC_6(VAR_9, VAR_6.cdup, VAR_8->flags.silent,
          !VAR_8->flags.exit, VAR_8->flags.echo, VAR_8->flags.quick, 0, "");
 }

 if (VAR_9)
  FUNC_1(VAR_9);
 FUNC_5(VAR_9);

 if (VAR_11 == VAR_0) {
  if (VAR_8->flags.confirm && !VAR_10)
   VAR_11 = VAR_0;

  else if (VAR_8->flags.exit)
   VAR_11 = VAR_1;

  else if (!VAR_8->flags.internal && FUNC_11(&VAR_7->watch))
   VAR_11 = VAR_2;

 }

 return VAR_11;
}

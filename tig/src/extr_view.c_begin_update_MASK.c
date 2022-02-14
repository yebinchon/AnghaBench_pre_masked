
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {char const* dir; TYPE_1__* ops; int io; int name; scalar_t__* argv; int prev; int env; int unrefreshable; scalar_t__ pipe; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__**,char const**,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct view*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (struct view*,int ) ;
 int FUNC_9 (struct view*,int) ;
 int FUNC_10 (struct view*,int ) ;
 scalar_t__ FUNC_11 (struct view*,int) ;

enum status_code
FUNC_12(struct view *VAR_7, const char *VAR_8, const char **VAR_9, enum open_flags VAR_10)
{
 bool VAR_11 = !!(VAR_10 & (VAR_0));
 bool VAR_12 = VAR_10 & (VAR_2 | VAR_1 | VAR_3);

 if (FUNC_11(VAR_7, VAR_10))
  return VAR_4;

 if (VAR_7->pipe) {
  if (VAR_11)
   FUNC_4(VAR_7->pipe);
  else
   FUNC_2(VAR_7, 1);
 }

 VAR_7->unrefreshable = FUNC_7(VAR_10);

 if (!VAR_12 && VAR_9) {
  bool VAR_13 = !FUNC_10(VAR_7, VAR_5) || VAR_6;

  VAR_7->dir = VAR_8;
  if (!FUNC_0(VAR_7->env, &VAR_7->argv, VAR_9, !VAR_7->prev, VAR_13))
   return FUNC_3("Failed to format %s arguments", VAR_7->name);
 }

 if (VAR_7->argv && VAR_7->argv[0] &&
     !FUNC_9(VAR_7, VAR_10))
  return FUNC_3("Failed to open %s view", VAR_7->name);

 if (FUNC_6(VAR_10)) {
  if (!FUNC_5(&VAR_7->io, "%s", ""))
   FUNC_1("Failed to open stdin");
 }

 if (!VAR_11)
  FUNC_8(VAR_7, VAR_7->ops->id);

 return VAR_4;
}

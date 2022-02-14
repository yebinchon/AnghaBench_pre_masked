
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {char const** argv; TYPE_2__* ops; int ref; TYPE_1__* env; int encoding; struct blob_state* private; } ;
struct blob_state {int file; scalar_t__* commit; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {char* commit; scalar_t__* file; int * blob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct view*,int *,char const**,int) ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (struct view*,int ) ;
 int FUNC_5 (char const**,int *,int,int *,int) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,char*,char const*,scalar_t__*) ;
 int FUNC_9 (scalar_t__*,char const*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static enum status_code
FUNC_12(struct view *VAR_5, enum open_flags VAR_6)
{
 struct blob_state *VAR_7 = VAR_5->private;
 static const char *VAR_8[] = {
  "git", "cat-file", "blob", "%(blob)", ((void*)0)
 };
 const char **VAR_9 = (VAR_6 & (VAR_0 | VAR_1)) ? VAR_5->argv : VAR_8;

 if (VAR_9 != VAR_8) {
  VAR_7->file = FUNC_2(VAR_5->env->file);
  VAR_7->commit[0] = 0;
 }

 if (!VAR_7->file && !VAR_5->env->blob[0] && VAR_5->env->file[0]) {
  const char *VAR_10 = VAR_5->env->commit[0] && !FUNC_10(VAR_5->env->commit)
       ? VAR_5->env->commit : "HEAD";
  char VAR_11[VAR_3];
  const char *VAR_12[] = {
   "git", "rev-parse", VAR_11, ((void*)0)
  };

  if (!FUNC_8(VAR_11, "%s:%s", VAR_10, VAR_5->env->file) ||
      !FUNC_5(VAR_12, VAR_5->env->blob, sizeof(VAR_5->env->blob), ((void*)0), 0))
   return FUNC_1("Failed to resolve blob from file name");

  FUNC_9(VAR_7->commit, VAR_10, FUNC_11(VAR_10));
 }

 if (!VAR_7->file && !VAR_5->env->blob[0])
  return FUNC_1("No file chosen, press %s to open tree view",
        FUNC_4(VAR_5, VAR_2));

 VAR_5->encoding = FUNC_3(VAR_5->env->file, VAR_4);

 if (*VAR_5->env->file)
  FUNC_6(VAR_5->ref, VAR_5->env->file);
 else
  FUNC_7(VAR_5->ref, VAR_5->ops->id);

 return FUNC_0(VAR_5, ((void*)0), VAR_9, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {char* rev; char* name; int mode; } ;
struct status {unsigned char status; TYPE_2__ new; TYPE_1__ old; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_6__ {int exec_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const**,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;

bool
FUNC_4(struct status *VAR_4, enum line_type VAR_5, bool VAR_6)
{
 if (!VAR_4 || VAR_5 != VAR_1) {
  if (VAR_5 == VAR_0) {
   FUNC_2("Cannot revert changes to staged files");
  } else if (VAR_5 == VAR_2) {
   FUNC_2("Cannot revert changes to untracked files");
  } else if (VAR_6) {
   FUNC_2("Nothing to revert");
  } else {
   FUNC_2("Cannot revert changes to multiple files");
  }

 } else if (FUNC_1("Are you sure you want to revert changes?")) {
  char VAR_7[10] = "100644";
  const char *VAR_8[] = {
   "git", "update-index", "--cacheinfo", VAR_7,
    VAR_4->old.rev, VAR_4->old.name, ((void*)0)
  };
  const char *VAR_9[] = {
   "git", "checkout", "--", VAR_4->old.name, ((void*)0)
  };

  if (VAR_4->status == 'U') {
   FUNC_3(VAR_7, "%5o", VAR_4->old.mode);

   if (VAR_4->old.mode == 0 && VAR_4->new.mode == 0) {
    VAR_8[2] = "--force-remove";
    VAR_8[3] = VAR_4->old.name;
    VAR_8[4] = ((void*)0);
   }

   if (!FUNC_0(VAR_8, VAR_3.exec_dir))
    return 0;
   if (VAR_4->old.mode == 0 && VAR_4->new.mode == 0)
    return 1;
  }

  return FUNC_0(VAR_9, VAR_3.exec_dir);
 }

 return 0;
}

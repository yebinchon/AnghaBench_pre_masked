
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_4__ {int seen; } ;
struct TYPE_3__ {scalar_t__* head; int worktree; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,scalar_t__) ;
 int FUNC_6 (char*,char*) ;
 TYPE_1__ VAR_14 ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*,size_t) ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (char*,scalar_t__*,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;

__attribute__((used)) static enum status_code
FUNC_16(char *VAR_15, size_t VAR_16, char *VAR_17, size_t VAR_18, void *VAR_19)
{
 if (!FUNC_11(VAR_15, "i18n.commitencoding"))
  FUNC_7(&VAR_2, VAR_17, 0);

 else if (!FUNC_11(VAR_15, "gui.encoding"))
  FUNC_7(&VAR_2, VAR_17, 1);

 else if (!FUNC_11(VAR_15, "core.editor"))
  FUNC_12(VAR_5, VAR_17, VAR_18);

 else if (!FUNC_11(VAR_15, "core.worktree"))
  FUNC_12(VAR_14.worktree, VAR_17, VAR_18);

 else if (!FUNC_11(VAR_15, "core.abbrev"))
  FUNC_5(&VAR_7, VAR_17, 0, VAR_0 - 1);

 else if (!FUNC_11(VAR_15, "diff.noprefix"))
  FUNC_4(&VAR_4, VAR_17);

 else if (!FUNC_11(VAR_15, "status.showUntrackedFiles"))
  FUNC_4(&VAR_10, VAR_17);

 else if (!FUNC_6(VAR_15, "tig.color."))
  FUNC_10(VAR_15 + 10, VAR_17, VAR_12);

 else if (!FUNC_6(VAR_15, "tig.bind."))
  FUNC_10(VAR_15 + 9, VAR_17, VAR_11);

 else if (!FUNC_6(VAR_15, "tig."))
  FUNC_10(VAR_15 + 4, VAR_17, VAR_13);

 else if (!FUNC_6(VAR_15, "color."))
  FUNC_8(VAR_15 + FUNC_0("color."), VAR_17);

 else if (*VAR_14.head && !FUNC_6(VAR_15, "branch.") &&
   !FUNC_14(VAR_15 + 7, VAR_14.head, FUNC_13(VAR_14.head)))
  FUNC_9(VAR_15 + 7 + FUNC_13(VAR_14.head), VAR_17, VAR_18);

 else if (!FUNC_11(VAR_15, "diff.context")) {
  if (!FUNC_3(&VAR_3)->seen)
   VAR_3 = -FUNC_2(VAR_17);

 } else if (!FUNC_11(VAR_15, "format.pretty")) {
  if (!FUNC_6(VAR_17, "format:") && FUNC_15(VAR_17, "%C("))
   FUNC_1(&VAR_9, "--pretty=medium");

 } else if (!FUNC_11(VAR_15, "log.follow") && VAR_6 && !VAR_6[1])
  FUNC_4(&VAR_8, VAR_17);

 return VAR_1;
}

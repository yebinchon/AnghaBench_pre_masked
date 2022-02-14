
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repo_info_state {scalar_t__* argv; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_2__ {int is_inside_work_tree; int * head; int remote; int * head_id; int * prefix; int * cdup; int * exec_dir; int * git_dir; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static enum status_code
FUNC_7(char *VAR_8, size_t VAR_9, char *VAR_10, size_t VAR_11, void *VAR_12)
{
 struct repo_info_state *VAR_13 = VAR_12;
 const char *VAR_14 = *VAR_13->argv ? *VAR_13->argv++ : "";

 if (!FUNC_4(VAR_14, VAR_0)) {
  FUNC_5(VAR_7.git_dir, VAR_8, VAR_9);

 } else if (!FUNC_4(VAR_14, VAR_5)) {





  VAR_7.is_inside_work_tree = FUNC_4(VAR_8, "false") ? 1 : 0;

 } else if (!FUNC_4(VAR_14, VAR_2)) {
  FUNC_5(VAR_7.cdup, VAR_8, VAR_9);
  if (VAR_7.is_inside_work_tree)
   FUNC_5(VAR_7.exec_dir, VAR_8, VAR_9);

 } else if (!FUNC_4(VAR_14, VAR_3)) {





  if (!*VAR_7.cdup && VAR_9 == 40 && FUNC_2(VAR_8))
   return FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

  FUNC_5(VAR_7.prefix, VAR_8, VAR_9);

 } else if (!FUNC_4(VAR_14, VAR_1)) {
  FUNC_5(VAR_7.head_id, VAR_8, VAR_9);

 } else if (!FUNC_4(VAR_14, VAR_4)) {
  if (!FUNC_3(VAR_8, "refs/heads/")) {
   const char *VAR_15 = VAR_8 + FUNC_0("refs/heads/");

   FUNC_5(VAR_7.head, VAR_15, FUNC_6(VAR_15) + 1);
   FUNC_1(VAR_7.head_id, VAR_8, VAR_7.remote, VAR_7.head);
  }
  VAR_13->argv++;
 }

 return VAR_6;
}

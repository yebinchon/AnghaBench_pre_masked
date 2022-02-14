
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ display; } ;
struct TYPE_4__ {TYPE_1__ file_name; } ;
struct view_column {TYPE_2__ opt; } ;
struct view {struct grep_state* private; } ;
struct grep_state {int no_file_group; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const***,int *) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (struct view*,int *,char const**,int) ;
 int FUNC_3 (char const**) ;
 struct view_column* FUNC_4 (struct view*,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_5 (struct view*) ;
 int * VAR_5 ;

__attribute__((used)) static enum status_code
FUNC_6(struct view *VAR_6, enum open_flags VAR_7)
{
 struct grep_state *VAR_8 = VAR_6->private;
 const char **VAR_9 = ((void*)0);
 enum status_code VAR_10;

 if (FUNC_5(VAR_6)) {
  VAR_4 = VAR_5;
  VAR_5 = ((void*)0);
 }

 if (!FUNC_0(&VAR_9, VAR_3) ||
     !FUNC_0(&VAR_9, VAR_4))
  return VAR_0;

 {
  struct view_column *VAR_11 = FUNC_4(VAR_6, VAR_2);

  VAR_8->no_file_group = !VAR_11 || VAR_11->opt.file_name.display != VAR_1;
 }

 VAR_10 = FUNC_2(VAR_6, ((void*)0), VAR_9, VAR_7);
 FUNC_1(VAR_9);
 FUNC_3(VAR_9);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ display; } ;
struct TYPE_4__ {TYPE_1__ file_name; } ;
struct view_column {int hidden; TYPE_2__ opt; } ;
struct view {struct blame_state* private; } ;
struct blame_state {int auto_filename_display; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct view_column* FUNC_0 (struct view*,int ) ;

__attribute__((used)) static void
FUNC_1(struct view *VAR_3)
{
 struct blame_state *VAR_4 = VAR_3->private;
 struct view_column *VAR_5 = FUNC_0(VAR_3, VAR_2);

 if (!VAR_5)
  return;

 VAR_5->hidden = VAR_5->opt.file_name.display == VAR_1 ||
    (VAR_5->opt.file_name.display == VAR_0 &&
     !VAR_4->auto_filename_display);
}

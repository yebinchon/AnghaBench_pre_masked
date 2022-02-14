
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
struct status {TYPE_1__ new; } ;
struct io {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_4__ {int exec_dir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct io*) ;
 int FUNC_1 (char const**,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct io*,int) ;
 int FUNC_3 (struct io*,struct status*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ,char*) ;

bool
FUNC_6(struct status *VAR_2, enum line_type VAR_3)
{
 const char *VAR_4 = VAR_2->new.name;
 struct io VAR_5;
 bool VAR_6;

 if (VAR_3 == VAR_0 && !FUNC_5(VAR_4, FUNC_4(VAR_4), "/")) {
  const char *VAR_7[] = { "git", "add", "--", VAR_4, ((void*)0) };

  return FUNC_1(VAR_7, VAR_1.exec_dir);
 }

 if (!FUNC_2(&VAR_5, VAR_3))
  return 0;

 VAR_6 = FUNC_3(&VAR_5, VAR_2, VAR_3);
 return FUNC_0(&VAR_5) && VAR_6;
}

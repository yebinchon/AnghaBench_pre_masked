
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_2__ {int exec_dir; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct io*,int ,int ,int *,char const**) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool
FUNC_2(struct io *VAR_2, enum line_type VAR_3)
{
 const char *VAR_4[] = {
  "git", "update-index", "-z", "--index-info", ((void*)0)
 };
 const char *VAR_5[] = {
  "git", "update-index", "-z", "--add", "--remove", "--stdin", ((void*)0)
 };

 switch (VAR_3) {
 case 130:
  return FUNC_1(VAR_2, VAR_0, VAR_1.exec_dir, ((void*)0), VAR_4);

 case 129:
 case 128:
  return FUNC_1(VAR_2, VAR_0, VAR_1.exec_dir, ((void*)0), VAR_5);

 default:
  FUNC_0("line type %d not handled in switch", VAR_3);
  return 0;
 }
}

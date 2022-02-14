
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; int rev; int mode; } ;
struct status {TYPE_2__ new; TYPE_1__ old; } ;
struct io {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct io*,char*,int ,int ,...) ;

__attribute__((used)) static bool
FUNC_2(struct io *VAR_0, struct status *VAR_1, enum line_type VAR_2)
{
 switch (VAR_2) {
 case 130:
  return FUNC_1(VAR_0, "%06o %s\t%s%c", VAR_1->old.mode,
     VAR_1->old.rev, VAR_1->old.name, 0);

 case 129:
 case 128:
  return FUNC_1(VAR_0, "%s%c", VAR_1->new.name, 0);

 default:
  FUNC_0("line type %d not handled in switch", VAR_2);
  return 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ quick; scalar_t__ echo; scalar_t__ exit; scalar_t__ confirm; scalar_t__ silent; scalar_t__ internal; } ;
struct run_request {TYPE_1__ flags; } ;
typedef int flags ;


 int FUNC_0 (char*,int ,int) ;

const char *
FUNC_1(const struct run_request *VAR_0)
{
 static char VAR_1[8];
 int VAR_2 = 0;

 FUNC_0(VAR_1, 0, sizeof(VAR_1));

 if (VAR_0->flags.internal)
  VAR_1[VAR_2++] = ':';
 else
  VAR_1[VAR_2] = '!';

 if (VAR_0->flags.silent)
     VAR_1[VAR_2++] = '@';
 if (VAR_0->flags.confirm)
     VAR_1[VAR_2++] = '?';
 if (VAR_0->flags.exit)
  VAR_1[VAR_2++] = '<';
 if (VAR_0->flags.echo)
  VAR_1[VAR_2++] = '+';
 if (VAR_0->flags.quick)
  VAR_1[VAR_2++] = '>';
 if (VAR_2 > 1)
  VAR_1[VAR_2++] = 0;

 return VAR_1;
}

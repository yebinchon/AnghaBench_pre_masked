
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {scalar_t__ statuslines; int statusat; int options; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

void
FUNC_1(struct session *VAR_0)
{
 VAR_0->statuslines = FUNC_0(VAR_0->options, "status");
 if (VAR_0->statuslines == 0)
  VAR_0->statusat = -1;
 else if (FUNC_0(VAR_0->options, "status-position") == 0)
  VAR_0->statusat = 0;
 else
  VAR_0->statusat = 1;
}

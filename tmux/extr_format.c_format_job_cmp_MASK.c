
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_job {scalar_t__ tag; int cmd; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct format_job *VAR_0, struct format_job *VAR_1)
{
 if (VAR_0->tag < VAR_1->tag)
  return (-1);
 if (VAR_0->tag > VAR_1->tag)
  return (1);
 return (FUNC_0(VAR_0->cmd, VAR_1->cmd));
}

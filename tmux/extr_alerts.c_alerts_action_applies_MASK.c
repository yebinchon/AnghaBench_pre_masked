
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {TYPE_1__* session; } ;
struct TYPE_2__ {struct winlink* curw; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(struct winlink *VAR_3, const char *VAR_4)
{
 int VAR_5;







 VAR_5 = FUNC_0(VAR_3->session->options, VAR_4);
 if (VAR_5 == VAR_0)
  return (1);
 if (VAR_5 == VAR_1)
  return (VAR_3 == VAR_3->session->curw);
 if (VAR_5 == VAR_2)
  return (VAR_3 != VAR_3->session->curw);
 return (0);
}

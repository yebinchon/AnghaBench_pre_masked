
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ queued; } ;
struct imsgbuf {TYPE_1__ w; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int
FUNC_1(struct imsgbuf *VAR_0)
{
 while (VAR_0->w.queued)
  if (FUNC_0(&VAR_0->w) <= 0)
   return (-1);
 return (0);
}

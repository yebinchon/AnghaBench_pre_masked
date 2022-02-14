
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_find_state {int * wp; int * w; int * wl; int * s; } ;



int
FUNC_0(struct cmd_find_state *VAR_0)
{
 if (VAR_0->s == ((void*)0) && VAR_0->wl == ((void*)0) && VAR_0->w == ((void*)0) && VAR_0->wp == ((void*)0))
  return (1);
 return (0);
}

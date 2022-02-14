
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int start; int last; int pos; } ;



void
FUNC_0(struct mbuf *VAR_0)
{
    VAR_0->pos = VAR_0->start;
    VAR_0->last = VAR_0->start;
}

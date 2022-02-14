
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {size_t max; size_t wpos; } ;



size_t
FUNC_0(struct ibuf *VAR_0)
{
 return (VAR_0->max - VAR_0->wpos);
}

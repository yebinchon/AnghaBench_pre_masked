
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ pos; scalar_t__ last; } ;



__attribute__((used)) static inline bool
FUNC_0(struct mbuf *VAR_0)
{
    return VAR_0->pos == VAR_0->last ? 1 : 0;
}

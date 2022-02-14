
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ last; scalar_t__ end; } ;



__attribute__((used)) static inline bool
FUNC_0(struct mbuf *VAR_0)
{
    return VAR_0->last == VAR_0->end ? 1 : 0;
}

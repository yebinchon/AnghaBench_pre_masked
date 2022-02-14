
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {scalar_t__ last; scalar_t__ pos; } ;


 int FUNC_0 (int) ;

uint32_t
FUNC_1(struct mbuf *VAR_0)
{
    FUNC_0(VAR_0->last >= VAR_0->pos);

    return (uint32_t)(VAR_0->last - VAR_0->pos);
}

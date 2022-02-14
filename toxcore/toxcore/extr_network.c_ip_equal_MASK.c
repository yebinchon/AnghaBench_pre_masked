
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* uint64; scalar_t__* uint32; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_8__ {TYPE_1__ in_addr; } ;
struct TYPE_9__ {scalar_t__ family; TYPE_2__ ip4; TYPE_6__ ip6; } ;
typedef TYPE_3__ IP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__) ;

int FUNC_1(const IP *VAR_2, const IP *VAR_3)
{
    if (!VAR_2 || !VAR_3)
        return 0;


    if (VAR_2->family == VAR_3->family) {
        if (VAR_2->family == VAR_0)
            return (VAR_2->ip4.in_addr.s_addr == VAR_3->ip4.in_addr.s_addr);
        else if (VAR_2->family == VAR_1)
            return VAR_2->ip6.uint64[0] == VAR_3->ip6.uint64[0] && VAR_2->ip6.uint64[1] == VAR_3->ip6.uint64[1];
        else
            return 0;
    }


    if ((VAR_2->family == VAR_0) && (VAR_3->family == VAR_1)) {
        if (FUNC_0(VAR_3->ip6))
            return (VAR_2->ip4.in_addr.s_addr == VAR_3->ip6.uint32[3]);
    } else if ((VAR_2->family == VAR_1) && (VAR_3->family == VAR_0)) {
        if (FUNC_0(VAR_2->ip6))
            return (VAR_2->ip6.uint32[3] == VAR_3->ip4.in_addr.s_addr);
    }

    return 0;
}

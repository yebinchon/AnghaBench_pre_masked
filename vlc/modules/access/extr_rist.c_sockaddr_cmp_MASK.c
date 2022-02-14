
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_flowinfo; scalar_t__ sin6_scope_id; int sin6_port; TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sockaddr *VAR_2, struct sockaddr *VAR_3)
{


    if (VAR_2->sa_family != VAR_3->sa_family) return VAR_2->sa_family < VAR_3->sa_family ? -1 : 1;

    if (VAR_2->sa_family == VAR_0)
    {
        struct sockaddr_in *VAR_4 = (void*)VAR_2, *VAR_5 = (void*)VAR_3;
        if (FUNC_2(VAR_4->sin_addr.s_addr) != FUNC_2(VAR_5->sin_addr.s_addr)) return FUNC_2(VAR_4->sin_addr.s_addr) < FUNC_2(VAR_5->sin_addr.s_addr) ? -1 : 1;
        if (FUNC_3(VAR_4->sin_port) != FUNC_3(VAR_5->sin_port)) return FUNC_3(VAR_4->sin_port) < FUNC_3(VAR_5->sin_port) ? -1 : 1;
    }
    else if (VAR_2->sa_family == VAR_1)
    {
        struct sockaddr_in6 *VAR_6 = (void*)VAR_2, *VAR_7 = (void*)VAR_3;
        int VAR_8 = FUNC_1(VAR_6->sin6_addr.s6_addr, VAR_7->sin6_addr.s6_addr,
            sizeof(VAR_6->sin6_addr.s6_addr));
        if (VAR_8 != 0)
            return VAR_8;
        if (FUNC_3(VAR_6->sin6_port) != FUNC_3(VAR_7->sin6_port)) return FUNC_3(VAR_6->sin6_port) < FUNC_3(VAR_7->sin6_port) ? -1 : 1;
        if (VAR_6->sin6_flowinfo != VAR_7->sin6_flowinfo) return VAR_6->sin6_flowinfo < VAR_7->sin6_flowinfo ? -1 : 1;
        if (VAR_6->sin6_scope_id != VAR_7->sin6_scope_id) return VAR_6->sin6_scope_id < VAR_7->sin6_scope_id ? -1 : 1;
    }


    return 0;
}

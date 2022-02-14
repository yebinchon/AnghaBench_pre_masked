
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union sockaddr_union {int sa; TYPE_2__ in; } ;
typedef int uint16_t ;
typedef int be32_t ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,void const*,size_t,int ,int *,int) ;

int FUNC_3(int VAR_2, be32_t VAR_3, uint16_t VAR_4,
                                 const void *VAR_5, size_t VAR_6) {
        union sockaddr_union VAR_7 = {
                .in.sin_family = VAR_0,
                .in.sin_port = FUNC_1(VAR_4),
                .in.sin_addr.s_addr = VAR_3,
        };
        int VAR_8;

        FUNC_0(VAR_2 >= 0);
        FUNC_0(VAR_5);
        FUNC_0(VAR_6);

        VAR_8 = FUNC_2(VAR_2, VAR_5, VAR_6, 0, &VAR_7.sa, sizeof(VAR_7.in));
        if (VAR_8 < 0)
                return -VAR_1;

        return 0;
}

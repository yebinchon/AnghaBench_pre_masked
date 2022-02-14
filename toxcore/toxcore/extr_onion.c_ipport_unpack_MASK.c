
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int port; int ip; } ;
typedef TYPE_1__ IP_Port ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int const*,unsigned int,_Bool) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(IP_Port *VAR_2, const uint8_t *VAR_3, unsigned int VAR_4, _Bool VAR_5)
{
    if (VAR_4 < (VAR_0 + VAR_1))
        return -1;

    if (FUNC_0(&VAR_2->ip, VAR_3, VAR_4, VAR_5) == -1)
        return -1;

    FUNC_1(&VAR_2->port, VAR_3 + VAR_0, VAR_1);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int ip; } ;
typedef TYPE_1__ IP_Port ;
typedef int DHT ;


 int FUNC_0 (int *,TYPE_1__,int const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(void *VAR_1, IP_Port VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    DHT *VAR_5 = VAR_1;

    if (FUNC_1(VAR_2.ip) == -1)
        return 1;

    if (VAR_4 != VAR_0 + 1)
        return 1;

    FUNC_0(VAR_5, VAR_2, VAR_3 + 1);
    return 0;
}

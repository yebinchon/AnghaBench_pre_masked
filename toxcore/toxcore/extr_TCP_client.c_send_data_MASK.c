
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
typedef int packet ;
struct TYPE_8__ {TYPE_1__* connections; } ;
struct TYPE_7__ {int status; } ;
typedef TYPE_2__ TCP_Client_Connection ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t*,size_t const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,size_t*,int,int ) ;

int FUNC_4(TCP_Client_Connection *VAR_2, uint8_t VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (VAR_3 >= VAR_0)
        return -1;

    if (VAR_2->connections[VAR_3].status != 2)
        return -1;

    if (FUNC_2(VAR_2) == 0 || FUNC_1(VAR_2) == 0)
        return 0;

    uint8_t VAR_6[1 + VAR_5];
    VAR_6[0] = VAR_3 + VAR_1;
    FUNC_0(VAR_6 + 1, VAR_4, VAR_5);
    return FUNC_3(VAR_2, VAR_6, sizeof(VAR_6), 0);
}

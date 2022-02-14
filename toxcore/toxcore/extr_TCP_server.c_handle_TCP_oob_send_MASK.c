
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int resp_packet ;
struct TYPE_7__ {int const* public_key; } ;
struct TYPE_6__ {TYPE_2__* accepted_connection_array; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (int *,int const*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(TCP_Server *VAR_3, uint32_t VAR_4, const uint8_t *VAR_5, const uint8_t *VAR_6,
                               uint16_t VAR_7)
{
    if (VAR_7 == 0 || VAR_7 > VAR_0)
        return -1;

    TCP_Secure_Connection *VAR_8 = &VAR_3->accepted_connection_array[VAR_4];

    int VAR_9 = FUNC_0(VAR_3, VAR_5);

    if (VAR_9 != -1) {
        uint8_t VAR_10[1 + VAR_2 + VAR_7];
        VAR_10[0] = VAR_1;
        FUNC_1(VAR_10 + 1, VAR_8->public_key, VAR_2);
        FUNC_1(VAR_10 + 1 + VAR_2, VAR_6, VAR_7);
        FUNC_2(&VAR_3->accepted_connection_array[VAR_9], VAR_10,
                                           sizeof(VAR_10), 0);
    }

    return 0;
}

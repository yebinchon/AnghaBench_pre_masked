
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_4__ {int ping; int self_public_key; } ;
typedef int IP_Port ;
typedef TYPE_1__ DHT ;


 int FUNC_0 (TYPE_1__*,int *,int const*) ;
 int FUNC_1 (int ,int const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int const*,int const*,int,int *) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int const*,int *,int *,int,int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, IP_Port VAR_5, const uint8_t *VAR_6, uint16_t VAR_7)
{
    if (VAR_7 != (1 + VAR_3 + VAR_2 + VAR_3 + sizeof(
                       uint64_t) + VAR_1))
        return 1;

    DHT *VAR_8 = VAR_4;


    if (FUNC_3(VAR_6 + 1, VAR_8->self_public_key))
        return 1;

    uint8_t VAR_9[VAR_3 + sizeof(uint64_t)];
    uint8_t VAR_10[VAR_0];

    FUNC_0(VAR_8, VAR_10, VAR_6 + 1);
    int VAR_11 = FUNC_2( VAR_10,
                                      VAR_6 + 1 + VAR_3,
                                      VAR_6 + 1 + VAR_3 + VAR_2,
                                      VAR_3 + sizeof(uint64_t) + VAR_1,
                                      VAR_9 );

    if (VAR_11 != VAR_3 + sizeof(uint64_t))
        return 1;

    FUNC_4(VAR_8, VAR_5, VAR_6 + 1, VAR_9, VAR_9 + VAR_3, sizeof(uint64_t), VAR_10);

    FUNC_1(VAR_8->ping, VAR_6 + 1, VAR_5);

    return 0;
}

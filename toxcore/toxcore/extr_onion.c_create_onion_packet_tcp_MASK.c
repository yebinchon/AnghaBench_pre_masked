
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int step2 ;
typedef int step1 ;
struct TYPE_3__ {int shared_key2; int const* public_key2; int ip_port2; int shared_key3; int const* public_key3; int ip_port3; } ;
typedef TYPE_1__ Onion_Path ;
typedef int IP_Port ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int const*,int const*,int,int const*) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int const*,int const*,scalar_t__) ;
 int FUNC_3 (int const*) ;

int FUNC_4(uint8_t *VAR_5, uint16_t VAR_6, const Onion_Path *VAR_7, IP_Port VAR_8,
                            const uint8_t *VAR_9, uint16_t VAR_10)
{
    if (VAR_3 + VAR_1 + VAR_0 * 2 + VAR_10 > VAR_6 || VAR_10 == 0)
        return -1;

    uint8_t VAR_11[VAR_1 + VAR_10];

    FUNC_1(VAR_11, &VAR_8);
    FUNC_2(VAR_11 + VAR_1, VAR_9, VAR_10);

    uint8_t VAR_12[VAR_3];
    FUNC_3(VAR_12);

    uint8_t VAR_13[VAR_1 + VAR_0 + VAR_10];
    FUNC_1(VAR_13, &VAR_7->ip_port3);
    FUNC_2(VAR_13 + VAR_1, VAR_7->public_key3, VAR_4);

    int VAR_14 = FUNC_0(VAR_7->shared_key3, VAR_12, VAR_11, sizeof(VAR_11),
                                     VAR_13 + VAR_1 + VAR_4);

    if (VAR_14 != VAR_1 + VAR_10 + VAR_2)
        return -1;

    FUNC_1(VAR_5 + VAR_3, &VAR_7->ip_port2);
    FUNC_2(VAR_5 + VAR_3 + VAR_1, VAR_7->public_key2, VAR_4);
    VAR_14 = FUNC_0(VAR_7->shared_key2, VAR_12, VAR_13, sizeof(VAR_13),
                                 VAR_5 + VAR_3 + VAR_1 + VAR_4);

    if (VAR_14 != VAR_1 + VAR_0 + VAR_10 + VAR_2)
        return -1;

    FUNC_2(VAR_5, VAR_12, VAR_3);

    return VAR_3 + VAR_1 + VAR_4 + VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int data ;
struct TYPE_5__ {TYPE_1__* entries; int net; } ;
struct TYPE_4__ {int ret; int ret_ip_port; } ;
typedef TYPE_2__ Onion_Announce ;
typedef int IP_Port ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (int *,int const*,scalar_t__) ;
 int FUNC_2 (int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    Onion_Announce *VAR_9 = VAR_5;

    if (VAR_8 <= VAR_0)
        return 1;

    if (VAR_8 > VAR_2)
        return 1;

    int VAR_10 = FUNC_0(VAR_9, VAR_7 + 1);

    if (VAR_10 == -1)
        return 1;

    uint8_t VAR_11[VAR_8 - (VAR_4 + VAR_3)];
    VAR_11[0] = VAR_1;
    FUNC_1(VAR_11 + 1, VAR_7 + 1 + VAR_4, VAR_8 - (1 + VAR_4 + VAR_3));

    if (FUNC_2(VAR_9->net, VAR_9->entries[VAR_10].ret_ip_port, VAR_11, sizeof(VAR_11),
                            VAR_9->entries[VAR_10].ret) == -1)
        return 1;

    return 0;
}

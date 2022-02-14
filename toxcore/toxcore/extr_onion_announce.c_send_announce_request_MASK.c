
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int request ;
typedef int packet ;
struct TYPE_7__ {int ip_port; int public_key; } ;
struct TYPE_6__ {int ip_port1; } ;
typedef TYPE_1__ Onion_Path ;
typedef TYPE_2__ Node_format ;
typedef int Networking_Core ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int const*,int const*,int const*,int const*,int const*,int ) ;
 int FUNC_1 (int *,int,TYPE_1__ const*,int ,int *,int) ;
 int FUNC_2 (int *,int ,int *,int) ;

int FUNC_3(Networking_Core *VAR_2, const Onion_Path *VAR_3, Node_format VAR_4, const uint8_t *VAR_5,
                          const uint8_t *VAR_6, const uint8_t *VAR_7, const uint8_t *VAR_8, const uint8_t *VAR_9,
                          uint64_t VAR_10)
{
    uint8_t VAR_11[VAR_0];
    int VAR_12 = FUNC_0(VAR_11, sizeof(VAR_11), VAR_4.public_key, VAR_5, VAR_6, VAR_7, VAR_8,
                                      VAR_9, VAR_10);

    if (VAR_12 != sizeof(VAR_11))
        return -1;

    uint8_t VAR_13[VAR_1];
    VAR_12 = FUNC_1(VAR_13, sizeof(VAR_13), VAR_3, VAR_4.ip_port, VAR_11, sizeof(VAR_11));

    if (VAR_12 == -1)
        return -1;

    if (FUNC_2(VAR_2, VAR_3->ip_port1, VAR_13, VAR_12) != VAR_12)
        return -1;

    return 0;
}

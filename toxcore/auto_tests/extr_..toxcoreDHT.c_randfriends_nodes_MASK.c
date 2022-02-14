
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_1__* friends_list; } ;
struct TYPE_4__ {int client_list; } ;
typedef int Node_format ;
typedef TYPE_2__ DHT ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,scalar_t__) ;
 unsigned int FUNC_1 () ;

uint16_t FUNC_2(DHT *VAR_2, Node_format *VAR_3, uint16_t VAR_4)
{
    if (VAR_4 == 0)
        return 0;

    uint16_t VAR_5 = 0;
    unsigned int VAR_6, VAR_7 = FUNC_1();

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
        VAR_5 += FUNC_0(VAR_2->friends_list[(VAR_6 + VAR_7) % VAR_0].client_list, VAR_1, VAR_3 + VAR_5,
                            VAR_4 - VAR_5);

        if (VAR_5 >= VAR_4)
            break;
    }

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_10__ {int family; } ;
struct TYPE_9__ {void* port; TYPE_2__ ip; } ;
typedef TYPE_1__ IP_Port ;
typedef TYPE_2__ IP ;
typedef int DHT ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__,int const*) ;
 scalar_t__ FUNC_1 (char const*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(DHT *VAR_1, const char *VAR_2, uint8_t VAR_3,
                               uint16_t VAR_4, const uint8_t *VAR_5)
{
    IP_Port VAR_6;
    IP *VAR_7 = ((void*)0);
    IP_Port VAR_8;
    FUNC_2(&VAR_6, VAR_3);

    if (VAR_3) {

        VAR_6 = VAR_0;
        FUNC_4(&VAR_8);
        VAR_7 = &VAR_8;
    }

    if (FUNC_1(VAR_2, &VAR_6, VAR_7)) {
        VAR_6 = VAR_4;
        FUNC_0(VAR_1, VAR_6, VAR_5);

        if ((VAR_7 != ((void*)0)) && FUNC_3(VAR_7)) {
            VAR_8 = VAR_4;
            FUNC_0(VAR_1, VAR_8, VAR_5);
        }

        return 1;
    } else
        return 0;
}

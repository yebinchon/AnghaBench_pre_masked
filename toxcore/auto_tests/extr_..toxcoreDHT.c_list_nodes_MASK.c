
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {int ip_port; int timestamp; } ;
struct TYPE_8__ {int public_key; TYPE_2__ assoc6; TYPE_2__ assoc4; } ;
struct TYPE_6__ {int ip_port; int public_key; } ;
typedef TYPE_1__ Node_format ;
typedef TYPE_2__ IPPTsPng ;
typedef TYPE_3__ Client_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;

uint16_t FUNC_3(Client_data *VAR_2, unsigned int VAR_3, Node_format *VAR_4, uint16_t VAR_5)
{
    if (VAR_5 == 0)
        return 0;

    uint16_t VAR_6 = 0;

    unsigned int VAR_7;

    for (VAR_7 = VAR_3; VAR_7 != 0; --VAR_7) {
        IPPTsPng *VAR_8 = ((void*)0);

        if (!FUNC_0(VAR_2[VAR_7 - 1].assoc4.timestamp, VAR_0))
            VAR_8 = &VAR_2[VAR_7 - 1].assoc4;

        if (!FUNC_0(VAR_2[VAR_7 - 1].assoc6.timestamp, VAR_0)) {
            if (VAR_8 == ((void*)0))
                VAR_8 = &VAR_2[VAR_7 - 1].assoc6;
            else if (FUNC_2() % 2)
                VAR_8 = &VAR_2[VAR_7 - 1].assoc6;
        }

        if (VAR_8 != ((void*)0)) {
            FUNC_1(VAR_4[VAR_6].public_key, VAR_2[VAR_7 - 1].public_key, VAR_1);
            VAR_4[VAR_6].ip_port = VAR_8->ip_port;
            ++VAR_6;

            if (VAR_6 >= VAR_5)
                return VAR_6;
        }
    }

    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_7__ {int status; int temp_secret_key; int temp_public_key; int real_public_key; } ;
struct TYPE_6__ {unsigned int num_friends; TYPE_5__* friends_list; } ;
typedef int Onion_Friend ;
typedef TYPE_1__ Onion_Client ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(Onion_Client *VAR_1, const uint8_t *VAR_2)
{
    int VAR_3 = FUNC_3(VAR_1, VAR_2);

    if (VAR_3 != -1)
        return VAR_3;

    unsigned int VAR_4, VAR_5 = ~0;

    for (VAR_4 = 0; VAR_4 < VAR_1->num_friends; ++VAR_4) {
        if (VAR_1->friends_list[VAR_4].status == 0) {
            VAR_5 = VAR_4;
            break;
        }
    }

    if (VAR_5 == (uint32_t)~0) {
        if (FUNC_4(VAR_1, VAR_1->num_friends + 1) == -1)
            return -1;

        VAR_5 = VAR_1->num_friends;
        FUNC_2(&(VAR_1->friends_list[VAR_1->num_friends]), 0, sizeof(Onion_Friend));
        ++VAR_1->num_friends;
    }

    VAR_1->friends_list[VAR_5].status = 1;
    FUNC_1(VAR_1->friends_list[VAR_5].real_public_key, VAR_2, VAR_0);
    FUNC_0(VAR_1->friends_list[VAR_5].temp_public_key, VAR_1->friends_list[VAR_5].temp_secret_key);
    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int sa_family_t ;
struct TYPE_5__ {size_t num_friends; TYPE_1__* friends_list; int close_clientlist; } ;
struct TYPE_4__ {int client_list; } ;
typedef int Node_format ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int *,int ,int ,int ,size_t*,int ,int ) ;

__attribute__((used)) static int FUNC_1(const DHT *VAR_2, const uint8_t *VAR_3, Node_format *VAR_4,
                                    sa_family_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
    uint32_t VAR_8 = 0, VAR_9;
    FUNC_0(VAR_3, VAR_4, VAR_5,
                          VAR_2->close_clientlist, VAR_0, &VAR_8, VAR_6, 0);







    for (VAR_9 = 0; VAR_9 < VAR_2->num_friends; ++VAR_9)
        FUNC_0(VAR_3, VAR_4, VAR_5,
                              VAR_2->friends_list[VAR_9].client_list, VAR_1,
                              &VAR_8, VAR_6, 0);

    return VAR_8;
}

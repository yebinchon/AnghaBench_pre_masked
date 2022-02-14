
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {size_t num_chats; TYPE_1__* chats; } ;
struct TYPE_4__ {int identifier; } ;
typedef TYPE_2__ Group_Chats ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_1(const Group_Chats *VAR_1, const uint8_t *VAR_2)
{
    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->num_chats; ++VAR_3)
        if (FUNC_0(VAR_1->chats[VAR_3].identifier, VAR_2, VAR_0) == 0)
            return VAR_3;

    return -1;
}

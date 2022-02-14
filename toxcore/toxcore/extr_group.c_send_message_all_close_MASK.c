
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_9__ {int fr_c; } ;
struct TYPE_8__ {TYPE_1__* close; } ;
struct TYPE_7__ {scalar_t__ type; int group_number; int number; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_3__ const*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int const*,size_t) ;

__attribute__((used)) static unsigned int FUNC_2(const Group_Chats *VAR_3, int VAR_4, const uint8_t *VAR_5,
        uint16_t VAR_6, int VAR_7)
{
    Group_c *VAR_8 = FUNC_0(VAR_3, VAR_4);

    if (!VAR_8)
        return 0;

    uint16_t VAR_9, VAR_10 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
        if (VAR_8->close[VAR_9].type != VAR_0)
            continue;

        if ((int)VAR_9 == VAR_7)
            continue;

        if (FUNC_1(VAR_3->fr_c, VAR_8->close[VAR_9].number, VAR_2, VAR_8->close[VAR_9].group_number, VAR_5,
                                   VAR_6))
            ++VAR_10;
    }

    return VAR_10;
}

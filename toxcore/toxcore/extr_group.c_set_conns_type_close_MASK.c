
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {int fr_c; } ;
struct TYPE_8__ {TYPE_1__* close; int identifier; } ;
struct TYPE_7__ {scalar_t__ type; unsigned int number; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static void FUNC_2(Group_Chats *VAR_3, int VAR_4, int VAR_5, uint8_t VAR_6)
{
    Group_c *VAR_7 = FUNC_0(VAR_3, VAR_4);

    if (!VAR_7)
        return;

    uint32_t VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        if (VAR_7->close[VAR_8].type == VAR_0)
            continue;

        if (VAR_7->close[VAR_8].number != (unsigned int)VAR_5)
            continue;

        if (VAR_6 == VAR_1) {
            FUNC_1(VAR_3->fr_c, VAR_5, VAR_4, VAR_7->identifier);
        } else {
            VAR_7->close[VAR_8].type = VAR_6;
        }
    }
}

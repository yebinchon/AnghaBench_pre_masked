
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {int fr_c; } ;
struct TYPE_8__ {TYPE_1__* close; } ;
struct TYPE_7__ {scalar_t__ type; unsigned int number; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(Group_Chats *VAR_2, int VAR_3, int VAR_4)
{
    Group_c *VAR_5 = FUNC_0(VAR_2, VAR_3);

    if (!VAR_5)
        return -1;

    uint32_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
        if (VAR_5->close[VAR_6].type == VAR_0)
            continue;

        if (VAR_5->close[VAR_6].number == (unsigned int)VAR_4) {
            VAR_5->close[VAR_6].type = VAR_0;
            FUNC_1(VAR_2->fr_c, VAR_4);
            return 0;
        }
    }

    return -1;
}

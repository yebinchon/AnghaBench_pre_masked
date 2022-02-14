
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_12__ {TYPE_2__* m; int fr_c; } ;
struct TYPE_11__ {TYPE_1__* close; } ;
struct TYPE_10__ {int fr_c; } ;
struct TYPE_9__ {scalar_t__ type; int number; void* closest; } ;
typedef TYPE_3__ Group_c ;
typedef TYPE_4__ Group_Chats ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int,int ,int *,int *,int *,TYPE_4__*,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(Group_Chats *VAR_7, int VAR_8, int VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
    Group_c *VAR_12 = FUNC_2(VAR_7, VAR_9);

    if (!VAR_12)
        return -1;

    uint16_t VAR_13, VAR_14 = VAR_3;

    for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
        if (VAR_12->close[VAR_13].type == VAR_2) {
            VAR_14 = VAR_13;
            continue;
        }

        if (VAR_12->close[VAR_13].number == (uint32_t)VAR_8) {
            VAR_12->close[VAR_13].closest = VAR_10;
            return VAR_13;
        }
    }

    if (VAR_14 == VAR_3)
        return -1;

    if (VAR_11)
        FUNC_1(VAR_7->fr_c, VAR_8);

    VAR_12->close[VAR_14].type = VAR_1;
    VAR_12->close[VAR_14].number = VAR_8;
    VAR_12->close[VAR_14].closest = VAR_10;

    FUNC_0(VAR_7->m->fr_c, VAR_8, VAR_0, &VAR_6, &VAR_5,
                                &VAR_4, VAR_7, VAR_8);

    return VAR_14;
}

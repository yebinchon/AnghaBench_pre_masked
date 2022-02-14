
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct TYPE_9__ {int fr_c; } ;
struct TYPE_8__ {TYPE_1__* close; int * real_pk; } ;
struct TYPE_7__ {scalar_t__ type; int group_number; int number; scalar_t__ closest; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__ const*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int const*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(const Group_Chats *VAR_5, int VAR_6, const uint8_t *VAR_7, uint16_t VAR_8,
        int VAR_9)
{
    Group_c *VAR_10 = FUNC_2(VAR_5, VAR_6);

    if (!VAR_10)
        return 0;

    unsigned int VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14[VAR_0];

    for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
        if (VAR_10->close[VAR_11].type != VAR_1)
            continue;

        if ((int)VAR_11 == VAR_9)
            continue;

        if (VAR_10->close[VAR_11].closest) {
            VAR_14[VAR_13] = VAR_11;
            ++VAR_13;
            continue;
        }

        if (FUNC_3(VAR_5->fr_c, VAR_10->close[VAR_11].number, VAR_3, VAR_10->close[VAR_11].group_number, VAR_7,
                                  VAR_8))
            ++VAR_12;
    }

    if (!VAR_13) {
        return VAR_12;
    }

    unsigned int VAR_15 = 0;
    uint64_t VAR_16 = ~0;

    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
        uint8_t VAR_17[VAR_4];
        uint8_t VAR_18[VAR_4];
        FUNC_1(VAR_17, VAR_18, VAR_5->fr_c, VAR_10->close[VAR_14[VAR_11]].number);
        uint64_t VAR_19 = FUNC_0(VAR_10->real_pk, VAR_17);

        if (VAR_19 < VAR_16) {
            VAR_15 = VAR_14[VAR_11];
            VAR_16 = VAR_19;
        }
    }

    if (FUNC_3(VAR_5->fr_c, VAR_10->close[VAR_15].number, VAR_3,
                              VAR_10->close[VAR_15].group_number, VAR_7, VAR_8)) {
        ++VAR_12;
    }

    unsigned int VAR_20 = 0;
    VAR_16 = ~0;

    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
        uint8_t VAR_21[VAR_4];
        uint8_t VAR_22[VAR_4];
        FUNC_1(VAR_21, VAR_22, VAR_5->fr_c, VAR_10->close[VAR_14[VAR_11]].number);
        uint64_t VAR_23 = FUNC_0(VAR_21, VAR_10->real_pk);

        if (VAR_23 < VAR_16) {
            VAR_20 = VAR_14[VAR_11];
            VAR_16 = VAR_23;
        }
    }

    if (VAR_20 == VAR_15) {
        return VAR_12;
    }

    if (FUNC_3(VAR_5->fr_c, VAR_10->close[VAR_20].number, VAR_3,
                              VAR_10->close[VAR_20].group_number, VAR_7, VAR_8)) {
        ++VAR_12;
    }

    return VAR_12;
}

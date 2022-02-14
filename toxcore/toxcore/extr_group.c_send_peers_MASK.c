
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
typedef int peer_num ;
typedef int packet ;
struct TYPE_9__ {int fr_c; } ;
struct TYPE_8__ {unsigned int numpeers; int title_len; unsigned int* title; TYPE_1__* group; } ;
struct TYPE_7__ {int nick_len; unsigned int* real_pk; unsigned int* temp_pk; unsigned int* nick; int peer_number; } ;
typedef int Packet ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Chats ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int*,unsigned int*,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,unsigned int,int*,int) ;

__attribute__((used)) static unsigned int FUNC_4(Group_Chats *VAR_5, int VAR_6, int VAR_7, uint16_t VAR_8)
{
    Group_c *VAR_9 = FUNC_0(VAR_5, VAR_6);

    if (!VAR_9)
        return -1;

    uint8_t VAR_10[VAR_0 - (1 + sizeof(uint16_t))];
    VAR_10[0] = VAR_2;
    uint8_t *VAR_11 = VAR_10 + 1;

    uint16_t VAR_12 = 0;
    unsigned int VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_9->numpeers; ++VAR_13) {
        if ((VAR_11 - VAR_10) + sizeof(uint16_t) + VAR_4 * 2 + 1 + VAR_9->group[VAR_13].nick_len > sizeof(VAR_10)) {
            if (FUNC_3(VAR_5->fr_c, VAR_7, VAR_1, VAR_8, VAR_10, (VAR_11 - VAR_10))) {
                VAR_12 = VAR_13;
            } else {
                return VAR_12;
            }

            VAR_11 = VAR_10 + 1;
        }

        uint16_t VAR_14 = FUNC_1(VAR_9->group[VAR_13].peer_number);
        FUNC_2(VAR_11, &VAR_14, sizeof(VAR_14));
        VAR_11 += sizeof(VAR_14);
        FUNC_2(VAR_11, VAR_9->group[VAR_13].real_pk, VAR_4);
        VAR_11 += VAR_4;
        FUNC_2(VAR_11, VAR_9->group[VAR_13].temp_pk, VAR_4);
        VAR_11 += VAR_4;
        *VAR_11 = VAR_9->group[VAR_13].nick_len;
        VAR_11 += 1;
        FUNC_2(VAR_11, VAR_9->group[VAR_13].nick, VAR_9->group[VAR_13].nick_len);
        VAR_11 += VAR_9->group[VAR_13].nick_len;
    }

    if (VAR_12 != VAR_13) {
        if (FUNC_3(VAR_5->fr_c, VAR_7, VAR_1, VAR_8, VAR_10, (VAR_11 - VAR_10))) {
            VAR_12 = VAR_13;
        }
    }

    if (VAR_9->title_len) {
        uint8_t VAR_15[1 + VAR_9->title_len];
        VAR_15[0] = VAR_3;
        FUNC_2(VAR_15 + 1, VAR_9->title, VAR_9->title_len);
        FUNC_3(VAR_5->fr_c, VAR_7, VAR_1, VAR_8, VAR_15, sizeof(VAR_15));
    }

    return VAR_12;
}

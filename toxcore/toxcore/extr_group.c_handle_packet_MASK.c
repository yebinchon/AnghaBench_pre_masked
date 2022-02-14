
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int Group_c ;
typedef int Group_Chats ;




 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int*,int,int) ;
 int FUNC_3 (int *,int,int*,int,int) ;
 int FUNC_4 (int *,int,int*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, int VAR_2, uint8_t *VAR_3, uint16_t VAR_4)
{
    Group_Chats *VAR_5 = VAR_1;

    if (VAR_4 < 1 + sizeof(uint16_t) + 1)
        return -1;

    if (VAR_3[0] == VAR_0) {
        return FUNC_4(VAR_5, VAR_2, VAR_3 + 1, VAR_4 - 1);
    }

    if (VAR_3[0] != 129 && VAR_3[0] != 128)
        return -1;

    uint16_t VAR_6;
    FUNC_5(&VAR_6, VAR_3 + 1, sizeof(uint16_t));
    VAR_6 = FUNC_6(VAR_6);
    Group_c *VAR_7 = FUNC_1(VAR_5, VAR_6);

    if (!VAR_7)
        return -1;

    int VAR_8 = FUNC_0(VAR_7, VAR_2);

    if (VAR_8 == -1)
        return -1;

    switch (VAR_3[0]) {
        case 129: {
            FUNC_2(VAR_5, VAR_6, VAR_3 + 1 + sizeof(uint16_t), VAR_4 - (1 + sizeof(uint16_t)), VAR_8);
            break;
        }

        case 128: {
            FUNC_3(VAR_5, VAR_6, VAR_3 + 1 + sizeof(uint16_t), VAR_4 - (1 + sizeof(uint16_t)), VAR_8);
            break;
        }

        default: {
            return 0;
        }
    }

    return 0;
}

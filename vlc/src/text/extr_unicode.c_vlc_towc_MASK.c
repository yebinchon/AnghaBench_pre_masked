
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;

size_t FUNC_4 (const char *VAR_0, uint32_t *restrict VAR_1)
{
    uint8_t *VAR_2 = (uint8_t *)VAR_0, VAR_3;
    uint32_t VAR_4;

    FUNC_0 (VAR_0 != ((void*)0));

    VAR_3 = *VAR_2;
    if (FUNC_2(VAR_3 > 0xF4))
        return -1;

    int VAR_5 = FUNC_1((unsigned char)(VAR_3 ^ 0xFF));
    switch (VAR_5)
    {
        case 0:
            *VAR_1 = VAR_3;
            return VAR_3 != '\0';

        case 1:
            return -1;

        case 2:
            if (FUNC_2(VAR_3 < 0xC2))
                return -1;
            VAR_4 = (VAR_3 & 0x1F) << 6;
            break;

        case 3:
            VAR_4 = (VAR_3 & 0x0F) << 12;
            break;

        case 4:
            VAR_4 = (VAR_3 & 0x07) << 18;
            break;

        default:
            FUNC_3 ();
    }


    switch (VAR_5)
    {
        case 4:
            VAR_3 = *++VAR_2;
            if (FUNC_2((VAR_3 & 0xC0) != 0x80))
                return -1;
            VAR_4 |= (VAR_3 & 0x3F) << 12;

            if (FUNC_2(VAR_4 >= 0x110000))
                return -1;

        case 3:
            VAR_3 = *++VAR_2;
            if (FUNC_2((VAR_3 & 0xC0) != 0x80))
                return -1;
            VAR_4 |= (VAR_3 & 0x3F) << 6;

            if (FUNC_2(VAR_4 >= 0xD800 && VAR_4 < 0xE000))
                return -1;
            if (FUNC_2(VAR_4 < (1u << (5 * VAR_5 - 4))))
                return -1;

        case 2:
            VAR_3 = *++VAR_2;
            if (FUNC_2((VAR_3 & 0xC0) != 0x80))
                return -1;
            VAR_4 |= (VAR_3 & 0x3F);
            break;
    }

    *VAR_1 = VAR_4;
    return VAR_5;
}

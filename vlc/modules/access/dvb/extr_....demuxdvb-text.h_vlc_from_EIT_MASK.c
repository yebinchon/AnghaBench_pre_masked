
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int encbuf ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,int,char*,unsigned char) ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char*) ;
 char* FUNC_7 (char const*,size_t) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static char *FUNC_9 (const void *VAR_0, size_t VAR_1)
{
    if (FUNC_8(VAR_1 == 0))
        return ((void*)0);

    char VAR_2[12];
    const char *VAR_3 = VAR_2;

    const char *VAR_4 = VAR_0;
    size_t VAR_5 = 1;
    unsigned char VAR_6 = *VAR_4;

    if (VAR_6 >= 0x20)
    {
        VAR_5 = 0;
        VAR_3 = "ISO_6937";
    }
    else if ((1 << VAR_6) & 0x0EFE)
    {
        FUNC_4 (VAR_2, sizeof (VAR_2), "ISO_8859-%u", 4u + VAR_6);
    }
    else switch (VAR_6)
    {
        case 0x10:
            VAR_5 = 3;
            if (VAR_1 < 3 || VAR_4[1] != 0x00)
                return ((void*)0);

            VAR_6 = VAR_4[2];
            if ((1 << VAR_6) & 0xEFFE)
               FUNC_4 (VAR_2, sizeof (VAR_2), "ISO_8859-%hhu", VAR_6);
           else
               return ((void*)0);
           break;
        case 0x11:
        case 0x14:
            VAR_3 = "UCS-2BE";
            break;
        case 0x12:




            VAR_3 = "EUC-KR";
            break;
        case 0x13:
            VAR_3 = "GB2312";
            break;
        case 0x15:
            VAR_3 = "UTF-8";
            break;




        default:
            return ((void*)0);
    }

    VAR_4 += VAR_5;
    VAR_1 -= VAR_5;

    char *VAR_7 = FUNC_1 (VAR_3, VAR_4, VAR_1);
    if (VAR_7 == ((void*)0))
    {
        VAR_7 = FUNC_7 (VAR_4, VAR_1);
        if (FUNC_8(VAR_7 == ((void*)0)))
            return ((void*)0);
        FUNC_0 (VAR_7);
    }

    VAR_1 = FUNC_6(VAR_7);

    for (char *VAR_8 = FUNC_5 (VAR_7, '\xC2'); VAR_8; VAR_8 = FUNC_5 (VAR_8 + 1, '\xC2'))
    {





        if (VAR_8[1] == '\x8A')
            FUNC_2 (VAR_8, "\r\n", 2);


        if (VAR_8[1] == '\x86' || VAR_8[1] == '\x87') {
            const size_t VAR_9 = VAR_8 - VAR_7;
            FUNC_3 (VAR_8, VAR_8+2, VAR_1 - VAR_9);
            VAR_1 -= 2;
            VAR_7[VAR_1] = '\0';
            if (VAR_1 == VAR_9)
                break;
        }
    }


    for (char *VAR_10 = FUNC_5 (VAR_7, '\xEE'); VAR_10; VAR_10 = FUNC_5 (VAR_10 + 1, '\xEE'))
    {

        if (VAR_10[1] != '\x82')
            continue;
        if (VAR_10[2] == '\x8A')
            FUNC_2 (VAR_10, "\r\r\n", 3);


        if (VAR_10[2] == '\x86' || VAR_10[2] == '\x87') {
            const size_t VAR_11 = VAR_10 - VAR_7;
            FUNC_3 (VAR_10, VAR_10+3, VAR_1 - VAR_11);
            VAR_1 -= 3;
            VAR_7[VAR_1] = '\0';
            if (VAR_1 == VAR_11)
                break;
        }
    }

    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (char*,char**,int) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (unsigned int*,unsigned int*,unsigned int,unsigned int,int ) ;

int (FUNC_4)(vlc_object_t *VAR_2,
                           unsigned *VAR_3, unsigned *VAR_4,
                           const char *VAR_5)
{
    char *VAR_6 = FUNC_2(VAR_2, VAR_5);
    if (VAR_6 == ((void*)0))
        goto error;

    char *VAR_7;
    unsigned VAR_8 = FUNC_1(VAR_6, &VAR_7, 10);
    unsigned VAR_9;

    switch (*VAR_7) {
        case '\0':

            VAR_9 = 1;
            break;

        case ':':
        case '/':

            VAR_9 = FUNC_1(VAR_7 + 1, &VAR_7, 10);
            if (*VAR_7 != '\0')
                goto error;
            break;

        case '.': {

            unsigned char VAR_10;

            VAR_9 = 1;
            while ((VAR_10 = *(++VAR_7)) != '\0') {
                VAR_10 -= '0';

                if (VAR_10 >= 10)
                    goto error;

                VAR_8 = VAR_8 * 10 + VAR_10;
                VAR_9 *= 10;
            }
            break;
        }

        default:
            goto error;
    }

    FUNC_0(VAR_6);

    if (VAR_8 == 0) {
        *VAR_3 = 0;
        *VAR_4 = VAR_9 ? 1 : 0;
    } else if (VAR_9 == 0) {
        *VAR_3 = 1;
        *VAR_4 = 0;
    } else
        FUNC_3(VAR_3, VAR_4, VAR_8, VAR_9, 0);

    return VAR_1;

error:
    FUNC_0(VAR_6);
    *VAR_3 = 0;
    *VAR_4 = 0;
    return VAR_0;
}

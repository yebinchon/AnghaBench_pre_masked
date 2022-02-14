
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hpack_decoder {int dummy; } ;
typedef scalar_t__ int_fast32_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int const**,size_t*) ;
 char* FUNC_2 (struct hpack_decoder*,scalar_t__) ;
 char* FUNC_3 (struct hpack_decoder*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hpack_decoder *VAR_0,
                                    const uint8_t **restrict VAR_1,
                                    size_t *restrict VAR_2,
                                    char **restrict VAR_3,
                                    char **restrict VAR_4)
{
    int_fast32_t VAR_5 = FUNC_1(7, VAR_1, VAR_2);
    if (VAR_5 < 0)
        return -1;

    char *VAR_6 = FUNC_2(VAR_0, VAR_5);
    if (VAR_6 == ((void*)0))
        return -1;

    char *VAR_7 = FUNC_3(VAR_0, VAR_5);
    if (VAR_7 == ((void*)0))
    {
        FUNC_0(VAR_6);
        return -1;
    }

    *VAR_3 = VAR_6;
    *VAR_4 = VAR_7;
    return 0;
}

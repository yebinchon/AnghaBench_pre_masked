
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hpack_decoder {size_t max_size; } ;
typedef size_t int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpack_decoder*) ;
 size_t FUNC_1 (int,int const**,size_t*) ;

__attribute__((used)) static int FUNC_2(struct hpack_decoder *VAR_2,
                                   const uint8_t **restrict VAR_3,
                                   size_t *restrict VAR_4,
                                   char **restrict VAR_5,
                                   char **restrict VAR_6)
{
    int_fast32_t VAR_7 = FUNC_1(5, VAR_3, VAR_4);
    if (VAR_7 < 0)
        return -1;

    if ((size_t)VAR_7 > VAR_2->max_size)
    {
        VAR_1 = VAR_0;
        return -1;
    }

    *VAR_6 = *VAR_5 = ((void*)0);
    VAR_2->max_size = VAR_7;
    FUNC_0(VAR_2);
    return 0;
}

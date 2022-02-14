
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hpack_decoder {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hpack_decoder*,int const**,size_t*,char**,char**) ;
 int FUNC_2 (struct hpack_decoder*,int const**,size_t*,char**,char**) ;
 int FUNC_3 (struct hpack_decoder*,int const**,size_t*,char**,char**) ;
 int FUNC_4 (struct hpack_decoder*,int const**,size_t*,char**,char**) ;

__attribute__((used)) static int FUNC_5(struct hpack_decoder *VAR_0,
                            const uint8_t **restrict VAR_1,
                            size_t *restrict VAR_2,
                            char **restrict VAR_3,
                            char **restrict VAR_4)
{
    int (*VAR_5)(struct hpack_decoder *, const uint8_t **, size_t *,
              char **, char **);

    FUNC_0(*VAR_2 >= 1);

    uint8_t VAR_6 = **VAR_1;

    if (VAR_6 & 0x80)
        VAR_5 = FUNC_2;
    else if (VAR_6 & 0x40)
        VAR_5 = FUNC_1;
    else if (VAR_6 & 0x20)
        VAR_5 = FUNC_4;
    else

        VAR_5 = FUNC_3;

    return VAR_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

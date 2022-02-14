
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef char u_char ;
typedef int ngx_uint_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static u_char *
FUNC_1(u_char *VAR_2, u_char *VAR_3, uint64_t VAR_4, u_char VAR_5,
    ngx_uint_t VAR_6, ngx_uint_t VAR_7)
{
    u_char *VAR_8, VAR_9[VAR_0 + 1];




    size_t VAR_10;
    uint32_t VAR_11;
    static u_char VAR_12[] = "0123456789abcdef";
    static u_char VAR_13[] = "0123456789ABCDEF";

    VAR_8 = VAR_9 + VAR_0;

    if (VAR_6 == 0) {

        if (VAR_4 <= (uint64_t) VAR_1) {
            VAR_11 = (uint32_t) VAR_4;

            do {
                *--VAR_8 = (u_char) (VAR_11 % 10 + '0');
            } while (VAR_11 /= 10);

        } else {
            do {
                *--VAR_8 = (u_char) (VAR_4 % 10 + '0');
            } while (VAR_4 /= 10);
        }

    } else if (VAR_6 == 1) {

        do {


            *--VAR_8 = VAR_12[(uint32_t) (VAR_4 & 0xf)];

        } while (VAR_4 >>= 4);

    } else {

        do {


            *--VAR_8 = VAR_13[(uint32_t) (VAR_4 & 0xf)];

        } while (VAR_4 >>= 4);
    }



    VAR_10 = (VAR_9 + VAR_0) - VAR_8;

    while (VAR_10++ < VAR_7 && VAR_2 < VAR_3) {
        *VAR_2++ = VAR_5;
    }



    VAR_10 = (VAR_9 + VAR_0) - VAR_8;

    if (VAR_2 + VAR_10 > VAR_3) {
        VAR_10 = VAR_3 - VAR_2;
    }

    return FUNC_0(VAR_2, VAR_8, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
struct hxxx_helper {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hxxx_helper*,int const*,size_t,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct hxxx_helper *VAR_3, const uint8_t *VAR_4,
                         size_t VAR_5)
{
    if (VAR_5 < VAR_0)
        return VAR_1;

    VAR_4 += 5; VAR_5 -= 5;

    for (unsigned int VAR_6 = 0; VAR_6 < 2 && VAR_5 > 0; VAR_6++)
    {

        const unsigned int VAR_7 = VAR_4[0] & (VAR_6 == 0 ? 0x1f : 0xff);
        VAR_4++; VAR_5--;

        for (unsigned int VAR_8 = 0; VAR_8 < VAR_7 && VAR_5 >= 2; VAR_8++)
        {
            uint16_t VAR_9 = (VAR_4[0] << 8) | VAR_4[1];
            if (VAR_9 > VAR_5 - 2)
                return VAR_1;
            bool VAR_10;
            int VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_9 + 2, 2,
                                              &VAR_10);
            if (VAR_11 != VAR_2)
                return VAR_11;
            VAR_4 += VAR_9 + 2;
            VAR_5 -= VAR_9 + 2;
        }
    }

    return VAR_2;
}

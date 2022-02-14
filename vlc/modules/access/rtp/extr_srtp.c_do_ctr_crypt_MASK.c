
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int gcry_cipher_hd_t ;
struct TYPE_3__ {size_t const quot; int rem; } ;
typedef TYPE_1__ div_t ;


 TYPE_1__ FUNC_0 (size_t,size_t const) ;
 scalar_t__ FUNC_1 (int ,int *,size_t const,int *,size_t const) ;
 scalar_t__ FUNC_2 (int ,void const*,size_t const) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5 (gcry_cipher_hd_t VAR_0, const void *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
    const size_t VAR_4 = 16;
    div_t VAR_5 = FUNC_0 (VAR_3, VAR_4);

    if (FUNC_2 (VAR_0, VAR_1, VAR_4)
     || FUNC_1 (VAR_0, VAR_2, VAR_5.quot * VAR_4, ((void*)0), 0))
        return -1;

    if (VAR_5.rem)
    {

        uint8_t VAR_6[VAR_4];
        VAR_2 += VAR_5.quot * VAR_4;
        FUNC_3 (VAR_6, VAR_2, VAR_5.rem);
        FUNC_4 (VAR_6 + VAR_5.rem, 0, VAR_4 - VAR_5.rem);

        if (FUNC_1 (VAR_0, VAR_6, VAR_4, VAR_2, VAR_4))
            return -1;
        FUNC_3 (VAR_2, VAR_6, VAR_5.rem);
    }

    return 0;
}

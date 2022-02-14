
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int gcry_cipher_hd_t ;


 int FUNC_0 (int ,int,int,int,int const*,int *,size_t) ;

__attribute__((used)) static int
FUNC_1 (gcry_cipher_hd_t VAR_0, uint32_t VAR_1, uint32_t VAR_2,
            const uint32_t *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
    return FUNC_0 (VAR_0, VAR_1, VAR_2 >> 16, VAR_2 & 0xffff, VAR_3, VAR_4, VAR_5);
}

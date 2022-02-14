
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(const uint8_t *VAR_0, size_t VAR_1, uint8_t *VAR_2)
{
    uint64_t VAR_3 = 0;
    *VAR_2 = 0;
    for(size_t VAR_4=0; VAR_4<8; VAR_4++)
    {
        if(VAR_4 >= VAR_1)
            break;
        VAR_3 |= ((uint64_t)(VAR_0[VAR_4] & 0x7F) << (VAR_4 * 7));
        if((VAR_0[VAR_4] & 0x80) == 0)
        {
            *VAR_2 = VAR_4 + 1;
            break;
        }
    }
    return *VAR_2 ? VAR_3 : 0;
}

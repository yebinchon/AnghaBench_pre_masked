
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int hash_t ;
struct TYPE_3__ {int candidates_bucket_size; } ;
typedef TYPE_1__ Assoc ;


 int VAR_0 ;

__attribute__((used)) static hash_t FUNC_0(const Assoc *VAR_1, const uint8_t *VAR_2)
{
    uint32_t VAR_3, VAR_4 = 0x19a64e82;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        VAR_4 = ((VAR_4 << 1) ^ VAR_2[VAR_3]) + (VAR_4 >> 31);



    if (!(VAR_4 % VAR_1->candidates_bucket_size))
        VAR_4++;

    return VAR_4;
}

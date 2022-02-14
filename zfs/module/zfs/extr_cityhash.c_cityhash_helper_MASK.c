
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = (VAR_0 ^ VAR_1) * VAR_2;
 VAR_3 ^= (VAR_3 >> 47);
 uint64_t VAR_4 = (VAR_1 ^ VAR_3) * VAR_2;
 VAR_4 ^= (VAR_4 >> 47);
 VAR_4 *= VAR_2;
 return (VAR_4);
}

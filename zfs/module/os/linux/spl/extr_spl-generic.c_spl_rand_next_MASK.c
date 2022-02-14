
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(uint64_t *VAR_0)
{
 uint64_t VAR_1 = VAR_0[0];
 const uint64_t VAR_2 = VAR_0[1];
 VAR_0[0] = VAR_2;
 VAR_1 ^= VAR_1 << 23;
 VAR_0[1] = VAR_1 ^ VAR_2 ^ (VAR_1 >> 18) ^ (VAR_2 >> 5);
 return (VAR_0[1] + VAR_2);
}

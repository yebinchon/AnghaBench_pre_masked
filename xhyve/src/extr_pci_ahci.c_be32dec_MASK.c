
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static __inline uint32_t
FUNC_0(const void *VAR_0)
{
 unsigned char const *VAR_1 = (unsigned char const *)VAR_0;

 return (uint32_t) ((((uint64_t) VAR_1[0]) << 24) |
  (((uint64_t) VAR_1[1]) << 16) | (((uint64_t) VAR_1[2]) << 8) |
   ((uint64_t) VAR_1[3]));
}

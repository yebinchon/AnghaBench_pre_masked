
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_1(const objset_t *VAR_2, uint64_t VAR_3)
{
 uintptr_t VAR_4 = (uintptr_t)VAR_2;
 uint64_t VAR_5 = -1ULL;

 FUNC_0(VAR_1[128] == VAR_0);




 VAR_5 = (VAR_5 >> 8) ^ VAR_1[(VAR_5 ^ (VAR_4 >> 6)) & 0xFF];
 VAR_5 = (VAR_5 >> 8) ^ VAR_1[(VAR_5 ^ (VAR_3 >> 0)) & 0xFF];
 VAR_5 = (VAR_5 >> 8) ^ VAR_1[(VAR_5 ^ (VAR_3 >> 8)) & 0xFF];
 VAR_5 = (VAR_5 >> 8) ^ VAR_1[(VAR_5 ^ (VAR_3 >> 16)) & 0xFF];

 VAR_5 ^= (VAR_4>>14) ^ (VAR_3>>24);

 return (VAR_5);
}

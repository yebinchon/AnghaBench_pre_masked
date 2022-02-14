
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__* c64; } ;
struct TYPE_5__ {int* s32; int* s64; } ;
struct TYPE_7__ {TYPE_2__ count; scalar_t__ algotype; TYPE_1__ state; } ;
typedef TYPE_3__ SHA2_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

void
FUNC_1(uint64_t VAR_1, SHA2_CTX *VAR_2)
{

 switch (VAR_1) {
 case 136:
 case 137:
 case 138:
  VAR_2->state.s32[0] = 0x6a09e667U;
  VAR_2->state.s32[1] = 0xbb67ae85U;
  VAR_2->state.s32[2] = 0x3c6ef372U;
  VAR_2->state.s32[3] = 0xa54ff53aU;
  VAR_2->state.s32[4] = 0x510e527fU;
  VAR_2->state.s32[5] = 0x9b05688cU;
  VAR_2->state.s32[6] = 0x1f83d9abU;
  VAR_2->state.s32[7] = 0x5be0cd19U;
  break;
 case 133:
 case 134:
 case 135:
  VAR_2->state.s64[0] = 0xcbbb9d5dc1059ed8ULL;
  VAR_2->state.s64[1] = 0x629a292a367cd507ULL;
  VAR_2->state.s64[2] = 0x9159015a3070dd17ULL;
  VAR_2->state.s64[3] = 0x152fecd8f70e5939ULL;
  VAR_2->state.s64[4] = 0x67332667ffc00b31ULL;
  VAR_2->state.s64[5] = 0x8eb44a8768581511ULL;
  VAR_2->state.s64[6] = 0xdb0c2e0d64f98fa7ULL;
  VAR_2->state.s64[7] = 0x47b5481dbefa4fa4ULL;
  break;
 case 128:
 case 129:
 case 130:
  VAR_2->state.s64[0] = 0x6a09e667f3bcc908ULL;
  VAR_2->state.s64[1] = 0xbb67ae8584caa73bULL;
  VAR_2->state.s64[2] = 0x3c6ef372fe94f82bULL;
  VAR_2->state.s64[3] = 0xa54ff53a5f1d36f1ULL;
  VAR_2->state.s64[4] = 0x510e527fade682d1ULL;
  VAR_2->state.s64[5] = 0x9b05688c2b3e6c1fULL;
  VAR_2->state.s64[6] = 0x1f83d9abfb41bd6bULL;
  VAR_2->state.s64[7] = 0x5be0cd19137e2179ULL;
  break;
 case 132:
  VAR_2->state.s64[0] = 0x8C3D37C819544DA2ULL;
  VAR_2->state.s64[1] = 0x73E1996689DCD4D6ULL;
  VAR_2->state.s64[2] = 0x1DFAB7AE32FF9C82ULL;
  VAR_2->state.s64[3] = 0x679DD514582F9FCFULL;
  VAR_2->state.s64[4] = 0x0F6D2B697BD44DA8ULL;
  VAR_2->state.s64[5] = 0x77E36F7304C48942ULL;
  VAR_2->state.s64[6] = 0x3F9D85A86A1D36C8ULL;
  VAR_2->state.s64[7] = 0x1112E6AD91D692A1ULL;
  break;
 case 131:
  VAR_2->state.s64[0] = 0x22312194FC2BF72CULL;
  VAR_2->state.s64[1] = 0x9F555FA3C84C64C2ULL;
  VAR_2->state.s64[2] = 0x2393B86B6F53B151ULL;
  VAR_2->state.s64[3] = 0x963877195940EABDULL;
  VAR_2->state.s64[4] = 0x96283EE2A88EFFE3ULL;
  VAR_2->state.s64[5] = 0xBE5E1E2553863992ULL;
  VAR_2->state.s64[6] = 0x2B0199FC2C85B8AAULL;
  VAR_2->state.s64[7] = 0x0EB72DDC81C52CA2ULL;
  break;







 }

 VAR_2->algotype = (uint32_t)VAR_1;
 VAR_2->count.c64[0] = VAR_2->count.c64[1] = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_6__ {size_t sh_hashlen; int sh_count; TYPE_2__** sh_hash; } ;
typedef TYPE_1__ fmd_serd_hash_t ;
struct TYPE_7__ {struct TYPE_7__* sg_next; } ;
typedef TYPE_2__ fmd_serd_eng_t ;


 TYPE_2__* FUNC_0 (char const*,size_t,scalar_t__) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int,unsigned long long) ;

fmd_serd_eng_t *
FUNC_3(fmd_serd_hash_t *VAR_0, const char *VAR_1,
    uint_t VAR_2, hrtime_t VAR_3)
{
 uint_t VAR_4 = FUNC_1(VAR_1) % VAR_0->sh_hashlen;
 fmd_serd_eng_t *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2("  SERD Engine: inserting  %s N %d T %llu",
     VAR_1, (int)VAR_2, (long long unsigned)VAR_3);

 VAR_5->sg_next = VAR_0->sh_hash[VAR_4];
 VAR_0->sh_hash[VAR_4] = VAR_5;
 VAR_0->sh_count++;

 return (VAR_5);
}

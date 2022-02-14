
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {size_t nreloc; scalar_t__ nrelocsym; int * code; TYPE_1__* reloc; int * relocsym; } ;
struct TYPE_5__ {int type; scalar_t__ sym; scalar_t__ ofs; } ;
typedef TYPE_2__ BuildCtx ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_3(BuildCtx *VAR_4, uint8_t *VAR_5, int VAR_6, int VAR_7)
{
  if (VAR_4->nreloc >= VAR_0) {
    FUNC_1(VAR_3, "Error: too many relocations, increase BUILD_MAX_RELOC.\n");
    FUNC_0(1);
  }
  if (VAR_2[VAR_6] < 0) {
    VAR_2[VAR_6] = VAR_4->nrelocsym;
    VAR_4->relocsym[VAR_4->nrelocsym] = FUNC_2(VAR_4, "", VAR_1[VAR_6]);
    VAR_4->nrelocsym++;
  }
  VAR_4->reloc[VAR_4->nreloc].ofs = (int32_t)(VAR_5 - VAR_4->code);
  VAR_4->reloc[VAR_4->nreloc].sym = VAR_2[VAR_6];
  VAR_4->reloc[VAR_4->nreloc].type = VAR_7;
  VAR_4->nreloc++;



  return 0;

}

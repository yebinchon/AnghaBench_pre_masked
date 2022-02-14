
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {TYPE_1__* sym; int nsym; } ;
struct TYPE_5__ {scalar_t__ ofs; int name; } ;
typedef TYPE_2__ BuildCtx ;


 int FUNC_0 (TYPE_2__*,char const*,char const*) ;

__attribute__((used)) static void FUNC_1(BuildCtx *VAR_0, int32_t VAR_1,
         const char *VAR_2, const char *VAR_3)
{
  ptrdiff_t VAR_4 = VAR_0->nsym++;
  while (VAR_4 > 0) {
    if (VAR_0->sym[VAR_4-1].ofs <= VAR_1)
      break;
    VAR_0->sym[VAR_4] = VAR_0->sym[VAR_4-1];
    VAR_4--;
  }
  VAR_0->sym[VAR_4].ofs = VAR_1;
  VAR_0->sym[VAR_4].name = FUNC_0(VAR_0, VAR_2, VAR_3);
}

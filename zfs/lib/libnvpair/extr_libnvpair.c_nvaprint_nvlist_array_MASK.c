
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int nvlist_t ;
typedef TYPE_1__* nvlist_prtctl_t ;
struct TYPE_5__ {scalar_t__ nvprt_indentinc; int nvprt_indent; int * nvprt_fp; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(nvlist_prtctl_t VAR_0, void *VAR_1,
    nvlist_t *VAR_2, const char *VAR_3, nvlist_t **VAR_4, uint_t VAR_5)
{
 FILE *VAR_6 = VAR_0->nvprt_fp;
 uint_t VAR_7;

 FUNC_1(VAR_0, 1);
 (void) FUNC_0(VAR_6, "%s = (array of embedded nvlists)\n", VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_1(VAR_0, 1);
  (void) FUNC_0(VAR_6, "(start %s[%d])\n", VAR_3, VAR_7);

  VAR_0->nvprt_indent += VAR_0->nvprt_indentinc;
  FUNC_2(VAR_4[VAR_7], VAR_0);
  VAR_0->nvprt_indent -= VAR_0->nvprt_indentinc;

  FUNC_1(VAR_0, 1);
  (void) FUNC_0(VAR_6, "(end %s[%d])\n", VAR_3, VAR_7);
 }

 return (1);
}

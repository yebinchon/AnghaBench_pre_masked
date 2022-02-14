
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* nvlist_prtctl_t ;
typedef enum nvlist_prtctl_fmt { ____Placeholder_nvlist_prtctl_fmt } nvlist_prtctl_fmt ;
struct TYPE_3__ {char const* nvprt_nmfmt; char const* nvprt_eomfmt; char* nvprt_btwnarrfmt; int nvprt_btwnarrfmt_nl; } ;





 int * FUNC_0 (char const*,char*) ;

void
FUNC_1(nvlist_prtctl_t VAR_0, enum nvlist_prtctl_fmt VAR_1,
    const char *VAR_2)
{
 switch (VAR_1) {
 case 129:
  if (VAR_2 == ((void*)0))
   VAR_2 = "%s = ";
  VAR_0->nvprt_nmfmt = VAR_2;
  break;

 case 128:
  if (VAR_2 == ((void*)0))
   VAR_2 = "\n";
  VAR_0->nvprt_eomfmt = VAR_2;
  break;

 case 130:
  if (VAR_2 == ((void*)0)) {
   VAR_0->nvprt_btwnarrfmt = " ";
   VAR_0->nvprt_btwnarrfmt_nl = 0;
  } else {
   VAR_0->nvprt_btwnarrfmt = VAR_2;
   VAR_0->nvprt_btwnarrfmt_nl = (FUNC_0(VAR_2, "\n") != ((void*)0));
  }
  break;

 default:
  break;
 }
}

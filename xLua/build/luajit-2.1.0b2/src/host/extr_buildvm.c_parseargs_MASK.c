
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; char* outname; char** args; } ;
typedef scalar_t__ BuildMode ;
typedef TYPE_1__ BuildCtx ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(BuildCtx *VAR_0, char **VAR_1)
{
  const char *VAR_2;
  int VAR_3;
  VAR_0->mode = (BuildMode)-1;
  VAR_0->outname = "-";
  for (VAR_3 = 1; (VAR_2 = VAR_1[VAR_3]) != ((void*)0); VAR_3++) {
    if (VAR_2[0] != '-')
      break;
    switch (VAR_2[1]) {
    case '-':
      if (VAR_2[2]) goto err;
      VAR_3++;
      goto ok;
    case '\0':
      goto ok;
    case 'm':
      VAR_3++;
      if (VAR_2[2] || VAR_1[VAR_3] == ((void*)0)) goto err;
      VAR_0->mode = FUNC_0(VAR_1[VAR_3]);
      break;
    case 'o':
      VAR_3++;
      if (VAR_2[2] || VAR_1[VAR_3] == ((void*)0)) goto err;
      VAR_0->outname = VAR_1[VAR_3];
      break;
    default: err:
      FUNC_1();
      break;
    }
  }
ok:
  VAR_0->args = VAR_1+VAR_3;
  if (VAR_0->mode == (BuildMode)-1) goto err;
}

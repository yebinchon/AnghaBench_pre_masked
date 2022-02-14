
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zprop_source_t ;
struct TYPE_4__ {int cb_sources; int* cb_columns; char** cb_colwidths; scalar_t__ cb_scripted; int cb_type; scalar_t__ cb_first; } ;
typedef TYPE_1__ zprop_get_cbdata_t ;
typedef int buf ;



 int VAR_0 ;




 int VAR_1 ;






 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(const char *VAR_2, zprop_get_cbdata_t *VAR_3,
    const char *VAR_4, const char *VAR_5, zprop_source_t VAR_6,
    const char *VAR_7, const char *VAR_8)
{
 int VAR_9;
 const char *VAR_10 = ((void*)0);
 char VAR_11[128];




 if ((VAR_6 & VAR_3->cb_sources) == 0)
  return;

 if (VAR_3->cb_first)
  FUNC_3(VAR_3, VAR_3->cb_type);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  switch (VAR_3->cb_columns[VAR_9]) {
  case 138:
   VAR_10 = VAR_2;
   break;

  case 137:
   VAR_10 = VAR_4;
   break;

  case 134:
   VAR_10 = VAR_5;
   break;

  case 135:
   switch (VAR_6) {
   case 130:
    VAR_10 = "-";
    break;

   case 133:
    VAR_10 = "default";
    break;

   case 131:
    VAR_10 = "local";
    break;

   case 128:
    VAR_10 = "temporary";
    break;

   case 132:
    (void) FUNC_2(VAR_11, sizeof (VAR_11),
        "inherited from %s", VAR_7);
    VAR_10 = VAR_11;
    break;
   case 129:
    VAR_10 = "received";
    break;

   default:
    VAR_10 = ((void*)0);
    FUNC_0(!"unhandled zprop_source_t");
   }
   break;

  case 136:
   VAR_10 = (VAR_8 == ((void*)0) ? "-" : VAR_8);
   break;

  default:
   continue;
  }

  if (VAR_9 == (VAR_1 - 1) ||
      VAR_3->cb_columns[VAR_9 + 1] == VAR_0)
   (void) FUNC_1("%s", VAR_10);
  else if (VAR_3->cb_scripted)
   (void) FUNC_1("%s\t", VAR_10);
  else
   (void) FUNC_1("%-*s  ",
       VAR_3->cb_colwidths[VAR_3->cb_columns[VAR_9]],
       VAR_10);
 }

 (void) FUNC_1("\n");
}

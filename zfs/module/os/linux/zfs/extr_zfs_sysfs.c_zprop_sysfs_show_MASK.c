
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pd_types; size_t pd_proptype; scalar_t__ pd_attr; char* pd_values; char* pd_strdefault; int pd_numdefault; int pd_propnum; scalar_t__ pd_visible; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef char const* u_longlong_t ;
typedef int ssize_t ;
typedef int number ;
struct TYPE_6__ {int ztm_type; char const* ztm_name; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (int ,int ,char const**,int) ;
 char** VAR_4 ;

__attribute__((used)) static ssize_t
FUNC_4(const char *VAR_5, const zprop_desc_t *VAR_6,
    char *VAR_7, size_t VAR_8)
{
 const char *VAR_9;
 char VAR_10[32];


 if (FUNC_2(VAR_5, "datasets") == 0 &&
     VAR_6->pd_types != VAR_2) {
  int VAR_11 = 0;

  for (int VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
   if (VAR_3[VAR_12].ztm_type & VAR_6->pd_types) {
    VAR_11 += FUNC_1(VAR_7 + VAR_11, VAR_8 - VAR_11, "%s ",
        VAR_3[VAR_12].ztm_name);
   }
  }
  VAR_11 += FUNC_1(VAR_7 + VAR_11, VAR_8 - VAR_11, "\n");
  return (VAR_11);
 }

 if (FUNC_2(VAR_5, "type") == 0) {
  VAR_9 = VAR_4[VAR_6->pd_proptype];
 } else if (FUNC_2(VAR_5, "readonly") == 0) {
  VAR_9 = VAR_6->pd_attr == VAR_1 ? "1" : "0";
 } else if (FUNC_2(VAR_5, "setonce") == 0) {
  VAR_9 = VAR_6->pd_attr == VAR_0 ? "1" : "0";
 } else if (FUNC_2(VAR_5, "visible") == 0) {
  VAR_9 = VAR_6->pd_visible ? "1" : "0";
 } else if (FUNC_2(VAR_5, "values") == 0) {
  VAR_9 = VAR_6->pd_values ? VAR_6->pd_values : "";
 } else if (FUNC_2(VAR_5, "default") == 0) {
  switch (VAR_6->pd_proptype) {
  case 129:
   (void) FUNC_1(VAR_10, sizeof (VAR_10), "%llu",
       (u_longlong_t)VAR_6->pd_numdefault);
   VAR_9 = VAR_10;
   break;
  case 128:
   VAR_9 = VAR_6->pd_strdefault ?
       VAR_6->pd_strdefault : "";
   break;
  case 130:
   if (FUNC_3(VAR_6->pd_propnum,
       VAR_6->pd_numdefault, &VAR_9,
       VAR_6->pd_types) != 0) {
    VAR_9 = "";
   }
   break;
  default:
   return (0);
  }
 } else {
  return (0);
 }

 return (FUNC_1(VAR_7, VAR_8, "%s\n", VAR_9));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_cell {int fg; int bg; scalar_t__ attr; } ;
struct style {scalar_t__ list; scalar_t__ range_type; int range_argument; scalar_t__ align; scalar_t__ default_type; int fill; struct grid_cell gc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char const* FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,int) ;
 scalar_t__ FUNC_3 (char*,int,char*,char const*,char const*) ;

const char *
FUNC_4(struct style *VAR_17)
{
 struct grid_cell *VAR_18 = &VAR_17->gc;
 int VAR_19 = 0;
 const char *VAR_20 = "", *VAR_21 = "";
 static char VAR_22[256];
 char VAR_23[16];

 *VAR_22 = '\0';

 if (VAR_17->list != VAR_10) {
  if (VAR_17->list == VAR_11)
   VAR_21 = "on";
  else if (VAR_17->list == VAR_8)
   VAR_21 = "focus";
  else if (VAR_17->list == VAR_9)
   VAR_21 = "left-marker";
  else if (VAR_17->list == VAR_12)
   VAR_21 = "right-marker";
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%slist=%s", VAR_20,
      VAR_21);
  VAR_20 = ",";
 }
 if (VAR_17->range_type != VAR_14) {
  if (VAR_17->range_type == VAR_13)
   VAR_21 = "left";
  else if (VAR_17->range_type == VAR_15)
   VAR_21 = "right";
  else if (VAR_17->range_type == VAR_16) {
   FUNC_2(VAR_23, sizeof VAR_23, "window|%u", VAR_17->range_argument);
   VAR_21 = VAR_23;
  }
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%srange=%s", VAR_20,
      VAR_21);
  VAR_20 = ",";
 }
 if (VAR_17->align != VAR_2) {
  if (VAR_17->align == VAR_3)
   VAR_21 = "left";
  else if (VAR_17->align == VAR_1)
   VAR_21 = "centre";
  else if (VAR_17->align == VAR_4)
   VAR_21 = "right";
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%salign=%s", VAR_20,
      VAR_21);
  VAR_20 = ",";
 }
 if (VAR_17->default_type != VAR_5) {
  if (VAR_17->default_type == VAR_7)
   VAR_21 = "push-default";
  else if (VAR_17->default_type == VAR_6)
   VAR_21 = "pop-default";
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%s%s", VAR_20, VAR_21);
  VAR_20 = ",";
 }
 if (VAR_17->fill != 8) {
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%sfill=%s", VAR_20,
      FUNC_1(VAR_17->fill));
  VAR_20 = ",";
 }
 if (VAR_18->fg != 8) {
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%sfg=%s", VAR_20,
      FUNC_1(VAR_18->fg));
  VAR_20 = ",";
 }
 if (VAR_18->bg != 8) {
  VAR_19 += FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%sbg=%s", VAR_20,
      FUNC_1(VAR_18->bg));
  VAR_20 = ",";
 }
 if (VAR_18->attr != 0 && VAR_18->attr != VAR_0) {
  FUNC_3(VAR_22 + VAR_19, sizeof VAR_22 - VAR_19, "%s%s", VAR_20,
      FUNC_0(VAR_18->attr));
  VAR_20 = ",";
 }

 if (*VAR_22 == '\0')
  return ("default");
 return (VAR_22);
}

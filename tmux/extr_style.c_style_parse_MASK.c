
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int fg; int bg; int attr; int flags; } ;
struct style {int fill; TYPE_1__ gc; int align; int range_argument; int range_type; int list; int default_type; } ;
struct grid_cell {int fg; int bg; int attr; int flags; } ;
struct TYPE_4__ {int align; int range_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,size_t) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*,char const) ;
 size_t FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 int FUNC_10 (struct style*,struct style*) ;
 TYPE_2__ VAR_13 ;

int
FUNC_11(struct style *VAR_14, const struct grid_cell *VAR_15, const char *VAR_16)
{
 struct style VAR_17;
 const char VAR_18[] = " ,", *VAR_19;
 char VAR_20[256], *VAR_21;
 int VAR_22;
 size_t VAR_23;

 if (*VAR_16 == '\0')
  return (0);
 FUNC_10(&VAR_17, VAR_14);

 do {
  while (*VAR_16 != '\0' && FUNC_6(VAR_18, *VAR_16) != ((void*)0))
   VAR_16++;
  if (*VAR_16 == '\0')
   break;

  VAR_23 = FUNC_7(VAR_16, VAR_18);
  if (VAR_23 > (sizeof VAR_20) - 1)
   goto error;
  FUNC_4(VAR_20, VAR_16, VAR_23);
  VAR_20[VAR_23] = '\0';

  if (FUNC_5(VAR_20, "default") == 0) {
   VAR_14->gc.fg = VAR_15->fg;
   VAR_14->gc.bg = VAR_15->bg;
   VAR_14->gc.attr = VAR_15->attr;
   VAR_14->gc.flags = VAR_15->flags;
  } else if (FUNC_5(VAR_20, "push-default") == 0)
   VAR_14->default_type = VAR_4;
  else if (FUNC_5(VAR_20, "pop-default") == 0)
   VAR_14->default_type = VAR_3;
  else if (FUNC_5(VAR_20, "nolist") == 0)
   VAR_14->list = VAR_7;
  else if (FUNC_8(VAR_20, "list=", 5) == 0) {
   if (FUNC_5(VAR_20 + 5, "on") == 0)
    VAR_14->list = VAR_8;
   else if (FUNC_5(VAR_20 + 5, "focus") == 0)
    VAR_14->list = VAR_5;
   else if (FUNC_5(VAR_20 + 5, "left-marker") == 0)
    VAR_14->list = VAR_6;
   else if (FUNC_5(VAR_20 + 5, "right-marker") == 0)
    VAR_14->list = VAR_9;
   else
    goto error;
  } else if (FUNC_5(VAR_20, "norange") == 0) {
   VAR_14->range_type = VAR_13.range_type;
   VAR_14->range_argument = VAR_13.range_type;
  } else if (VAR_23 > 6 && FUNC_8(VAR_20, "range=", 6) == 0) {
   VAR_21 = FUNC_6(VAR_20 + 6, '|');
   if (VAR_21 != ((void*)0)) {
    *VAR_21++ = '\0';
    if (*VAR_21 == '\0')
     goto error;
    for (VAR_19 = VAR_21; *VAR_19 != '\0'; VAR_19++) {
     if (!FUNC_3((u_char)*VAR_19))
      goto error;
    }
   }
   if (FUNC_5(VAR_20 + 6, "left") == 0) {
    if (VAR_21 != ((void*)0))
     goto error;
    VAR_14->range_type = VAR_10;
    VAR_14->range_argument = 0;
   } else if (FUNC_5(VAR_20 + 6, "right") == 0) {
    if (VAR_21 != ((void*)0))
     goto error;
    VAR_14->range_type = VAR_11;
    VAR_14->range_argument = 0;
   } else if (FUNC_5(VAR_20 + 6, "window") == 0) {
    if (VAR_21 == ((void*)0))
     goto error;
    VAR_14->range_type = VAR_12;
    VAR_14->range_argument = FUNC_0(VAR_21);
   }
  } else if (FUNC_5(VAR_20, "noalign") == 0)
   VAR_14->align = VAR_13.align;
  else if (VAR_23 > 6 && FUNC_8(VAR_20, "align=", 6) == 0) {
   if (FUNC_5(VAR_20 + 6, "left") == 0)
    VAR_14->align = VAR_1;
   else if (FUNC_5(VAR_20 + 6, "centre") == 0)
    VAR_14->align = VAR_0;
   else if (FUNC_5(VAR_20 + 6, "right") == 0)
    VAR_14->align = VAR_2;
   else
    goto error;
  } else if (VAR_23 > 5 && FUNC_8(VAR_20, "fill=", 5) == 0) {
   if ((VAR_22 = FUNC_2(VAR_20 + 5)) == -1)
    goto error;
   VAR_14->fill = VAR_22;
  } else if (VAR_23 > 3 && FUNC_8(VAR_20 + 1, "g=", 2) == 0) {
   if ((VAR_22 = FUNC_2(VAR_20 + 3)) == -1)
    goto error;
   if (*VAR_16 == 'f' || *VAR_16 == 'F') {
    if (VAR_22 != 8)
     VAR_14->gc.fg = VAR_22;
    else
     VAR_14->gc.fg = VAR_15->fg;
   } else if (*VAR_16 == 'b' || *VAR_16 == 'B') {
    if (VAR_22 != 8)
     VAR_14->gc.bg = VAR_22;
    else
     VAR_14->gc.bg = VAR_15->bg;
   } else
    goto error;
  } else if (FUNC_5(VAR_20, "none") == 0)
   VAR_14->gc.attr = 0;
  else if (VAR_23 > 2 && FUNC_8(VAR_20, "no", 2) == 0) {
   if ((VAR_22 = FUNC_1(VAR_20 + 2)) == -1)
    goto error;
   VAR_14->gc.attr &= ~VAR_22;
  } else {
   if ((VAR_22 = FUNC_1(VAR_20)) == -1)
    goto error;
   VAR_14->gc.attr |= VAR_22;
  }

  VAR_16 += VAR_23 + FUNC_9(VAR_16 + VAR_23, VAR_18);
 } while (*VAR_16 != '\0');

 return (0);

error:
 FUNC_10(VAR_14, &VAR_17);
 return (-1);
}

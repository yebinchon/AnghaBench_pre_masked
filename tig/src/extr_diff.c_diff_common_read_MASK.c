
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int lines; } ;
struct line {int commit_title; struct box* data; } ;
struct diff_state {int combined_diff; int reading_diff_chunk; int reading_diff_stat; int after_diff; int after_commit_title; scalar_t__ highlight; } ;
struct box {int cells; TYPE_1__* cell; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_2__ {int length; int type; } ;


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
 struct line* FUNC_0 (struct view*,char const*,int) ;
 struct line* FUNC_1 (struct view*,int ,char const*,int,int const) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (struct view*,char const*,int ) ;
 int FUNC_4 (struct view*,char const*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct view*,char const*,int,int *) ;
 int FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,int) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char*) ;

bool
FUNC_11(struct view *VAR_12, const char *VAR_13, struct diff_state *VAR_14)
{
 enum line_type VAR_15 = FUNC_5(VAR_13);


 if (!VAR_14->combined_diff && (VAR_15 == VAR_3 || VAR_15 == VAR_7))
  VAR_15 = VAR_1;


 if (VAR_14->reading_diff_chunk) {
  if (VAR_15 == VAR_8 || VAR_15 == VAR_10)
   VAR_15 = VAR_6;
  else if (VAR_15 == VAR_4)
   VAR_15 = VAR_2;
 }

 if (!VAR_12->lines && VAR_15 != VAR_0)
  VAR_14->reading_diff_stat = 1;



 if (!VAR_14->after_diff && VAR_13[0] == ' ' && VAR_13[1] != ' ')
  VAR_14->reading_diff_stat = 1;

 if (VAR_14->reading_diff_stat) {
  if (FUNC_3(VAR_12, VAR_13, 0))
   return 1;
  VAR_14->reading_diff_stat = 0;

 } else if (VAR_15 == VAR_10) {
  VAR_14->reading_diff_stat = 1;
 }

 if (!VAR_14->after_commit_title && !FUNC_7(VAR_13, "    ")) {
  struct line *VAR_16 = FUNC_0(VAR_12, VAR_13, VAR_1);

  if (VAR_16)
   VAR_16->commit_title = 1;
  VAR_14->after_commit_title = 1;
  return VAR_16 != ((void*)0);
 }

 if (VAR_15 == VAR_9) {
  VAR_14->after_diff = 1;
  VAR_14->reading_diff_chunk = 0;

 } else if (VAR_15 == VAR_5) {
  const int VAR_17 = FUNC_2(VAR_13);
  const char *VAR_18 = FUNC_10(VAR_13 + VAR_17, "@@");
  struct line *VAR_19 =
   VAR_18 ? FUNC_1(VAR_12, VAR_12->lines, VAR_13, VAR_5, VAR_17)
    : ((void*)0);
  struct box *VAR_20;

  if (!VAR_19)
   return 0;

  VAR_20 = VAR_19->data;
  VAR_20->cell[0].length = (VAR_18 + VAR_17) - VAR_13;
  VAR_20->cell[1].length = FUNC_9(VAR_18 + VAR_17);
  VAR_20->cell[VAR_20->cells++].type = VAR_11;
  VAR_14->combined_diff = (VAR_17 > 2);
  VAR_14->reading_diff_chunk = 1;
  return 1;

 } else if (VAR_15 == VAR_0) {
  VAR_14->reading_diff_chunk = 0;

 } else if (VAR_14->highlight && FUNC_8(VAR_13, 0x1b)) {
  return FUNC_4(VAR_12, VAR_13, VAR_15);

 }

 return FUNC_6(VAR_12, VAR_13, VAR_15, ((void*)0));
}

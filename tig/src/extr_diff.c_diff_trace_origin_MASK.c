
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {char* vid; TYPE_1__* env; } ;
struct line {scalar_t__ type; } ;
struct blame_header {char* id; int orig_lineno; } ;
struct blame_commit {char const* filename; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {char* ref; unsigned long goto_lineno; int file; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct line*) ;
 int FUNC_2 (char*,char const*,unsigned long,struct blame_header*,struct blame_commit*) ;
 struct line* FUNC_3 (struct view*,struct line*,int ) ;
 int FUNC_4 (unsigned long*,char const*,int) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (int ,char const*,int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static enum request
FUNC_12(struct view *VAR_7, struct line *VAR_8)
{
 struct line *VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_3);
 struct line *VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_1);
 const char *VAR_11;
 int VAR_12 = VAR_8->type == VAR_2 ? '-' : '+';
 unsigned long VAR_13 = 0;
 const char *VAR_14 = ((void*)0);
 char VAR_15[VAR_6];
 struct blame_header VAR_16;
 struct blame_commit VAR_17;

 if (!VAR_9 || !VAR_10 || VAR_10 == VAR_8) {
  FUNC_6("The line to trace must be inside a diff chunk");
  return VAR_4;
 }

 for (; VAR_9 < VAR_8 && !VAR_14; VAR_9++) {
  const char *VAR_18 = FUNC_1(VAR_9);

  if (!FUNC_5(VAR_18, "--- a/")) {
   VAR_14 = VAR_18 + FUNC_0("--- a/");
   break;
  }
 }

 if (VAR_9 == VAR_8 || !VAR_14) {
  FUNC_6("Failed to read the file name");
  return VAR_4;
 }

 VAR_11 = FUNC_1(VAR_10);

 if (!FUNC_4(&VAR_13, VAR_11, VAR_12)) {
  FUNC_6("Failed to read the line number");
  return VAR_4;
 }

 if (VAR_13 == 0) {
  FUNC_6("This is the origin of the line");
  return VAR_4;
 }

 for (VAR_10 += 1; VAR_10 < VAR_8; VAR_10++) {
  if (VAR_10->type == VAR_0) {
   VAR_13 += VAR_12 == '+';
  } else if (VAR_10->type == VAR_2) {
   VAR_13 += VAR_12 == '-';
  } else {
   VAR_13++;
  }
 }

 if (VAR_12 == '+')
  FUNC_7(VAR_15, VAR_7->vid);
 else
  FUNC_8(VAR_15, "%s^", VAR_7->vid);

 if (FUNC_10(VAR_15)) {
  FUNC_9(VAR_7->env->file, VAR_14, FUNC_11(VAR_14));
  FUNC_7(VAR_7->env->ref, "");
  VAR_7->env->goto_lineno = VAR_13 - 1;

 } else {
  if (!FUNC_2(VAR_15, VAR_14, VAR_13, &VAR_16, &VAR_17)) {
   FUNC_6("Failed to read blame data");
   return VAR_4;
  }

  FUNC_9(VAR_7->env->file, VAR_17.filename, FUNC_11(VAR_17.filename));
  FUNC_7(VAR_7->env->ref, VAR_16.id);
  VAR_7->env->goto_lineno = VAR_16.orig_lineno - 1;
 }

 return VAR_5;
}

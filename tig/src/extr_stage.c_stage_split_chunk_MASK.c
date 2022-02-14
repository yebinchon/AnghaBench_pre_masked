
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {struct line* line; } ;
struct line {int dummy; } ;
struct TYPE_4__ {unsigned long lines; int position; } ;
struct TYPE_3__ {unsigned long lines; int position; } ;
struct chunk_header {TYPE_2__ new; TYPE_1__ old; } ;


 char* FUNC_0 (struct line*) ;
 int FUNC_1 (struct chunk_header*,char*) ;
 int FUNC_2 (struct view*) ;
 int FUNC_3 (char*,...) ;
 struct line* FUNC_4 (struct view*,struct chunk_header*,struct line*,struct line*,struct line*) ;
 scalar_t__ FUNC_5 (struct view*,struct line*) ;

__attribute__((used)) static void
FUNC_6(struct view *VAR_0, struct line *VAR_1)
{
 struct chunk_header VAR_2;
 struct line *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5;
 int VAR_6 = 0;

 if (!VAR_1 || !FUNC_1(&VAR_2, FUNC_0(VAR_1))) {
  FUNC_3("Failed to parse chunk header");
  return;
 }

 VAR_2.old.lines = VAR_2.new.lines = 0;

 for (VAR_5 = VAR_1 + 1; FUNC_5(VAR_0, VAR_5); VAR_5++) {
  const char *VAR_7 = FUNC_0(VAR_5);

  if (*VAR_7 == '@' || *VAR_7 == '\\')
   break;

  if (*VAR_7 == ' ') {
   VAR_2.old.lines++;
   VAR_2.new.lines++;
   if (VAR_4 < VAR_3)
    VAR_4 = VAR_5;
   continue;
  }

  if (VAR_3 && VAR_3 < VAR_4) {
   unsigned long VAR_8 = VAR_5 - VAR_0->line;
   unsigned long VAR_9 = VAR_5 - VAR_4;

   VAR_5 = FUNC_4(VAR_0, &VAR_2, VAR_1, VAR_5, VAR_4);

   VAR_2.old.position += VAR_2.old.lines - VAR_9;
   VAR_2.new.position += VAR_2.new.lines - VAR_9;
   VAR_2.old.lines = VAR_2.new.lines = VAR_9;

   VAR_1 = VAR_0->line + VAR_8;
   VAR_3 = VAR_4 = ((void*)0);
   VAR_6++;
  }

  if (*VAR_7 == '-') {
   VAR_2.old.lines++;
   VAR_3 = VAR_5;
  } else if (*VAR_7 == '+') {
   VAR_2.new.lines++;
   VAR_3 = VAR_5;
  }
 }

 if (VAR_6) {
  FUNC_4(VAR_0, &VAR_2, VAR_1, ((void*)0), ((void*)0));
  FUNC_2(VAR_0);
  FUNC_3("Split the chunk in %d", VAR_6 + 1);
 } else {
  FUNC_3("The chunk cannot be split");
 }
}

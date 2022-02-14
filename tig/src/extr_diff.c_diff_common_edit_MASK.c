
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_1__* env; } ;
struct line {scalar_t__ type; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_4__ {int cdup; } ;
struct TYPE_3__ {char* file; unsigned int lineno; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 unsigned int FUNC_1 (struct view*,struct line*) ;
 char* FUNC_2 (struct view*,struct line*) ;
 int FUNC_3 (char const*,unsigned int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int ,char const*) ;

enum request
FUNC_6(struct view *VAR_5, enum request VAR_6, struct line *VAR_7)
{
 const char *VAR_8;
 char VAR_9[VAR_3];
 unsigned int VAR_10;

 if (VAR_7->type == VAR_0) {
  VAR_8 = VAR_5->env->file;
  VAR_10 = VAR_5->env->lineno;
 } else {
  VAR_8 = FUNC_2(VAR_5, VAR_7);
  VAR_10 = FUNC_1(VAR_5, VAR_7);
 }

 if (!VAR_8) {
  FUNC_4("Nothing to edit");
  return VAR_1;
 }

 if (!FUNC_5(VAR_9, VAR_4.cdup, VAR_8) || FUNC_0(VAR_9, VAR_2)) {
  FUNC_4("Failed to open file: %s", VAR_8);
  return VAR_1;
 }

 FUNC_3(VAR_8, VAR_10);
 return VAR_1;
}

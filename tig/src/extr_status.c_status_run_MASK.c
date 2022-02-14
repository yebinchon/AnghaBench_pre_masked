
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct view {int lines; int watch; TYPE_3__* line; } ;
struct TYPE_6__ {int * name; } ;
struct TYPE_5__ {int * name; int * rev; } ;
struct status {char status; TYPE_2__ new; TYPE_1__ old; int member_0; } ;
struct line {int dummy; } ;
struct io {int dummy; } ;
struct buffer {int size; int data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_8__ {int exec_dir; } ;
struct TYPE_7__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct line* FUNC_0 (struct view*,struct status**,int,int ,int) ;
 int FUNC_1 (struct view*,int) ;
 int FUNC_2 (struct io*) ;
 scalar_t__ FUNC_3 (struct io*) ;
 scalar_t__ FUNC_4 (struct io*,struct buffer*,int ,int) ;
 int FUNC_5 (struct io*,int ,int ,int *,char const**) ;
 TYPE_4__ VAR_12 ;
 int FUNC_6 (struct status*,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct view*,struct line*) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static bool
FUNC_12(struct view *VAR_13, const char *VAR_14[], char VAR_15, enum line_type VAR_16)
{
 struct status *VAR_17 = ((void*)0);
 struct buffer VAR_18;
 struct io VAR_19;

 if (!FUNC_5(&VAR_19, VAR_0, VAR_12.exec_dir, ((void*)0), VAR_14))
  return 0;

 FUNC_1(VAR_13, VAR_16);

 while (FUNC_4(&VAR_19, &VAR_18, 0, 1)) {
  struct line *VAR_20;
  struct status VAR_21 = {0};
  struct status *VAR_22 = &VAR_21;


  if (VAR_15) {
   VAR_22->status = VAR_15;
   if (VAR_15 == 'A')
    FUNC_8(VAR_22->old.rev, VAR_5);

  } else {
   if (!FUNC_6(&VAR_21, VAR_18.data, VAR_18.size))
    goto error_out;

   if (!FUNC_4(&VAR_19, &VAR_18, 0, 1))
    break;
  }


  if (!*VAR_22->old.name &&
      (VAR_22->status == 'R' || VAR_22->status == 'C')) {
   FUNC_9(VAR_22->old.name, VAR_18.data, VAR_18.size);

   if (!FUNC_4(&VAR_19, &VAR_18, 0, 1))
    break;
  }




  FUNC_9(VAR_22->new.name, VAR_18.data, VAR_18.size);
  if (!*VAR_22->old.name)
   FUNC_8(VAR_22->old.name, VAR_22->new.name);



  if (VAR_17 && !FUNC_7(VAR_17->new.name, VAR_22->new.name)) {
   VAR_17->status = 'U';
   VAR_17 = ((void*)0);
   continue;
  }

  VAR_20 = FUNC_0(VAR_13, &VAR_22, VAR_16, 0, 0);
  if (!VAR_20)
   goto error_out;
  *VAR_22 = VAR_21;
  FUNC_10(VAR_13, VAR_20);
  if (VAR_22->status == 'U')
   VAR_17 = VAR_22;
 }

 if (FUNC_3(&VAR_19)) {
error_out:
  FUNC_2(&VAR_19);
  return 0;
 }

 if (!VAR_13->line[VAR_13->lines - 1].data) {
  FUNC_1(VAR_13, VAR_1);
  if (VAR_16 == VAR_2)
   FUNC_11(&VAR_13->watch, VAR_6);
  else if (VAR_16 == VAR_3)
   FUNC_11(&VAR_13->watch, VAR_8);
  else if (VAR_16 == VAR_4)
   FUNC_11(&VAR_13->watch, VAR_10);
 } else {
  if (VAR_16 == VAR_2)
   FUNC_11(&VAR_13->watch, VAR_7);
  else if (VAR_16 == VAR_3)
   FUNC_11(&VAR_13->watch, VAR_9);
  else if (VAR_16 == VAR_4)
   FUNC_11(&VAR_13->watch, VAR_11);
 }

 FUNC_2(&VAR_19);
 return 1;
}

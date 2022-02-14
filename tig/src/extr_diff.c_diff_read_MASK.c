
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ lines; char* vid; scalar_t__ pipe; int ** argv; struct diff_state* private; } ;
struct diff_state {int adding_describe_ref; } ;
struct buffer {int data; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (struct view*,int *,char const**,int ) ;
 int FUNC_2 (struct view*,int ,struct diff_state*) ;
 int FUNC_3 (struct diff_state*) ;
 int FUNC_4 (struct view*,struct buffer*,struct diff_state*) ;
 int FUNC_5 (struct view*,struct diff_state*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (struct view*,int ) ;

__attribute__((used)) static bool
FUNC_13(struct view *VAR_4, struct buffer *VAR_5, bool VAR_6)
{
 struct diff_state *VAR_7 = VAR_4->private;

 if (VAR_7->adding_describe_ref)
  return FUNC_4(VAR_4, VAR_5, VAR_7);

 if (!VAR_5) {
  if (!FUNC_3(VAR_7)) {
   FUNC_10("Failed run the diff-highlight program: %s", VAR_2);
   return 0;
  }


  if (VAR_4->lines == 0 && VAR_3) {
   int VAR_8 = FUNC_0(VAR_4->argv)
    - FUNC_0(VAR_3) - 1;

   if (VAR_8 > 0 && !FUNC_11(VAR_4->argv[VAR_8], "--")) {
    for (; VAR_4->argv[VAR_8]; VAR_8++) {
     FUNC_6((void *) VAR_4->argv[VAR_8]);
     VAR_4->argv[VAR_8] = ((void*)0);
    }

    if (VAR_4->pipe)
     FUNC_8(VAR_4->pipe);
    if (FUNC_12(VAR_4, 0))
     return 0;
   }
  }

  FUNC_5(VAR_4, VAR_7);

  if (!VAR_7->adding_describe_ref && !FUNC_9(VAR_4->vid)) {
   const char *VAR_9[] = { "git", "describe", VAR_4->vid, ((void*)0) };
   enum status_code VAR_10 = FUNC_1(VAR_4, ((void*)0), VAR_9, VAR_0);

   if (VAR_10 != VAR_1) {
    FUNC_10("Failed to load describe data: %s", FUNC_7(VAR_10));
    return 1;
   }

   VAR_7->adding_describe_ref = 1;
   return 0;
  }

  return 1;
 }

 return FUNC_2(VAR_4, VAR_5->data, VAR_7);
}

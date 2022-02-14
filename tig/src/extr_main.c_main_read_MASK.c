
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int lines; TYPE_1__* line; struct main_state* private; } ;
struct commit {int * title; int graph; int time; int author; int * id; } ;
struct main_state {int in_header; char* reflogmsg; scalar_t__ with_graph; struct commit current; scalar_t__ first_parent; struct graph* graph; } ;
struct graph {int (* render_parents ) (struct graph*,int *) ;int (* add_parent ) (struct graph*,char*) ;int (* done_rendering ) (struct graph*) ;} ;
struct buffer {char* data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_2__ {int dirty; struct commit* data; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct view*) ;
 int FUNC_3 (struct commit*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (struct buffer*,char*,int ) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 (struct view*,int ,struct commit*,char*,int) ;
 int FUNC_9 (struct view*,struct main_state*,char*) ;
 int FUNC_10 (struct view*,struct commit*) ;
 int FUNC_11 (struct view*,struct commit*,char*,int) ;
 int FUNC_12 (char*,int *,int *) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (struct graph*) ;
 int FUNC_18 (struct graph*,int *) ;
 int FUNC_19 (struct graph*,char*) ;
 int FUNC_20 (struct graph*,int *) ;

bool
FUNC_21(struct view *VAR_3, struct buffer *VAR_4, bool VAR_5)
{
 struct main_state *VAR_6 = VAR_3->private;
 struct graph *VAR_7 = VAR_6->graph;
 enum line_type VAR_8;
 struct commit *VAR_9 = &VAR_6->current;
 char *VAR_10;

 if (!VAR_4) {
  FUNC_10(VAR_3, VAR_9);

  if (!VAR_5 && FUNC_2(VAR_3))
   FUNC_1("No revisions match the given arguments.");
  if (VAR_3->lines > 0) {
   struct commit *VAR_11 = VAR_3->line[VAR_3->lines - 1].data;

   VAR_3->line[VAR_3->lines - 1].dirty = 1;
   if (!VAR_11->author) {
    VAR_3->lines--;
    FUNC_3(VAR_11);
   }
  }

  if (VAR_6->graph)
   VAR_6->graph->done_rendering(VAR_7);
  return 1;
 }

 VAR_10 = VAR_4->data;
 VAR_8 = FUNC_4(VAR_10);
 if (VAR_8 == VAR_0) {
  bool VAR_12;
  char *VAR_13;

  VAR_6->in_header = 1;
  VAR_10 += FUNC_0("commit ");
  VAR_12 = *VAR_10 == '-';
  while (*VAR_10 && !FUNC_6(*VAR_10))
   VAR_10++;

  FUNC_10(VAR_3, VAR_9);

  VAR_13 = FUNC_5(VAR_4, VAR_10, 0);

  if (VAR_6->first_parent) {
   char *VAR_14 = FUNC_13(VAR_10, ' ');
   char *VAR_15 = VAR_14 ? FUNC_13(VAR_14 + 1, ' ') : ((void*)0);

   if (VAR_15)
    *VAR_15 = 0;
  }

  FUNC_11(VAR_3, &VAR_6->current, VAR_10, VAR_12);

  if (VAR_13) {
   char *VAR_16 = FUNC_5(VAR_4, VAR_13, 0);

   FUNC_12(VAR_13, &VAR_9->author, &VAR_9->time);
   if (VAR_6->with_graph)
    VAR_7->render_parents(VAR_7, &VAR_9->graph);
   if (VAR_16) {
    char *VAR_17 = FUNC_5(VAR_4, VAR_16, 0);

    FUNC_8(VAR_3, VAR_17 && *VAR_17 ? VAR_1 : VAR_2,
      VAR_9, VAR_16, 0);
   }
  }

  return 1;
 }

 if (!*VAR_9->id)
  return 1;


 if (*VAR_10 == '\0')
  VAR_6->in_header = 0;

 switch (VAR_8) {
 case 129:
  if (!FUNC_9(VAR_3, VAR_6, VAR_10 + FUNC_0("Reflog: ")))
   return 0;
  break;

 case 128:
  VAR_10 += FUNC_0("Reflog message: ");
  FUNC_14(VAR_6->reflogmsg, VAR_10, FUNC_15(VAR_10));
  break;

 case 130:
  if (VAR_6->with_graph)
   VAR_7->add_parent(VAR_7, VAR_10 + FUNC_0("parent "));
  break;

 case 131:
  FUNC_12(VAR_10 + FUNC_0("author "),
      &VAR_9->author, &VAR_9->time);
  if (VAR_6->with_graph)
   VAR_7->render_parents(VAR_7, &VAR_9->graph);
  break;

 default:

  if (*VAR_9->title)
   break;


  if (VAR_6->in_header)
   break;



  if (FUNC_16(VAR_10, "    ", 4))
   break;
  VAR_10 += 4;


  while (FUNC_7(*VAR_10))
   VAR_10++;
  if (*VAR_10 == '\0')
   break;
  if (*VAR_6->reflogmsg)
   VAR_10 = VAR_6->reflogmsg;
  FUNC_8(VAR_3, VAR_2, VAR_9, VAR_10, 0);
 }

 return 1;
}

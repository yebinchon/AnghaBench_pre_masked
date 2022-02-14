
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int member_0; } ;
struct graph {int (* render_parents ) (struct graph*,int *) ;int (* add_commit ) (struct graph*,int *,int ,char*,int) ;int symbol_to_utf8; int symbol_to_ascii; } ;
struct commit {int canvas; int id; } ;
struct buffer {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* VAR_2 ;
 struct commit* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 struct graph* FUNC_3 (int ) ;
 int FUNC_4 (struct io*) ;
 scalar_t__ FUNC_5 (struct io*,struct buffer*,char,int) ;
 char* FUNC_6 (struct buffer*,char*,int ) ;
 int FUNC_7 (struct io*,char*,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (struct graph*,struct commit*,char*) ;
 int FUNC_11 (struct commit***,size_t,int) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct graph*,int *,int ,char*,int) ;
 int FUNC_15 (struct graph*,int *) ;

int
FUNC_16(int VAR_4, const char *VAR_5[])
{
 struct graph *VAR_6;
 struct io VAR_7 = {0};
 struct buffer VAR_8;
 struct commit **VAR_9 = ((void*)0);
 size_t VAR_10 = 0;
 struct commit *VAR_11 = ((void*)0);
 bool VAR_12;

 if (FUNC_8(VAR_1)) {
  FUNC_2(VAR_2);
 }

 if (!(VAR_6 = FUNC_3(VAR_0)))
  FUNC_2("Failed to allocated graph");

 if (VAR_4 > 1 && !FUNC_12(VAR_5[1], "--ascii"))
  VAR_3 = VAR_6->symbol_to_ascii;
 else
  VAR_3 = VAR_6->symbol_to_utf8;

 if (!FUNC_7(&VAR_7, "%s", ""))
  FUNC_2("IO");

 while (!FUNC_4(&VAR_7)) {
  for (; FUNC_5(&VAR_7, &VAR_8, '\n', 1); ) {
   char *VAR_13 = VAR_8.data;

   if (!FUNC_9(VAR_13, "commit ")) {
    VAR_13 += FUNC_0("commit ");
    VAR_12 = *VAR_13 == '-';

    if (VAR_12)
     VAR_13++;

    if (!FUNC_11(&VAR_9, VAR_10, 1))
     FUNC_2("Commits");

    VAR_11 = FUNC_1(1, sizeof(*VAR_11));
    if (!VAR_11)
     FUNC_2("Commit");
    VAR_9[VAR_10++] = VAR_11;
    FUNC_13(VAR_11->id, VAR_13);
    VAR_6->add_commit(VAR_6, &VAR_11->canvas, VAR_11->id, VAR_13, VAR_12);
    VAR_6->render_parents(VAR_6, &VAR_11->canvas);

    if ((VAR_13 = FUNC_6(&VAR_8, VAR_13, 0))) {
     FUNC_10(VAR_6, VAR_11, VAR_13);
     VAR_11 = ((void*)0);
    }

   } else if (!FUNC_9(VAR_13, "    ")) {

    if (!VAR_11)
     continue;

    FUNC_10(VAR_6, VAR_11, VAR_13 + 4);

    VAR_11 = ((void*)0);
   }
  }
 }

 return 0;
}

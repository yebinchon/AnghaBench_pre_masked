
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {char* ref; } ;
struct line {int type; scalar_t__ data; } ;
struct io {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct io*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct io*,int ) ;
 int FUNC_5 (struct io*,scalar_t__,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int,int,int) ;
 int FUNC_8 (struct view*) ;
 scalar_t__ FUNC_9 (struct view*,struct line*) ;
 scalar_t__ FUNC_10 (struct view*) ;

bool
FUNC_11(struct view *VAR_0, struct line *VAR_1)
{
 char VAR_2[sizeof(VAR_0->ref)];
 struct io VAR_3;
 bool VAR_4 = 1;
 struct line *VAR_5;
 int VAR_6 = 0;
 int VAR_7, VAR_8;
 int VAR_9 = -1, VAR_10 = -1;

 if (!FUNC_4(&VAR_3, VAR_1->type))
  return 0;

 for (VAR_5 = VAR_1; FUNC_9(VAR_0, VAR_5) && VAR_5->data; VAR_5++)
  VAR_6++;

 FUNC_6(VAR_2, VAR_0->ref);
 FUNC_1(VAR_9, VAR_10);
 for (VAR_7 = 0, VAR_8 = 5; VAR_4 && VAR_7 < VAR_6; VAR_1++, VAR_7++) {
  int VAR_11 = VAR_7 * 100 / VAR_6;

  if (VAR_11 > VAR_8 && FUNC_10(VAR_0)) {
   VAR_8 = VAR_11;
   FUNC_7(VAR_0->ref, "updating file %u of %u (%d%% done)",
          VAR_7, VAR_6, VAR_8);
   FUNC_8(VAR_0);
   FUNC_3(VAR_9, VAR_10);
   FUNC_0();
  }
  VAR_4 = FUNC_5(&VAR_3, VAR_1->data, VAR_1->type);
 }
 FUNC_6(VAR_0->ref, VAR_2);

 return FUNC_2(&VAR_3) && VAR_4;
}

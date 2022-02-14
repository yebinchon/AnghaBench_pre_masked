
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lineno; scalar_t__ offset; } ;
struct view {scalar_t__ height; TYPE_1__ pos; struct view* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct view** VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct view*,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct view*,int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (struct view*) ;
 int FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (struct view*,int ) ;
 scalar_t__ FUNC_8 (struct view*) ;

void
FUNC_9(struct view *VAR_7, struct view *VAR_8)
{
 int VAR_9, VAR_10;
 bool VAR_11;
 int VAR_12 = FUNC_0();

 FUNC_2(VAR_6, VAR_9, VAR_10);
 VAR_11 = FUNC_6(VAR_5, VAR_9, VAR_10);

 VAR_3[1] = VAR_8;
 VAR_2 = VAR_4 ? 1 : 0;
 VAR_8->parent = VAR_7;
 FUNC_4();

 if (VAR_7->pos.lineno - VAR_7->pos.offset >= VAR_7->height) {

  int VAR_13 = VAR_7->pos.lineno - VAR_7->pos.offset - VAR_7->height + 1;



  FUNC_1(VAR_7, VAR_13);
 }

 if (VAR_8 != VAR_7 && FUNC_8(VAR_7)) {

  FUNC_5(VAR_7);
 }

 if (FUNC_7(VAR_7, VAR_1) && VAR_11 && VAR_12 == 1)
  FUNC_3(VAR_7, ((void*)0), VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t col; } ;
struct view {size_t col; int win; TYPE_1__ pos; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct view*) ;
 char* FUNC_1 (scalar_t__,char const*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (struct view*,int) ;
 int FUNC_3 (char const**,int,size_t,int*,int,int*,int,int ) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static bool
FUNC_6(struct view *VAR_5, enum line_type VAR_6, const char *VAR_7, int VAR_8,
    int VAR_9, bool VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 size_t VAR_14 = VAR_5->pos.col > VAR_5->col ? VAR_5->pos.col - VAR_5->col : 0;

 if (VAR_9 <= 0)
  return FUNC_0(VAR_5) <= 0;

 VAR_11 = FUNC_3(&VAR_7, VAR_8, VAR_14, &VAR_12, VAR_9, &VAR_13, VAR_10, VAR_3);

 if (VAR_2 != VAR_0) {
  VAR_7 = FUNC_1(VAR_2, VAR_7, VAR_11);
  if (!VAR_7)
   return FUNC_0(VAR_5) <= 0;
 }

 FUNC_2(VAR_5, VAR_6);
 if (VAR_11 > 0)
  FUNC_4(VAR_5->win, VAR_7, VAR_11);

 if (VAR_13 && VAR_10) {
  FUNC_2(VAR_5, VAR_1);
  FUNC_5(VAR_5->win, VAR_4 ? VAR_4 : "~");
  VAR_12++;
 }

 VAR_5->col += VAR_12;
 return FUNC_0(VAR_5) <= 0;
}

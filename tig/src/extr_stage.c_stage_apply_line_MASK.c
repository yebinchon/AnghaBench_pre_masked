
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct line {scalar_t__ type; } ;
struct io {int dummy; } ;
struct TYPE_4__ {scalar_t__ lines; int position; } ;
struct TYPE_3__ {scalar_t__ lines; int position; } ;
struct chunk_header {TYPE_2__ new; TYPE_1__ old; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct line*) ;
 scalar_t__ FUNC_1 (struct io*,char*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct chunk_header*,int ) ;
 scalar_t__ FUNC_3 (struct io*,int,struct line*,struct line*,struct line*) ;
 scalar_t__ FUNC_4 (struct io*,struct line*,struct line*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_5(struct io *VAR_3, struct line *VAR_4, struct line *VAR_5, struct line *VAR_6, struct line *VAR_7)
{
 struct chunk_header VAR_8;
 bool VAR_9 = VAR_2 == VAR_1;
 int VAR_10 = VAR_6->type == VAR_0 ? -1 : 1;

 if (!FUNC_2(&VAR_8, FUNC_0(VAR_5)))
  return 0;

 if (VAR_9)
  VAR_8.old.lines = VAR_8.new.lines - VAR_10;
 else
  VAR_8.new.lines = VAR_8.old.lines + VAR_10;

 return FUNC_4(VAR_3, VAR_4, VAR_5) &&
        FUNC_1(VAR_3, "@@ -%lu,%lu +%lu,%lu @@\n",
         VAR_8.old.position, VAR_8.old.lines,
         VAR_8.new.position, VAR_8.new.lines) &&
        FUNC_3(VAR_3, VAR_9, VAR_5 + 1, VAR_6, VAR_7);
}

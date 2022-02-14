
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen_write_ctx {int dummy; } ;
struct screen {scalar_t__ cx; } ;
struct format_ranges {int dummy; } ;


 int FUNC_0 (struct screen_write_ctx*,scalar_t__,scalar_t__,struct screen*,struct format_ranges*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct screen_write_ctx *VAR_0, u_int VAR_1, u_int VAR_2,
    u_int VAR_3, struct screen *VAR_4, struct screen *VAR_5, struct screen *VAR_6,
    struct format_ranges *VAR_7)
{
 u_int VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_4->cx;
 VAR_9 = VAR_5->cx;
 VAR_10 = VAR_6->cx;





 while (VAR_8 + VAR_9 + VAR_10 > VAR_1) {
  if (VAR_9 > 0)
   VAR_9--;
  else if (VAR_10 > 0)
   VAR_10--;
  else
   VAR_8--;
 }


 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_7, 0, 0, VAR_8);


 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_6, VAR_7,
     VAR_1 - VAR_10,
     VAR_6->cx - VAR_10,
     VAR_10);







 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_5, VAR_7,
     VAR_8
     + ((VAR_1 - VAR_10) - VAR_8) / 2
     - VAR_9 / 2,
     VAR_5->cx / 2 - VAR_9 / 2,
     VAR_9);
}

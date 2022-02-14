
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen_write_ctx {int dummy; } ;
struct screen {scalar_t__ cx; } ;
struct format_ranges {int dummy; } ;


 int FUNC_0 (struct screen_write_ctx*,scalar_t__,scalar_t__,scalar_t__,struct screen*,struct screen*,struct screen*,struct format_ranges*) ;
 int FUNC_1 (struct screen_write_ctx*,scalar_t__,scalar_t__,struct screen*,struct format_ranges*,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (struct screen_write_ctx*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct screen*,struct screen*,struct screen*,int,int,struct format_ranges*) ;
 int FUNC_3 (struct screen_write_ctx*,struct screen*,int ,int ,scalar_t__,int) ;
 int FUNC_4 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_5 (struct screen_write_ctx*) ;

__attribute__((used)) static void
FUNC_6(struct screen_write_ctx *VAR_0, u_int VAR_1, u_int VAR_2,
    u_int VAR_3, struct screen *VAR_4, struct screen *VAR_5, struct screen *VAR_6,
    struct screen *VAR_7, struct screen *VAR_8, struct screen *VAR_9,
    struct screen *VAR_10, int VAR_11, int VAR_12,
    struct format_ranges *VAR_13)
{
 u_int VAR_14, VAR_15, VAR_16;
 u_int VAR_17, VAR_18;
 struct screen_write_ctx VAR_19;

 VAR_14 = VAR_4->cx;
 VAR_15 = VAR_5->cx;
 VAR_16 = VAR_6->cx;
 VAR_17 = VAR_7->cx;
 VAR_18 = VAR_10->cx;





 while (VAR_14 +
     VAR_15 +
     VAR_16 +
     VAR_17 +
     VAR_18 > VAR_1) {
  if (VAR_15 > 0)
   VAR_15--;
  else if (VAR_17 > 0)
   VAR_17--;
  else if (VAR_16 > 0)
   VAR_16--;
  else if (VAR_18 > 0)
   VAR_18--;
  else
   VAR_14--;
 }


 if (VAR_17 == 0) {
  FUNC_4(&VAR_19, ((void*)0), VAR_4);
  FUNC_3(&VAR_19, VAR_10, 0, 0, VAR_18, 1);
  FUNC_5(&VAR_19);

  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_13);
  return;
 }


 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_13, 0, 0, VAR_14);


 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_6, VAR_13,
     VAR_1 - VAR_16,
     VAR_6->cx - VAR_16,
     VAR_16);


 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_10, VAR_13,
     VAR_14 + VAR_17,
     0,
     VAR_18);







 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_5, VAR_13,
     (VAR_14 + VAR_17 + VAR_18)
     + ((VAR_1 - VAR_16)
  - (VAR_14 + VAR_17 + VAR_18)) / 2
     - VAR_15 / 2,
     VAR_5->cx / 2 - VAR_15 / 2,
     VAR_15);
 if (VAR_11 == -1 || VAR_12 == -1)
  VAR_11 = VAR_12 = 0;
 FUNC_2(VAR_0, VAR_2, VAR_3, VAR_14, VAR_17, VAR_7,
     VAR_8, VAR_9, VAR_11, VAR_12, VAR_13);
}

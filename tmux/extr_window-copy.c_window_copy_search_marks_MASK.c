
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; int searchthis; scalar_t__ searchcount; int searchmark; int searchstr; struct screen* backing; } ;
struct screen_write_ctx {int dummy; } ;
struct screen {struct grid* grid; } ;
struct grid {int hsize; int sy; int sx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (struct screen*) ;
 int FUNC_6 (struct screen_write_ctx*,int,int *,char*,int ) ;
 int FUNC_7 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_8 (struct screen_write_ctx*) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct grid*,struct grid*,scalar_t__*,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_12(struct window_mode_entry *VAR_1, struct screen *VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_1->data;
 struct screen *VAR_4 = VAR_3->backing, VAR_5;
 struct screen_write_ctx VAR_6;
 struct grid *VAR_7 = VAR_4->grid;
 int VAR_8, VAR_9, VAR_10 = -1;
 u_int VAR_11, VAR_12, VAR_13, VAR_14 = 0, VAR_15;

 if (VAR_2 == ((void*)0)) {
  VAR_15 = FUNC_9("%s", VAR_3->searchstr);
  FUNC_4(&VAR_5, VAR_15, 1, 0);
  FUNC_7(&VAR_6, ((void*)0), &VAR_5);
  FUNC_6(&VAR_6, -1, &VAR_0, "%s",
      VAR_3->searchstr);
  FUNC_8(&VAR_6);
  VAR_2 = &VAR_5;
 } else
  VAR_15 = FUNC_5(VAR_2);

 VAR_9 = FUNC_10(VAR_3->searchstr);

 FUNC_2(VAR_3->searchmark);
 VAR_3->searchmark = FUNC_0((VAR_7->hsize + VAR_7->sy) * VAR_7->sx);

 for (VAR_12 = 0; VAR_12 < VAR_7->hsize + VAR_7->sy; VAR_12++) {
  VAR_11 = 0;
  for (;;) {
   VAR_8 = FUNC_11(VAR_7, VAR_2->grid, &VAR_11, VAR_12,
       VAR_11, VAR_7->sx, VAR_9);
   if (!VAR_8)
    break;

   VAR_14++;
   if (VAR_11 == VAR_3->cx && VAR_12 == VAR_7->hsize + VAR_3->cy - VAR_3->oy)
    VAR_10 = VAR_14;

   VAR_13 = (VAR_12 * VAR_7->sx) + VAR_11;
   FUNC_1(VAR_3->searchmark, VAR_13, VAR_13 + VAR_15 - 1);

   VAR_11++;
  }
 }

 if (VAR_10 != -1)
  VAR_3->searchthis = 1 + VAR_14 - VAR_10;
 else
  VAR_3->searchthis = -1;
 VAR_3->searchcount = VAR_14;

 if (VAR_2 == &VAR_5)
  FUNC_3(&VAR_5);
 return (VAR_14);
}

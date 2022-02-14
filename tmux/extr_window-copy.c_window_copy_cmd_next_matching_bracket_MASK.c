
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; scalar_t__ modekeys; struct screen* backing; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
struct screen {TYPE_2__* grid; } ;
struct grid_line {int flags; scalar_t__ cellsize; } ;
struct TYPE_4__ {int size; char* data; } ;
struct grid_cell {int flags; TYPE_1__ data; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;
struct TYPE_5__ {scalar_t__ sx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__,struct grid_cell*) ;
 struct grid_line* FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 scalar_t__ FUNC_3 (struct screen*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (struct window_copy_cmd_state*) ;
 int FUNC_6 (struct window_mode_entry*,char*) ;
 scalar_t__ FUNC_7 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_8 (struct window_mode_entry*,scalar_t__,scalar_t__) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_9(struct window_copy_cmd_state *VAR_5)
{
 struct window_mode_entry *VAR_6 = VAR_5->wme;
 u_int VAR_7 = VAR_6->prefix;
 struct window_copy_mode_data *VAR_8 = VAR_6->data;
 struct screen *VAR_9 = VAR_8->backing;
 char VAR_10[] = "{[(", VAR_11[] = "}])";
 char VAR_12, VAR_13, VAR_14, *VAR_15;
 u_int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 struct grid_cell VAR_23;
 int VAR_24;
 struct grid_line *VAR_25;

 for (; VAR_7 != 0; VAR_7--) {

  VAR_16 = VAR_8->cx;
  VAR_17 = FUNC_2(VAR_9) + VAR_8->cy - VAR_8->oy;
  VAR_18 = FUNC_7(VAR_6, VAR_17);
  VAR_19 = FUNC_2(VAR_9) + FUNC_3(VAR_9) - 1;
  if (VAR_18 == 0)
   break;





  VAR_12 = 0;
 retry:
  FUNC_0(VAR_9->grid, VAR_16, VAR_17, &VAR_23);
  if (VAR_23.data.size != 1 || (VAR_23.flags & VAR_0))
   VAR_15 = ((void*)0);
  else {
   VAR_13 = *VAR_23.data.data;






   VAR_15 = FUNC_4(VAR_11, VAR_13);
   if (VAR_15 != ((void*)0) && VAR_8->modekeys == VAR_3) {
    VAR_20 = VAR_8->cx;
    VAR_21 = FUNC_2(VAR_9) + VAR_8->cy - VAR_8->oy;

    FUNC_8(VAR_6, VAR_16, VAR_17);
    FUNC_5(VAR_5);

    VAR_16 = VAR_8->cx;
    VAR_17 = FUNC_2(VAR_9) + VAR_8->cy - VAR_8->oy;
    FUNC_0(VAR_9->grid, VAR_16, VAR_17, &VAR_23);
    if (VAR_23.data.size != 1 ||
        (VAR_23.flags & VAR_0) ||
        FUNC_4(VAR_11, *VAR_23.data.data) == ((void*)0))
     FUNC_8(VAR_6, VAR_20, VAR_21);
    break;
   }

   VAR_15 = FUNC_4(VAR_10, VAR_13);
  }
  if (VAR_15 == ((void*)0)) {
   if (VAR_8->modekeys == VAR_2) {
    if (!VAR_12 && VAR_16 <= VAR_18) {
     VAR_16++;
     VAR_12 = 1;
     goto retry;
    }
    FUNC_6(VAR_6, "{[( ");
    continue;
   }

   if (VAR_16 > VAR_18) {
    if (VAR_17 == VAR_19)
     continue;
    VAR_25 = FUNC_1(VAR_9->grid, VAR_17);
    if (~VAR_25->flags & VAR_1)
     continue;
    if (VAR_25->cellsize > VAR_9->grid->sx)
     continue;
    VAR_16 = 0;
    VAR_17++;
    VAR_18 = FUNC_7(VAR_6, VAR_17);
   } else
    VAR_16++;
   goto retry;
  }
  VAR_14 = VAR_11[VAR_15 - VAR_10];


  VAR_22 = 1;
  VAR_24 = 0;
  do {
   if (VAR_16 > VAR_18) {
    if (VAR_17 == VAR_19) {
     VAR_24 = 1;
     break;
    }
    VAR_16 = 0;
    VAR_17++;
    VAR_18 = FUNC_7(VAR_6, VAR_17);
   } else
    VAR_16++;

   FUNC_0(VAR_9->grid, VAR_16, VAR_17, &VAR_23);
   if (VAR_23.data.size == 1 &&
       (~VAR_23.flags & VAR_0)) {
    if (*VAR_23.data.data == VAR_13)
     VAR_22++;
    else if (*VAR_23.data.data == VAR_14)
     VAR_22--;
   }
  } while (VAR_22 != 0);


  if (!VAR_24)
   FUNC_8(VAR_6, VAR_16, VAR_17);
 }

 return (VAR_4);
}

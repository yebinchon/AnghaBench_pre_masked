
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; scalar_t__ modekeys; struct screen* backing; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
struct screen {int grid; } ;
struct TYPE_2__ {int size; char* data; } ;
struct grid_cell {int flags; TYPE_1__ data; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (struct window_mode_entry*,char*,int) ;
 scalar_t__ FUNC_4 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_5 (struct window_mode_entry*,scalar_t__,scalar_t__) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_6(struct window_copy_cmd_state *VAR_3)
{
 struct window_mode_entry *VAR_4 = VAR_3->wme;
 u_int VAR_5 = VAR_4->prefix;
 struct window_copy_mode_data *VAR_6 = VAR_4->data;
 struct screen *VAR_7 = VAR_6->backing;
 char VAR_8[] = "{[(", VAR_9[] = "}])";
 char VAR_10, VAR_11, VAR_12, *VAR_13;
 u_int VAR_14, VAR_15, VAR_16, VAR_17;
 struct grid_cell VAR_18;
 int VAR_19;

 for (; VAR_5 != 0; VAR_5--) {

  VAR_14 = VAR_6->cx;
  VAR_15 = FUNC_1(VAR_7) + VAR_6->cy - VAR_6->oy;
  VAR_16 = FUNC_4(VAR_4, VAR_15);
  if (VAR_16 == 0)
   break;





  VAR_10 = 0;
 retry:
  FUNC_0(VAR_7->grid, VAR_14, VAR_15, &VAR_18);
  if (VAR_18.data.size != 1 || (VAR_18.flags & VAR_0))
   VAR_13 = ((void*)0);
  else {
   VAR_11 = *VAR_18.data.data;
   VAR_13 = FUNC_2(VAR_9, VAR_11);
  }
  if (VAR_13 == ((void*)0)) {
   if (VAR_6->modekeys == VAR_1) {
    if (!VAR_10 && VAR_14 > 0) {
     VAR_14--;
     VAR_10 = 1;
     goto retry;
    }
    FUNC_3(VAR_4, "}]) ", 1);
   }
   continue;
  }
  VAR_12 = VAR_8[VAR_13 - VAR_9];


  VAR_17 = 1;
  VAR_19 = 0;
  do {
   if (VAR_14 == 0) {
    if (VAR_15 == 0) {
     VAR_19 = 1;
     break;
    }
    do {
     VAR_15--;
     VAR_16 = FUNC_4(VAR_4, VAR_15);
    } while (VAR_16 == 0 && VAR_15 > 0);
    if (VAR_16 == 0 && VAR_15 == 0) {
     VAR_19 = 1;
     break;
    }
    VAR_14 = VAR_16 - 1;
   } else
    VAR_14--;

   FUNC_0(VAR_7->grid, VAR_14, VAR_15, &VAR_18);
   if (VAR_18.data.size == 1 &&
       (~VAR_18.flags & VAR_0)) {
    if (*VAR_18.data.data == VAR_11)
     VAR_17++;
    else if (*VAR_18.data.data == VAR_12)
     VAR_17--;
   }
  } while (VAR_17 != 0);


  if (!VAR_19)
   FUNC_5(VAR_4, VAR_14, VAR_15);
 }

 return (VAR_2);
}

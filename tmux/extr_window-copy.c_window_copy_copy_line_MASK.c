
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {TYPE_1__* backing; } ;
struct utf8_data {int size; char* data; } ;
struct grid_line {int flags; scalar_t__ cellsize; } ;
struct grid_cell {int flags; int attr; int data; } ;
struct grid {scalar_t__ sx; } ;
struct TYPE_2__ {struct grid* grid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;
 struct grid_line* FUNC_1 (struct grid*,scalar_t__) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int *,char) ;
 int FUNC_5 (struct utf8_data*,int *) ;
 scalar_t__ FUNC_6 (struct window_mode_entry*,scalar_t__) ;
 char* FUNC_7 (char*,size_t) ;

__attribute__((used)) static void
FUNC_8(struct window_mode_entry *VAR_3, char **VAR_4, size_t *VAR_5,
    u_int VAR_6, u_int VAR_7, u_int VAR_8)
{
 struct window_copy_mode_data *VAR_9 = VAR_3->data;
 struct grid *VAR_10 = VAR_9->backing->grid;
 struct grid_cell VAR_11;
 struct grid_line *VAR_12;
 struct utf8_data VAR_13;
 u_int VAR_14, VAR_15, VAR_16 = 0;
 const char *VAR_17;

 if (VAR_7 > VAR_8)
  return;





 VAR_12 = FUNC_1(VAR_10, VAR_6);
 if (VAR_12->flags & VAR_2 && VAR_12->cellsize <= VAR_10->sx)
  VAR_16 = 1;


 if (VAR_16)
  VAR_15 = VAR_12->cellsize;
 else
  VAR_15 = FUNC_6(VAR_3, VAR_6);
 if (VAR_8 > VAR_15)
  VAR_8 = VAR_15;
 if (VAR_7 > VAR_15)
  VAR_7 = VAR_15;

 if (VAR_7 < VAR_8) {
  for (VAR_14 = VAR_7; VAR_14 < VAR_8; VAR_14++) {
   FUNC_0(VAR_10, VAR_14, VAR_6, &VAR_11);
   if (VAR_11.flags & VAR_1)
    continue;
   FUNC_5(&VAR_13, &VAR_11.data);
   if (VAR_13.size == 1 && (VAR_11.attr & VAR_0)) {
    VAR_17 = FUNC_4(((void*)0), VAR_13.data[0]);
    if (VAR_17 != ((void*)0) && FUNC_3(VAR_17) <= sizeof VAR_13.data) {
     VAR_13.size = FUNC_3(VAR_17);
     FUNC_2(VAR_13.data, VAR_17, VAR_13.size);
    }
   }

   *VAR_4 = FUNC_7(*VAR_4, (*VAR_5) + VAR_13.size);
   FUNC_2(*VAR_4 + *VAR_5, VAR_13.data, VAR_13.size);
   *VAR_5 += VAR_13.size;
  }
 }


 if (!VAR_16 || VAR_8 != VAR_15) {
  *VAR_4 = FUNC_7(*VAR_4, (*VAR_5) + 1);
  (*VAR_4)[(*VAR_5)++] = '\n';
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid_line {size_t cellused; int flags; size_t cellsize; } ;
struct TYPE_2__ {size_t width; } ;
struct grid_cell {TYPE_1__ data; } ;
struct grid {size_t sy; size_t hscrolled; struct grid_line* linedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct grid_line*,size_t,struct grid_cell*) ;
 struct grid_line* FUNC_1 (struct grid*,size_t) ;
 int FUNC_2 (struct grid_line*) ;
 int FUNC_3 (struct grid*,struct grid*,size_t,size_t,size_t,int) ;
 int FUNC_4 (struct grid*,size_t,size_t,struct grid_cell*) ;
 int FUNC_5 (struct grid_line*,struct grid_line*,int) ;

__attribute__((used)) static void
FUNC_6(struct grid *VAR_2, struct grid *VAR_3, u_int VAR_4, u_int VAR_5,
    u_int VAR_6)
{
 struct grid_line *VAR_7 = &VAR_3->linedata[VAR_5], *VAR_8;
 struct grid_cell VAR_9;
 u_int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u_int VAR_15 = VAR_7->cellused;
 int VAR_16 = VAR_7->flags;


 if (~VAR_7->flags & VAR_0)
  VAR_11 = 1 + (VAR_7->cellused - 1) / VAR_4;
 else {
  VAR_11 = 2;
  VAR_12 = 0;
  for (VAR_13 = VAR_6; VAR_13 < VAR_15; VAR_13++) {
   FUNC_0(VAR_7, VAR_13, &VAR_9);
   if (VAR_12 + VAR_9.data.width > VAR_4) {
    VAR_11++;
    VAR_12 = 0;
   }
   VAR_12 += VAR_9.data.width;
  }
 }


 VAR_10 = VAR_2->sy + 1;
 VAR_8 = FUNC_1(VAR_2, VAR_11);


 VAR_12 = 0;
 VAR_14 = 0;
 for (VAR_13 = VAR_6; VAR_13 < VAR_15; VAR_13++) {
  FUNC_0(VAR_7, VAR_13, &VAR_9);
  if (VAR_12 + VAR_9.data.width > VAR_4) {
   VAR_2->linedata[VAR_10].flags |= VAR_1;

   VAR_10++;
   VAR_12 = 0;
   VAR_14 = 0;
  }
  VAR_12 += VAR_9.data.width;
  FUNC_4(VAR_2, VAR_14, VAR_10, &VAR_9);
  VAR_14++;
 }
 if (VAR_16 & VAR_1)
  VAR_2->linedata[VAR_10].flags |= VAR_1;


 VAR_7->cellsize = VAR_7->cellused = VAR_6;
 VAR_7->flags |= VAR_1;
 FUNC_5(VAR_8, VAR_7, sizeof *VAR_8);
 FUNC_2(VAR_7);


 if (VAR_5 <= VAR_3->hscrolled)
  VAR_3->hscrolled += VAR_11 - 1;





 if (VAR_12 < VAR_4 && (VAR_16 & VAR_1))
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_12, 1);
}

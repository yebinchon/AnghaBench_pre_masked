
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
struct pqr_struct {size_t* member_0; size_t* member_1; int * member_2; } ;
struct TYPE_5__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
typedef int p ;
typedef int abd_t ;
struct TYPE_4__ {int rc_size; int * rc_abd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (size_t*,int *,int) ;
 int FUNC_3 (int *,int ,int,int ,struct pqr_struct*) ;
 size_t* FUNC_4 (int *) ;
 int FUNC_5 (size_t*,size_t*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(raidz_map_t *VAR_3)
{
 uint64_t *VAR_4, *VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;
 abd_t *VAR_11;

 VAR_6 = VAR_3->rm_col[VAR_0].rc_size / sizeof (VAR_4[0]);
 FUNC_0(VAR_3->rm_col[VAR_0].rc_size ==
     VAR_3->rm_col[VAR_1].rc_size);

 for (VAR_10 = VAR_3->rm_firstdatacol; VAR_10 < VAR_3->rm_cols; VAR_10++) {
  VAR_11 = VAR_3->rm_col[VAR_10].rc_abd;
  VAR_4 = FUNC_4(VAR_3->rm_col[VAR_0].rc_abd);
  VAR_5 = FUNC_4(VAR_3->rm_col[VAR_1].rc_abd);

  VAR_7 = VAR_3->rm_col[VAR_10].rc_size / sizeof (VAR_4[0]);

  if (VAR_10 == VAR_3->rm_firstdatacol) {
   FUNC_0(VAR_7 == VAR_6 || VAR_7 == 0);
   FUNC_2(VAR_4, VAR_11, VAR_3->rm_col[VAR_10].rc_size);
   (void) FUNC_5(VAR_5, VAR_4, VAR_3->rm_col[VAR_10].rc_size);

   for (VAR_9 = VAR_7; VAR_9 < VAR_6; VAR_9++) {
    VAR_4[VAR_9] = 0;
    VAR_5[VAR_9] = 0;
   }
  } else {
   struct pqr_struct VAR_12 = { VAR_4, VAR_5, ((void*)0) };

   FUNC_0(VAR_7 <= VAR_6);
   (void) FUNC_3(VAR_11, 0, VAR_3->rm_col[VAR_10].rc_size,
       VAR_2, &VAR_12);





   for (VAR_9 = VAR_7; VAR_9 < VAR_6; VAR_9++) {
    FUNC_1(VAR_5[VAR_9], VAR_8);
   }
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct block_def {scalar_t__ textlen; int * textstart; } ;
struct TYPE_15__ {scalar_t__ col; int lnum; } ;
typedef TYPE_2__ pos_T ;
struct TYPE_16__ {int is_VIsual; scalar_t__ start_vcol; scalar_t__ end_vcol; int op_type; int block_mode; } ;
typedef TYPE_3__ oparg_T ;
typedef int linenr_T ;
typedef long colnr_T ;
typedef int char_u ;
typedef int buf2 ;
typedef int buf1 ;
struct TYPE_14__ {int ml_flags; int ml_line_count; } ;
struct TYPE_18__ {TYPE_1__ b_ml; scalar_t__ b_p_bin; int b_p_eol; } ;
struct TYPE_17__ {scalar_t__ w_curswant; TYPE_2__ w_cursor; scalar_t__ w_virtcol; } ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,struct block_def*,int,int ) ;
 long FUNC_4 () ;
 int FUNC_5 (int *,int,int,int) ;
 TYPE_9__* VAR_12 ;
 TYPE_6__* VAR_13 ;
 int * VAR_14 ;
 scalar_t__ FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_2__*,TYPE_2__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_15 ;
 long FUNC_8 (int *,long*,long*,long,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_2__,TYPE_2__) ;
 int * FUNC_11 (int) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *) ;
 char* VAR_16 ;
 int * VAR_17 ;
 char* VAR_18 ;
 int * VAR_19 ;
 int FUNC_14 (char*,char*,long) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int,char*,...) ;
 int FUNC_18 () ;
 int VAR_20 ;

void
FUNC_19()
{
    char_u *VAR_21;
    char_u VAR_22[50];
    char_u VAR_23[40];
    linenr_T VAR_24;
    long VAR_25 = 0;
    long VAR_26 = 0;
    long VAR_27 = 0;
    long VAR_28 = 0;
    long VAR_29 = 0;
    long VAR_30 = 0;
    int VAR_31;
    long VAR_32 = 100000L;
    if (VAR_12->b_ml.ml_flags & VAR_5)
    {
 FUNC_0(FUNC_2(VAR_16));
    }
    else
    {
 if (FUNC_6(VAR_12) == VAR_0)
     VAR_31 = 2;
 else
     VAR_31 = 1;
 for (VAR_24 = 1; VAR_24 <= VAR_12->b_ml.ml_line_count; ++VAR_24)
 {

     if (VAR_25 > VAR_32)
     {
  FUNC_15();
  if (VAR_15)
      return;
  VAR_32 = VAR_25 + 100000L;
     }
     {

  if (VAR_24 == VAR_13->w_cursor.lnum)
  {
      VAR_30 += VAR_29;
      VAR_28 += VAR_27;
      VAR_26 = VAR_25 +
   FUNC_8(FUNC_11(VAR_24),
    &VAR_30, &VAR_28,
      (long)(VAR_13->w_cursor.col + 1), VAR_31);
  }
     }

     VAR_25 += FUNC_8(FUNC_11(VAR_24), &VAR_29,
      &VAR_27, (long)VAR_3, VAR_31);
 }


 if (!VAR_12->b_p_eol && VAR_12->b_p_bin)
     VAR_25 -= VAR_31;
 {
     VAR_21 = FUNC_12();
     FUNC_16();
     FUNC_5(VAR_22, sizeof(VAR_22), (int)VAR_13->w_cursor.col + 1,
      (int)VAR_13->w_virtcol + 1);
     FUNC_5(VAR_23, sizeof(VAR_23), (int)FUNC_1(VAR_21), FUNC_9(VAR_21));

     if (VAR_28 == VAR_26
      && VAR_27 == VAR_25)
  FUNC_17((char *)VAR_2, VAR_1,
      FUNC_2("Col %s of %s; Line %ld of %ld; Word %ld of %ld; Byte %ld of %ld"),
      (char *)VAR_22, (char *)VAR_23,
      (long)VAR_13->w_cursor.lnum,
      (long)VAR_12->b_ml.ml_line_count,
      VAR_30, VAR_29,
      VAR_26, VAR_25);
     else
  FUNC_17((char *)VAR_2, VAR_1,
      FUNC_2("Col %s of %s; Line %ld of %ld; Word %ld of %ld; Char %ld of %ld; Byte %ld of %ld"),
      (char *)VAR_22, (char *)VAR_23,
      (long)VAR_13->w_cursor.lnum,
      (long)VAR_12->b_ml.ml_line_count,
      VAR_30, VAR_29,
      VAR_28, VAR_27,
      VAR_26, VAR_25);
 }
 VAR_21 = VAR_19;
 VAR_19 = (char_u *)"";
 FUNC_13(VAR_2);
 VAR_19 = VAR_21;
    }
}

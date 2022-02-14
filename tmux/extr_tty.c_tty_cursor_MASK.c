
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty_term {int dummy; } ;
struct tty {int sx; int cx; int cy; int rlower; scalar_t__ rleft; int rupper; struct tty_term* term; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tty*,char) ;
 int FUNC_2 (struct tty*,int ) ;
 int FUNC_3 (struct tty*,int ,int) ;
 int FUNC_4 (struct tty*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct tty_term*,int ) ;
 int FUNC_6 (struct tty*) ;

void
FUNC_7(struct tty *VAR_12, u_int VAR_13, u_int VAR_14)
{
 struct tty_term *VAR_15 = VAR_12->term;
 u_int VAR_16, VAR_17;
 int VAR_18;

 if (VAR_13 > VAR_12->sx - 1)
  VAR_13 = VAR_12->sx - 1;

 VAR_16 = VAR_12->cx;
 VAR_17 = VAR_12->cy;


 if (VAR_13 == VAR_16 && VAR_14 == VAR_17)
  return;


 if (VAR_16 > VAR_12->sx - 1)
  goto absolute;


 if (VAR_13 == 0 && VAR_14 == 0 && FUNC_5(VAR_15, VAR_9)) {
  FUNC_2(VAR_12, VAR_9);
  goto out;
 }


 if (VAR_13 == 0 && VAR_14 == VAR_17 + 1 && VAR_17 != VAR_12->rlower &&
     (!FUNC_6(VAR_12) || VAR_12->rleft == 0)) {
  FUNC_1(VAR_12, '\r');
  FUNC_1(VAR_12, '\n');
  goto out;
 }


 if (VAR_14 == VAR_17) {





  if (VAR_13 == 0 && (!FUNC_6(VAR_12) || VAR_12->rleft == 0)) {
   FUNC_1(VAR_12, '\r');
   goto out;
  }


  if (VAR_13 == VAR_16 - 1 && FUNC_5(VAR_15, VAR_1)) {
   FUNC_2(VAR_12, VAR_1);
   goto out;
  }


  if (VAR_13 == VAR_16 + 1 && FUNC_5(VAR_15, VAR_5)) {
   FUNC_2(VAR_12, VAR_5);
   goto out;
  }


  VAR_18 = VAR_16 - VAR_13;





  if ((u_int) FUNC_0(VAR_18) > VAR_13 && FUNC_5(VAR_15, VAR_10)) {
   FUNC_3(VAR_12, VAR_10, VAR_13);
   goto out;
  } else if (VAR_18 > 0 && FUNC_5(VAR_15, VAR_0)) {
   if (VAR_18 == 2 && FUNC_5(VAR_15, VAR_1)) {
    FUNC_2(VAR_12, VAR_1);
    FUNC_2(VAR_12, VAR_1);
    goto out;
   }
   FUNC_3(VAR_12, VAR_0, VAR_18);
   goto out;
  } else if (VAR_18 < 0 && FUNC_5(VAR_15, VAR_4)) {
   FUNC_3(VAR_12, VAR_4, -VAR_18);
   goto out;
  }
 } else if (VAR_13 == VAR_16) {





  if (VAR_17 != VAR_12->rupper &&
      VAR_14 == VAR_17 - 1 && FUNC_5(VAR_15, VAR_8)) {
   FUNC_2(VAR_12, VAR_8);
   goto out;
  }


  if (VAR_17 != VAR_12->rlower &&
      VAR_14 == VAR_17 + 1 && FUNC_5(VAR_15, VAR_3)) {
   FUNC_2(VAR_12, VAR_3);
   goto out;
  }


  VAR_18 = VAR_17 - VAR_14;





  if ((u_int) FUNC_0(VAR_18) > VAR_14 ||
      (VAR_18 < 0 && VAR_14 - VAR_18 > VAR_12->rlower) ||
      (VAR_18 > 0 && VAR_14 - VAR_18 < VAR_12->rupper)) {
       if (FUNC_5(VAR_15, VAR_11)) {
        FUNC_3(VAR_12, VAR_11, VAR_14);
        goto out;
       }
  } else if (VAR_18 > 0 && FUNC_5(VAR_15, VAR_7)) {
   FUNC_3(VAR_12, VAR_7, VAR_18);
   goto out;
  } else if (VAR_18 < 0 && FUNC_5(VAR_15, VAR_2)) {
   FUNC_3(VAR_12, VAR_2, -VAR_18);
   goto out;
  }
 }

absolute:

 FUNC_4(VAR_12, VAR_6, VAR_14, VAR_13);

out:
 VAR_12->cx = VAR_13;
 VAR_12->cy = VAR_14;
}

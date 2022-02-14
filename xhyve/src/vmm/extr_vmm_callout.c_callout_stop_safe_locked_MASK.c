
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout {int flags; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct callout*) ;
 int VAR_4 ;
 int FUNC_2 (struct callout*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct callout*) ;
 int FUNC_4 (struct callout*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 () ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct callout *VAR_8, int VAR_9) {
  int VAR_10 = 0;

  if ((VAR_9) && (FUNC_7() != VAR_6) && (FUNC_3(VAR_8) ||
    (FUNC_1(VAR_8) && !FUNC_2(VAR_8))))
  {
    if (VAR_8->flags & VAR_3) {
      FUNC_0();
    }


    VAR_8->flags |= VAR_3;
    VAR_7 = 1;

    FUNC_5(&VAR_4);

    while (!(VAR_8->flags & VAR_1)) {
      FUNC_6(&VAR_8->wait, &VAR_5);
    }

    VAR_8->flags &= ~VAR_3;
    VAR_10 = 1;
  }

  FUNC_4(VAR_8);


  VAR_8->flags &= ~(VAR_0 | VAR_2 | VAR_1 |
    VAR_3);

  return (VAR_10);
}

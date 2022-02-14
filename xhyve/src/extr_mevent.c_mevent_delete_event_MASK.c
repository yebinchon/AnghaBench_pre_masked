
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {int me_cq; int me_closefd; int me_state; } ;


 int FUNC_0 (int *,struct mevent*,int ) ;
 int FUNC_1 (struct mevent*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct mevent *VAR_3, int VAR_4)
{
 FUNC_3();





        if (VAR_3->me_cq == 0) {
  VAR_3->me_cq = 1;
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(&VAR_1, VAR_3, VAR_2);
  FUNC_2();
        }
 VAR_3->me_state = VAR_0;

 if (VAR_4)
  VAR_3->me_closefd = 1;

 FUNC_4();

 return (0);
}

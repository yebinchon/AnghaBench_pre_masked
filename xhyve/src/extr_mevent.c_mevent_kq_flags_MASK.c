
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {int me_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct mevent *VAR_4)
{
 int VAR_5;

 switch (VAR_4->me_state) {
 case 131:
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_5 = VAR_3;
  break;
 case 129:
  VAR_5 = VAR_2;
  break;
 case 130:
  VAR_5 = VAR_1;
  break;
 default:
  FUNC_0(0);
  break;
 }

 return (VAR_5);
}

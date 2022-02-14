
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 (char*,double,double,double) ;
 int FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 double FUNC_3 (int ) ;

double FUNC_4(double VAR_1, double VAR_2)
{
  double VAR_3;

  if (VAR_1 < VAR_2)
  {
    double VAR_4 = VAR_1;
    VAR_1 = VAR_2;
    VAR_2 = VAR_4;
  }

  VAR_3 = VAR_2 - VAR_1;




  if (VAR_3 < VAR_0)
    return VAR_1;
  else
    return VAR_1 + FUNC_3(FUNC_1(VAR_3));
}

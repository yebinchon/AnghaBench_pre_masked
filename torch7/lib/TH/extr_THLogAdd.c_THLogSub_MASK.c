
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 (char*,double,double,...) ;
 double VAR_1 ;
 int FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 double FUNC_3 (int ) ;

double FUNC_4(double VAR_2, double VAR_3)
{
  double VAR_4;

  if (VAR_2 < VAR_3)
    FUNC_0("LogSub: log_a (%f) should be greater than log_b (%f)", VAR_2, VAR_3);

  VAR_4 = VAR_3 - VAR_2;




  if (VAR_2 == VAR_3)
    return VAR_1;
  else if (VAR_4 < VAR_0)
    return VAR_2;
  else
    return VAR_2 + FUNC_3(-FUNC_1(VAR_4));
}

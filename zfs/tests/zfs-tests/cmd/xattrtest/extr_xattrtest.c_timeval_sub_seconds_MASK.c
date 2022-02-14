
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; scalar_t__ tv_usec; } ;


 double VAR_0 ;
 int FUNC_0 (struct timeval*,struct timeval*,struct timeval*) ;

__attribute__((used)) static double
FUNC_1(struct timeval *VAR_1, struct timeval *VAR_2)
{
 struct timeval VAR_3;

 FUNC_0(&VAR_3, VAR_1, VAR_2);
 return ((double)VAR_3.tv_usec / VAR_0 + VAR_3.tv_sec);
}

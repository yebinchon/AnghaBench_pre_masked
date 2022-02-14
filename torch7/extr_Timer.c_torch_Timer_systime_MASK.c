
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double tv_usec; scalar_t__ tv_sec; } ;
struct rusage {TYPE_1__ ru_stime; } ;
typedef scalar_t__ TimeType ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rusage*) ;

__attribute__((used)) static TimeType FUNC_1()
{



  struct rusage VAR_1;
  FUNC_0(VAR_0, &VAR_1);
  return (VAR_1.ru_stime.tv_sec + VAR_1.ru_stime.tv_usec/1000000.0);

}

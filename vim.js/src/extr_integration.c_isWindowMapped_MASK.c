
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ map_state; } ;
typedef TYPE_1__ XWindowAttributes ;
typedef int Window ;
typedef int Display ;
typedef int Boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static Boolean
FUNC_1(Display *VAR_3, Window VAR_4)
{
 XWindowAttributes VAR_5;
 FUNC_0(VAR_3,
        VAR_4,
        &VAR_5);
 if (VAR_5.map_state == VAR_1) {
  return(VAR_2);
 } else {
  return(VAR_0);
 }
}

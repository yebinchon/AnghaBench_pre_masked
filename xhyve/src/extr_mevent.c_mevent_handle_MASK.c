
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {int me_param; int me_type; int me_fd; int (* me_func ) (int ,int ,int ) ;} ;
struct kevent {struct mevent* udata; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct kevent *VAR_0, int VAR_1)
{
 struct mevent *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = VAR_0[VAR_3].udata;



  (*VAR_2->me_func)(VAR_2->me_fd, VAR_2->me_type, VAR_2->me_param);
 }
}

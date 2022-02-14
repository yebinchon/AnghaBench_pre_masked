
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* sival_ptr; } ;
struct sigevent {TYPE_2__ sigev_value; int * sigev_notify_attributes; int sigev_notify_function; int sigev_notify; } ;
struct TYPE_9__ {int tv_sec; int tv_nsec; } ;
struct TYPE_7__ {int tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_3__ it_value; TYPE_1__ it_interval; } ;
typedef int hrtime_t ;
struct TYPE_10__ {int ft_tid; int * ft_hdl; void* ft_arg; } ;
typedef TYPE_4__ fmd_timer_t ;
typedef int fmd_hdl_t ;
typedef int fmd_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int ,struct sigevent*,int *) ;
 int FUNC_3 (int ,int ,struct itimerspec*,int *) ;

fmd_timer_t *
FUNC_4(fmd_hdl_t *VAR_4, void *VAR_5, fmd_event_t *VAR_6, hrtime_t VAR_7)
{
 struct sigevent VAR_8;
 struct itimerspec VAR_9;
 fmd_timer_t *VAR_10;

 VAR_10 = FUNC_0(VAR_4, sizeof (fmd_timer_t), VAR_1);
 VAR_10->ft_arg = VAR_5;
 VAR_10->ft_hdl = VAR_4;

 VAR_9.it_value.tv_sec = VAR_7 / 1000000000;
 VAR_9.it_value.tv_nsec = VAR_7 % 1000000000;
 VAR_9.it_interval.tv_sec = VAR_9.it_value.tv_sec;
 VAR_9.it_interval.tv_nsec = VAR_9.it_value.tv_nsec;

 VAR_8.sigev_notify = VAR_2;
 VAR_8.sigev_notify_function = VAR_3;
 VAR_8.sigev_notify_attributes = ((void*)0);
 VAR_8.sigev_value.sival_ptr = VAR_10;

 FUNC_2(VAR_0, &VAR_8, &VAR_10->ft_tid);
 FUNC_3(VAR_10->ft_tid, 0, &VAR_9, ((void*)0));

 FUNC_1(VAR_4, "installing timer for %d secs (%p)",
     (int)VAR_9.it_value.tv_sec, VAR_10->ft_tid);

 return (VAR_10);
}

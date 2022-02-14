
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_log_t ;
typedef int va_list ;
struct TYPE_4__ {scalar_t__ verbosity; size_t i_msgs; int msg_lock; TYPE_1__* msgs; } ;
typedef TYPE_2__ intf_sys_t ;
struct TYPE_3__ {int type; char* msg; int * item; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char**,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, int VAR_2, const vlc_log_t *VAR_3,
                        const char *VAR_4, va_list VAR_5)
{
    intf_sys_t *VAR_6 = VAR_1;
    char *VAR_7;

    if (VAR_6->verbosity < 0
     || VAR_6->verbosity < (VAR_2 - VAR_0)
     || FUNC_3(&VAR_7, VAR_4, VAR_5) == -1)
        return;

    FUNC_4(&VAR_6->msg_lock);

    VAR_6->msgs[VAR_6->i_msgs].type = VAR_2;
    if (VAR_6->msgs[VAR_6->i_msgs].item != ((void*)0))
        FUNC_2(VAR_6->msgs[VAR_6->i_msgs].item);
    VAR_6->msgs[VAR_6->i_msgs].item = FUNC_1(VAR_3);
    FUNC_0(VAR_6->msgs[VAR_6->i_msgs].msg);
    VAR_6->msgs[VAR_6->i_msgs].msg = VAR_7;

    if (++VAR_6->i_msgs == (sizeof VAR_6->msgs / sizeof *VAR_6->msgs))
        VAR_6->i_msgs = 0;

    FUNC_5(&VAR_6->msg_lock);
}

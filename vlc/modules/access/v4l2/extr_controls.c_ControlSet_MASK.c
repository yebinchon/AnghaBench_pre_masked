
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int id; } ;
typedef TYPE_1__ vlc_v4l2_ctrl_t ;
struct v4l2_control {int value; int id; } ;
typedef int int_fast32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_1 (const vlc_v4l2_ctrl_t *VAR_1, int_fast32_t VAR_2)
{
    struct v4l2_control VAR_3 = {
        .id = VAR_1->id,
        .value = VAR_2,
    };
    if (FUNC_0 (VAR_1->fd, VAR_0, &VAR_3) < 0)
        return -1;
    return 0;
}

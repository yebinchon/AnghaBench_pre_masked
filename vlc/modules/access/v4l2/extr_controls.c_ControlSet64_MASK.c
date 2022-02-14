
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int id; } ;
typedef TYPE_1__ vlc_v4l2_ctrl_t ;
struct v4l2_ext_controls {int count; struct v4l2_ext_control* controls; int error_idx; int ctrl_class; } ;
struct v4l2_ext_control {int value64; int size; int id; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,struct v4l2_ext_controls*) ;

__attribute__((used)) static int FUNC_2 (const vlc_v4l2_ctrl_t *VAR_1, int64_t VAR_2)
{
    struct v4l2_ext_control VAR_3 = {
        .id = VAR_1->id,
        .size = 0,
    };
    VAR_3.value64 = VAR_2;
    struct v4l2_ext_controls VAR_4 = {
        .ctrl_class = FUNC_0(VAR_1->id),
        .count = 1,
        .error_idx = 0,
        .controls = &VAR_3,
    };

    if (FUNC_1 (VAR_1->fd, VAR_0, &VAR_4) < 0)
        return -1;
    return 0;
}

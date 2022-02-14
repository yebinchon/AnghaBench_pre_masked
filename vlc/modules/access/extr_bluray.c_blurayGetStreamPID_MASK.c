
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int pl_info_lock; } ;
typedef TYPE_1__ demux_sys_t ;
struct TYPE_7__ {int pid; } ;
typedef TYPE_2__ BLURAY_STREAM_INFO ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(demux_sys_t *VAR_0, int VAR_1, uint8_t VAR_2)
{
    FUNC_1(&VAR_0->pl_info_lock);

    BLURAY_STREAM_INFO *VAR_3 = FUNC_0(VAR_0,
                                                               VAR_1,
                                                               VAR_2);
    int VAR_4 = VAR_3 ? VAR_3->pid : -1;

    FUNC_2(&VAR_0->pl_info_lock);

    return VAR_4;
}

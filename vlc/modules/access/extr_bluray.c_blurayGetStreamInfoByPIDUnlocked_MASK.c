
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int demux_sys_t ;
struct TYPE_4__ {int pid; } ;
typedef TYPE_1__ BLURAY_STREAM_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int,TYPE_1__**) ;

__attribute__((used)) static BLURAY_STREAM_INFO * FUNC_1(demux_sys_t *VAR_2,
                                                             int VAR_3)
{
    for(int VAR_4=VAR_0; VAR_4<=VAR_1; VAR_4++)
    {
        BLURAY_STREAM_INFO *VAR_5;
        uint8_t VAR_6 = FUNC_0(VAR_2, VAR_4, &VAR_5);
        for(uint8_t VAR_7=0; VAR_7<VAR_6; VAR_7++)
        {
            if(VAR_5[VAR_7].pid == VAR_3)
                return &VAR_5[VAR_7];
        }
    }
    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int demux_sys_t ;
typedef int BLURAY_STREAM_INFO ;


 size_t FUNC_0 (int *,int,int **) ;

__attribute__((used)) static BLURAY_STREAM_INFO * FUNC_1(demux_sys_t *VAR_0,
                                                        int VAR_1,
                                                        uint8_t VAR_2)
{
    BLURAY_STREAM_INFO *VAR_3 = ((void*)0);
    uint8_t VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
    if(VAR_2 < VAR_4)
        return &VAR_3[VAR_2];
    else
        return ((void*)0);
}

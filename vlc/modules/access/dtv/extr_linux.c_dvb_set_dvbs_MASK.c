
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int dvb_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ,int ,int,int ,int,int ,int) ;

int FUNC_3 (dvb_device_t *VAR_7, uint64_t VAR_8,
                  uint32_t VAR_9, uint32_t VAR_10)
{
    uint32_t VAR_11 = VAR_8 / 1000;
    VAR_10 = FUNC_1 (VAR_10);

    if (FUNC_0 (VAR_7, VAR_1))
        return -1;
    return FUNC_2 (VAR_7, 5, VAR_0, 0, VAR_2, VAR_6,
                          VAR_3, VAR_11, VAR_5, VAR_9,
                          VAR_4, VAR_10);
}

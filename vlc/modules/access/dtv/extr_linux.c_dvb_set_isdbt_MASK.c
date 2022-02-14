
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int isdbt_layer_t ;
typedef int dvb_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,unsigned int,int const*) ;
 scalar_t__ FUNC_5 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;

int FUNC_6 (dvb_device_t *VAR_8, uint32_t VAR_9, uint32_t VAR_10,
                   int VAR_11, uint32_t VAR_12,
                   const isdbt_layer_t VAR_13[3])
{
    VAR_10 = FUNC_1 (VAR_10);
    VAR_11 = FUNC_3 (VAR_11);
    VAR_12 = FUNC_2 (VAR_12);

    if (FUNC_0 (VAR_8, VAR_2))
        return -1;
    if (FUNC_5 (VAR_8, 6, VAR_1, 0, VAR_3, VAR_7,
                       VAR_4, VAR_9, VAR_0, VAR_10,
                       VAR_5, VAR_12,
                       VAR_6, 0x7 ))
        return -1;
    for (unsigned VAR_14 = 0; VAR_14 < 3; VAR_14++)
        if (FUNC_4 (VAR_8, VAR_14, VAR_13 + VAR_14))
            return -1;
    return 0;
}

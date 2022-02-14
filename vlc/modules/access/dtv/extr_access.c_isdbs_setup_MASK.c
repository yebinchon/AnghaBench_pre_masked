
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef int dvb_device_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3 (vlc_object_t *VAR_0, dvb_device_t *VAR_1, uint64_t VAR_2)
{
    uint16_t VAR_3 = FUNC_2 (VAR_0, "dvb-ts-id");

    int VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);
    if (VAR_4 == 0)
        FUNC_1 (VAR_0, VAR_1, VAR_2);
    return VAR_4;
}

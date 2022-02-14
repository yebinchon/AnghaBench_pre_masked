
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef int dvb_device_t ;


 int FUNC_0 (int *,int ,char const*,void*,void*,int,int,void*) ;
 int FUNC_1 (int *,int *,int ) ;
 void* FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5 (vlc_object_t *VAR_0, dvb_device_t *VAR_1, uint64_t VAR_2)
{
    const char *VAR_3 = FUNC_4 (VAR_0, "dvb-modulation");
    uint32_t VAR_4 = FUNC_2 (VAR_0, "dvb-fec");
    uint32_t VAR_5 = FUNC_3 (VAR_0, "dvb-srate");
    int VAR_6 = FUNC_3 (VAR_0, "dvb-pilot");
    int VAR_7 = FUNC_3 (VAR_0, "dvb-rolloff");
    uint8_t VAR_8 = FUNC_3 (VAR_0, "dvb-stream");

    int VAR_9 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_5, VAR_4, VAR_6, VAR_7, VAR_8);
    if (VAR_9 == 0)
        FUNC_1 (VAR_0, VAR_1, VAR_2);
    return VAR_9;
}

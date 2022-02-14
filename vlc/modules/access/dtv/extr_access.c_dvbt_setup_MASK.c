
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef int dvb_device_t ;


 int FUNC_0 (int *,int ,char const*,void*,void*,void*,int,void*,int) ;
 void* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5 (vlc_object_t *VAR_0, dvb_device_t *VAR_1, uint64_t VAR_2)
{
    const char *VAR_3 = FUNC_4 (VAR_0, "dvb-modulation");
    uint32_t VAR_4 = FUNC_1 (VAR_0, "dvb-code-rate-hp");
    uint32_t VAR_5 = FUNC_1 (VAR_0, "dvb-code-rate-lp");
    uint32_t VAR_6 = FUNC_2 (VAR_0);
    uint32_t VAR_7 = FUNC_3 (VAR_0, "dvb-bandwidth");
    int VAR_8 = FUNC_3 (VAR_0, "dvb-transmission");
    int VAR_9 = FUNC_3 (VAR_0, "dvb-hierarchy");

    return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_6, VAR_9);
}

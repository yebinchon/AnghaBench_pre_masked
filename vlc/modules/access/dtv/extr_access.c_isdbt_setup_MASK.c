
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_3__ {void* time_interleaving; void* segment_count; int code_rate; int modulation; } ;
typedef TYPE_1__ isdbt_layer_t ;
typedef int dvb_device_t ;


 int FUNC_0 (int *,int ,void*,int,void*,TYPE_1__*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7 (vlc_object_t *VAR_0, dvb_device_t *VAR_1, uint64_t VAR_2)
{
    isdbt_layer_t VAR_3[3];
    uint32_t VAR_4 = FUNC_4 (VAR_0);
    uint32_t VAR_5 = FUNC_5 (VAR_0, "dvb-bandwidth");
    int VAR_6 = FUNC_5 (VAR_0, "dvb-transmission");

    for (unsigned VAR_7 = 0; VAR_7 < 3; VAR_7++)
    {
        char VAR_8[sizeof ("dvb-X-interleaving")];
        FUNC_1 (VAR_8, "dvb-X-", 6);
        VAR_8[4] = 'a' + VAR_7;

        FUNC_2 (VAR_8 + 6, "modulation");
        VAR_3[VAR_7].modulation = FUNC_6 (VAR_0, VAR_8);
        FUNC_2 (VAR_8 + 6, "fec");
        VAR_3[VAR_7].code_rate = FUNC_3 (VAR_0, VAR_8);
        FUNC_2 (VAR_8 + 6, "count");
        VAR_3[VAR_7].segment_count = FUNC_5 (VAR_0, VAR_8);
        FUNC_2 (VAR_8 + 6, "interleaving");
        VAR_3[VAR_7].time_interleaving = FUNC_5 (VAR_0, VAR_8);
    }

    return FUNC_0 (VAR_1, VAR_2, VAR_5, VAR_6, VAR_4, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flow_label; } ;
typedef TYPE_1__ Geneve ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,int*) ;

int FUNC_3(const char *VAR_2,
                                   const char *VAR_3,
                                   unsigned VAR_4,
                                   const char *VAR_5,
                                   unsigned VAR_6,
                                   const char *VAR_7,
                                   int VAR_8,
                                   const char *VAR_9,
                                   void *VAR_10,
                                   void *VAR_11) {
        Geneve *VAR_12 = VAR_11;
        uint32_t VAR_13;
        int VAR_14;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_14 = FUNC_2(VAR_9, &VAR_13);
        if (VAR_14 < 0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14, "Failed to parse Geneve flow label '%s'.", VAR_9);
                return 0;
        }

        if (VAR_13 & ~VAR_0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14,
                           "Geneve flow label '%s' not valid. Flow label range should be [0-1048575].", VAR_9);
                return 0;
        }

        VAR_12->flow_label = VAR_13;

        return 0;
}

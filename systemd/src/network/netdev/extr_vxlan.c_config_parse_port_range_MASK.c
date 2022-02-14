
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_3__ {void* high; void* low; } ;
struct TYPE_4__ {TYPE_1__ port_range; } ;
typedef TYPE_2__ VxLan ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,void**,void**) ;

int FUNC_3(const char *VAR_1,
                            const char *VAR_2,
                            unsigned VAR_3,
                            const char *VAR_4,
                            unsigned VAR_5,
                            const char *VAR_6,
                            int VAR_7,
                            const char *VAR_8,
                            void *VAR_9,
                            void *VAR_10) {
        VxLan *VAR_11 = VAR_10;
        uint16_t VAR_12, VAR_13;
        int VAR_14;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_14 = FUNC_2(VAR_8, &VAR_12, &VAR_13);
        if (VAR_14 < 0) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_14,
                           "Failed to parse VXLAN port range '%s'. Port should be greater than 0 and less than 65535.", VAR_8);
                return 0;
        }

        VAR_11->port_range.low = VAR_12;
        VAR_11->port_range.high = VAR_13;

        return 0;
}

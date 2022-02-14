
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
union in_addr_union {TYPE_1__ in; } ;
typedef void* uint32_t ;
struct TYPE_4__ {void* okey; void* ikey; void* key; } ;
typedef TYPE_2__ Tunnel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,union in_addr_union*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 int FUNC_4 (char const*,void**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

int FUNC_6(const char *VAR_2,
                            const char *VAR_3,
                            unsigned VAR_4,
                            const char *VAR_5,
                            unsigned VAR_6,
                            const char *VAR_7,
                            int VAR_8,
                            const char *VAR_9,
                            void *VAR_10,
                            void *VAR_11) {
        union in_addr_union VAR_12;
        Tunnel *VAR_13 = VAR_11;
        uint32_t VAR_14;
        int VAR_15;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_15 = FUNC_2(VAR_0, VAR_9, &VAR_12);
        if (VAR_15 < 0) {
                VAR_15 = FUNC_4(VAR_9, &VAR_14);
                if (VAR_15 < 0) {
                        FUNC_3(VAR_2, VAR_1, VAR_3, VAR_4, 0, "Failed to parse tunnel key ignoring assignment: %s", VAR_9);
                        return 0;
                }
        } else
                VAR_14 = FUNC_1(VAR_12.in.s_addr);

        if (FUNC_5(VAR_7, "Key"))
                VAR_13->key = VAR_14;
        else if (FUNC_5(VAR_7, "InputKey"))
                VAR_13->ikey = VAR_14;
        else
                VAR_13->okey = VAR_14;

        return 0;
}

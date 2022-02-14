
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Table ;
struct TYPE_3__ {int has_stats; int has_stats64; } ;
typedef TYPE_1__ LinkInfo ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_1(Table *VAR_11, const LinkInfo *VAR_12) {
        int VAR_13;

        if (!VAR_0)
                return 0;

        if (!VAR_12->has_stats64 && !VAR_12->has_stats)
                return 0;

        FUNC_0("Rx Packets", VAR_6);
        FUNC_0("Tx Packets", VAR_10);
        FUNC_0("Rx Bytes", VAR_3);
        FUNC_0("Tx Bytes", VAR_7);
        FUNC_0("Rx Errors", VAR_5);
        FUNC_0("Tx Errors", VAR_9);
        FUNC_0("Rx Dropped", VAR_4);
        FUNC_0("Tx Dropped", VAR_8);
        FUNC_0("Multicast Packets", VAR_2);
        FUNC_0("Collisions", VAR_1);

        return 0;
}

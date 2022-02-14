
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus ;
typedef int bs ;
struct TYPE_3__ {char* path; int limit; int usage; } ;
typedef TYPE_1__ PoolStatusInfo ;


 int VAR_0 ;
 char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(sd_bus *VAR_1, PoolStatusInfo *VAR_2) {
        char VAR_3[VAR_0], *VAR_4;

        if (VAR_2->path)
                FUNC_1("\t    Path: %s\n", VAR_2->path);

        VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3), VAR_2->usage);
        if (VAR_4)
                FUNC_1("\t   Usage: %s\n", VAR_4);

        VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3), VAR_2->limit);
        if (VAR_4)
                FUNC_1("\t   Limit: %s\n", VAR_4);
}

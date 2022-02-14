
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int path; } ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (TYPE_1__**,int,int ,int,int *) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static int FUNC_2(JournalFile **VAR_0, bool VAR_1, bool VAR_2) {
        int VAR_3 = FUNC_0(VAR_0, VAR_1, (uint64_t) -1, VAR_2, ((void*)0));
        if (VAR_3 < 0) {
                if (*VAR_0)
                        FUNC_1(VAR_3, "Failed to rotate %s: %m", (*VAR_0)->path);
                else
                        FUNC_1(VAR_3, "Failed to create rotated journal: %m");
        }

        return VAR_3;
}

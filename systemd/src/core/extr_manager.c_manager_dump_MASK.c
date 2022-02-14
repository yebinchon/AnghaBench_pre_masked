
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int monotonic; int realtime; } ;
typedef TYPE_1__ dual_timestamp ;
struct TYPE_14__ {TYPE_1__* timestamps; } ;
typedef scalar_t__ ManagerTimestamp ;
typedef TYPE_2__ Manager ;
typedef TYPE_2__ FILE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 char* FUNC_3 (char*,int,int ,int) ;
 char* FUNC_4 (char*,int,int ) ;
 int FUNC_5 (TYPE_2__*,char*,char*,char*,char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,char const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,char const*) ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(Manager *VAR_3, FILE *VAR_4, const char *VAR_5) {
        ManagerTimestamp VAR_6;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
                const dual_timestamp *VAR_7 = VAR_3->timestamps + VAR_6;
                char VAR_8[FUNC_0(VAR_0, VAR_1)];

                if (FUNC_2(VAR_7))
                        FUNC_5(VAR_4, "%sTimestamp %s: %s\n",
                                FUNC_9(VAR_5),
                                FUNC_8(VAR_6),
                                FUNC_10(VAR_7->realtime) ? FUNC_4(VAR_8, sizeof VAR_8, VAR_7->realtime) :
                                                                FUNC_3(VAR_8, sizeof VAR_8, VAR_7->monotonic, 1));
        }

        FUNC_7(VAR_3, VAR_4, VAR_5);
        FUNC_6(VAR_3, VAR_4, VAR_5);
}

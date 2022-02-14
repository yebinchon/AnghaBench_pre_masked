
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct iovec {int dummy; } ;
typedef int sd_id128_t ;
typedef int dual_timestamp ;
struct TYPE_6__ {int seqnum; int boot_id; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;
typedef TYPE_2__ Object ;
typedef int JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 struct iovec FUNC_0 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int ,int ,int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int *,struct iovec*,int,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,int,int *,int *) ;
 int FUNC_9 (int *,int,int ,TYPE_2__**,int *) ;
 int FUNC_10 (int *,int ,int ,TYPE_2__**,int *) ;
 int FUNC_11 (int *,int *,int ,int ,int ,TYPE_2__**,int *) ;
 scalar_t__ FUNC_12 (int,char*,int,int,int,int ,int,int *,int *,int *,int *,int **) ;
 int FUNC_13 (int **,int,int ,int,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,int) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static void FUNC_23(void) {
        dual_timestamp VAR_8;
        JournalFile *VAR_9;
        struct iovec VAR_10;
        static const char VAR_11[] = "TEST1=1", VAR_12[] = "TEST2=2";
        Object *VAR_13;
        uint64_t VAR_14;
        sd_id128_t VAR_15;
        char VAR_16[] = "/var/tmp/journal-XXXXXX";

        FUNC_22(VAR_2);

        FUNC_16(VAR_16);

        FUNC_1(FUNC_12(-1, "test.journal", VAR_4|VAR_3, 0666, 1, (uint64_t) -1, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_9) == 0);

        FUNC_1(FUNC_2(&VAR_8));
        FUNC_1(FUNC_20(&VAR_15) == 0);

        VAR_10 = FUNC_0(VAR_11);
        FUNC_1(FUNC_4(VAR_9, &VAR_8, ((void*)0), &VAR_10, 1, ((void*)0), ((void*)0), ((void*)0)) == 0);

        VAR_10 = FUNC_0(VAR_12);
        FUNC_1(FUNC_4(VAR_9, &VAR_8, ((void*)0), &VAR_10, 1, ((void*)0), ((void*)0), ((void*)0)) == 0);

        VAR_10 = FUNC_0(VAR_11);
        FUNC_1(FUNC_4(VAR_9, &VAR_8, &VAR_15, &VAR_10, 1, ((void*)0), ((void*)0), ((void*)0)) == 0);




        FUNC_7(VAR_9);

        FUNC_1(FUNC_10(VAR_9, 0, VAR_0, &VAR_13, &VAR_14) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 1);

        FUNC_1(FUNC_10(VAR_9, VAR_14, VAR_0, &VAR_13, &VAR_14) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 2);

        FUNC_1(FUNC_10(VAR_9, VAR_14, VAR_0, &VAR_13, &VAR_14) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 3);
        FUNC_1(FUNC_19(VAR_13->entry.boot_id, VAR_15));

        FUNC_1(FUNC_10(VAR_9, VAR_14, VAR_0, &VAR_13, &VAR_14) == 0);

        FUNC_1(FUNC_10(VAR_9, 0, VAR_0, &VAR_13, &VAR_14) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 1);

        FUNC_1(FUNC_8(VAR_9, VAR_11, FUNC_21(VAR_11), ((void*)0), &VAR_14) == 1);
        FUNC_1(FUNC_11(VAR_9, ((void*)0), 0, VAR_14, VAR_0, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 1);

        FUNC_1(FUNC_11(VAR_9, ((void*)0), 0, VAR_14, VAR_1, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 3);

        FUNC_1(FUNC_8(VAR_9, VAR_12, FUNC_21(VAR_12), ((void*)0), &VAR_14) == 1);
        FUNC_1(FUNC_11(VAR_9, ((void*)0), 0, VAR_14, VAR_1, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 2);

        FUNC_1(FUNC_11(VAR_9, ((void*)0), 0, VAR_14, VAR_0, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 2);

        FUNC_1(FUNC_8(VAR_9, "quux", 4, ((void*)0), &VAR_14) == 0);

        FUNC_1(FUNC_9(VAR_9, 1, VAR_0, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 1);

        FUNC_1(FUNC_9(VAR_9, 3, VAR_0, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 3);

        FUNC_1(FUNC_9(VAR_9, 2, VAR_0, &VAR_13, ((void*)0)) == 1);
        FUNC_1(FUNC_14(VAR_13->entry.seqnum) == 2);

        FUNC_1(FUNC_9(VAR_9, 10, VAR_0, &VAR_13, ((void*)0)) == 0);

        FUNC_13(&VAR_9, 1, (uint64_t) -1, 1, ((void*)0));
        FUNC_13(&VAR_9, 1, (uint64_t) -1, 1, ((void*)0));

        (void) FUNC_6(VAR_9);

        FUNC_15("Done...");

        if (VAR_7)
                FUNC_15("Not removing %s", VAR_16);
        else {
                FUNC_3(".", 3000000, 0, 0, ((void*)0), 1);

                FUNC_1(FUNC_18(VAR_16, VAR_6|VAR_5) >= 0);
        }

        FUNC_17("------------------------------------------------------------");
}

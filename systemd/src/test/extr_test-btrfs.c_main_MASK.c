
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ts ;
typedef int bs ;
struct TYPE_8__ {unsigned long long referenced; unsigned long long exclusive; unsigned long long referenced_max; unsigned long long exclusive_max; } ;
struct TYPE_7__ {int read_only; int otime; } ;
typedef TYPE_1__ BtrfsSubvolInfo ;
typedef TYPE_2__ BtrfsQuotaInfo ;


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
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,TYPE_2__*) ;
 int FUNC_2 (int,int ,TYPE_2__*) ;
 int FUNC_3 (char*,int ,unsigned long long) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,int ,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ,TYPE_2__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int ,unsigned long long) ;
 int FUNC_11 (char*,char*,int) ;
 int VAR_12 ;
 int FUNC_12 (char*,int,unsigned long long) ;
 int FUNC_13 (char*,int,int ) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (char*,int ) ;
 scalar_t__ FUNC_16 (char*,int) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,char*,int ) ;
 int FUNC_21 (int) ;

int FUNC_22(int VAR_13, char *VAR_14[]) {
        BtrfsQuotaInfo VAR_15;
        int VAR_16, VAR_17;

        VAR_17 = FUNC_17("/", VAR_10|VAR_8|VAR_9);
        if (VAR_17 < 0)
                FUNC_14(VAR_12, "Failed to open root directory: %m");
        else {
                char VAR_18[VAR_7], VAR_19[VAR_6];
                BtrfsSubvolInfo VAR_20;

                VAR_16 = FUNC_5(VAR_17, 0, &VAR_20);
                if (VAR_16 < 0)
                        FUNC_14(VAR_16, "Failed to get subvolume info: %m");
                else {
                        FUNC_15("otime: %s", FUNC_13(VAR_18, sizeof(VAR_18), VAR_20.otime));
                        FUNC_15("read-only (search): %s", FUNC_21(VAR_20.read_only));
                }

                VAR_16 = FUNC_2(VAR_17, 0, &VAR_15);
                if (VAR_16 < 0)
                        FUNC_14(VAR_16, "Failed to get quota info: %m");
                else {
                        FUNC_15("referenced: %s", FUNC_19(FUNC_12(VAR_19, sizeof(VAR_19), VAR_15.referenced)));
                        FUNC_15("exclusive: %s", FUNC_19(FUNC_12(VAR_19, sizeof(VAR_19), VAR_15.exclusive)));
                        FUNC_15("referenced_max: %s", FUNC_19(FUNC_12(VAR_19, sizeof(VAR_19), VAR_15.referenced_max)));
                        FUNC_15("exclusive_max: %s", FUNC_19(FUNC_12(VAR_19, sizeof(VAR_19), VAR_15.exclusive_max)));
                }

                VAR_16 = FUNC_6(VAR_17);
                if (VAR_16 < 0)
                        FUNC_14(VAR_16, "Failed to get read only flag: %m");
                else
                        FUNC_15("read-only (ioctl): %s", FUNC_21(VAR_16));

                FUNC_18(VAR_17);
        }

        VAR_16 = FUNC_8("/xxxtest");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        VAR_16 = FUNC_20("/xxxtest/afile", "ljsadhfljasdkfhlkjdsfha", VAR_11);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to write file: %m");

        VAR_16 = FUNC_11("/xxxtest", "/xxxtest2", 0);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make snapshot: %m");

        VAR_16 = FUNC_11("/xxxtest", "/xxxtest3", VAR_4);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make snapshot: %m");

        VAR_16 = FUNC_9("/xxxtest", VAR_0);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to remove subvolume: %m");

        VAR_16 = FUNC_9("/xxxtest2", VAR_0);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to remove subvolume: %m");

        VAR_16 = FUNC_9("/xxxtest3", VAR_0);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to remove subvolume: %m");

        VAR_16 = FUNC_11("/etc", "/etc2", VAR_4|VAR_2);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make snapshot: %m");

        VAR_16 = FUNC_9("/etc2", VAR_0);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to remove subvolume: %m");

        VAR_16 = FUNC_8("/xxxrectest");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        VAR_16 = FUNC_8("/xxxrectest/xxxrectest2");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        VAR_16 = FUNC_8("/xxxrectest/xxxrectest3");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        VAR_16 = FUNC_8("/xxxrectest/xxxrectest3/sub");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        if (FUNC_16("/xxxrectest/dir", 0755) < 0)
                FUNC_14(VAR_12, "Failed to make directory: %m");

        VAR_16 = FUNC_8("/xxxrectest/dir/xxxrectest4");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        if (FUNC_16("/xxxrectest/dir/xxxrectest4/dir", 0755) < 0)
                FUNC_14(VAR_12, "Failed to make directory: %m");

        VAR_16 = FUNC_8("/xxxrectest/dir/xxxrectest4/dir/xxxrectest5");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        if (FUNC_16("/xxxrectest/mnt", 0755) < 0)
                FUNC_14(VAR_12, "Failed to make directory: %m");

        VAR_16 = FUNC_11("/xxxrectest", "/xxxrectest2", VAR_5);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to snapshot subvolume: %m");

        VAR_16 = FUNC_9("/xxxrectest", VAR_0|VAR_1);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to recursively remove subvolume: %m");

        VAR_16 = FUNC_9("/xxxrectest2", VAR_0|VAR_1);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to recursively remove subvolume: %m");

        VAR_16 = FUNC_8("/xxxquotatest");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        VAR_16 = FUNC_4("/xxxquotatest", 0, 1);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to set up auto qgroup: %m");

        VAR_16 = FUNC_8("/xxxquotatest/beneath");
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to make subvolume: %m");

        VAR_16 = FUNC_4("/xxxquotatest/beneath", 0, 0);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to set up auto qgroup: %m");

        VAR_16 = FUNC_3("/xxxquotatest/beneath", 0, 4ULL * 1024 * 1024 * 1024);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to set up quota limit: %m");

        VAR_16 = FUNC_10("/xxxquotatest", 0, 5ULL * 1024 * 1024 * 1024);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to set up quota limit: %m");

        VAR_16 = FUNC_11("/xxxquotatest", "/xxxquotatest2", VAR_5|VAR_3);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to setup snapshot: %m");

        VAR_16 = FUNC_1("/xxxquotatest2/beneath", 0, &VAR_15);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to query quota: %m");

        FUNC_0(VAR_15.referenced_max == 4ULL * 1024 * 1024 * 1024);

        VAR_16 = FUNC_7("/xxxquotatest2", 0, &VAR_15);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed to query quota: %m");

        FUNC_0(VAR_15.referenced_max == 5ULL * 1024 * 1024 * 1024);

        VAR_16 = FUNC_9("/xxxquotatest", VAR_0|VAR_1);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed remove subvolume: %m");

        VAR_16 = FUNC_9("/xxxquotatest2", VAR_0|VAR_1);
        if (VAR_16 < 0)
                FUNC_14(VAR_16, "Failed remove subvolume: %m");

        return 0;
}

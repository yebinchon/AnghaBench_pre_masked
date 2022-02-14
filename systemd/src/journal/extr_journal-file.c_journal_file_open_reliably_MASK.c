
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mode_t ;
typedef int Set ;
typedef int MMapCache ;
typedef int JournalMetrics ;
typedef int JournalFile ;


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
 int FUNC_0 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int,char const*,int,int ,int,int ,int,int *,int *,int *,int *,int **) ;
 int FUNC_4 (int,char*,char const*) ;

int FUNC_5(
                const char *VAR_13,
                int VAR_14,
                mode_t VAR_15,
                bool VAR_16,
                uint64_t VAR_17,
                bool VAR_18,
                JournalMetrics *VAR_19,
                MMapCache *VAR_20,
                Set *VAR_21,
                JournalFile *VAR_22,
                JournalFile **VAR_23) {

        int VAR_24;

        VAR_24 = FUNC_3(-1, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
                              VAR_21, VAR_22, VAR_23);
        if (!FUNC_0(VAR_24,
                    -VAR_1,
                    -VAR_6,
                    -VAR_3,
                    -VAR_7,
                    -VAR_2,
                    -VAR_8,
                    -VAR_5,
                    -VAR_4,
                    -VAR_9))
                return VAR_24;

        if ((VAR_14 & VAR_10) == VAR_12)
                return VAR_24;

        if (!(VAR_14 & VAR_11))
                return VAR_24;

        if (!FUNC_1(VAR_13, ".journal"))
                return VAR_24;


        FUNC_4(VAR_24, "File %s corrupted or uncleanly shut down, renaming and replacing.", VAR_13);

        VAR_24 = FUNC_2(VAR_0, VAR_13);
        if (VAR_24 < 0)
                return VAR_24;

        return FUNC_3(-1, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
                                 VAR_21, VAR_22, VAR_23);
}

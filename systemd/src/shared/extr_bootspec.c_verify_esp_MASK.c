
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct statfs {int f_type; } ;
typedef int sd_id128_t ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,struct statfs*) ;
 int FUNC_7 (int ,int,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_8 (int ,int,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_9 (char const*,int,int,int *) ;

__attribute__((used)) static int FUNC_10(
                const char *VAR_9,
                bool VAR_10,
                bool VAR_11,
                uint32_t *VAR_12,
                uint64_t *VAR_13,
                uint64_t *VAR_14,
                sd_id128_t *VAR_15) {

        bool VAR_16;
        dev_t VAR_17;
        int VAR_18;

        FUNC_2(VAR_9);
        VAR_16 = FUNC_4("SYSTEMD_RELAX_ESP_CHECKS") > 0;




        if (!VAR_16) {
                struct statfs VAR_19;

                if (FUNC_6(VAR_9, &VAR_19) < 0)

                        return FUNC_5((VAR_10 && VAR_8 == VAR_3) ||
                                              (VAR_11 && VAR_8 == VAR_0) ? VAR_4 : VAR_5, VAR_8,
                                              "Failed to check file system type of \"%s\": %m", VAR_9);

                if (!FUNC_0(VAR_19.f_type, VAR_6))
                        return FUNC_5(VAR_10 ? VAR_4 : VAR_5,
                                              FUNC_1(VAR_10 ? VAR_1 : VAR_2),
                                              "File system \"%s\" is not a FAT EFI System Partition (ESP) file system.", VAR_9);
        }

        VAR_18 = FUNC_9(VAR_9, VAR_10, VAR_11, &VAR_17);
        if (VAR_18 < 0)
                return VAR_18;



        if (FUNC_3() > 0 || VAR_16)
                goto finish;






        if (VAR_11)
                return FUNC_8(VAR_17, VAR_10, VAR_12, VAR_13, VAR_14, VAR_15);
        else
                return FUNC_7(VAR_17, VAR_10, VAR_12, VAR_13, VAR_14, VAR_15);

finish:
        if (VAR_12)
                *VAR_12 = 0;
        if (VAR_13)
                *VAR_13 = 0;
        if (VAR_14)
                *VAR_14 = 0;
        if (VAR_15)
                *VAR_15 = VAR_7;

        return 0;
}

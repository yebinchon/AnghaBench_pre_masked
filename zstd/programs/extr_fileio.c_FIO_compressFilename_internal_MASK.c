
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ clock_t ;
typedef int cRess_t ;
typedef int UTIL_time_t ;
typedef int U64 ;
struct TYPE_4__ {int compressionType; int checksumFlag; } ;
typedef TYPE_1__ FIO_prefs_t ;


 double VAR_0 ;
 int FUNC_0 (int,char*,char const*,...) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int *,char const*,int const,int,int*) ;
 int FUNC_3 (int *,char const*,int const,int,int ,int*) ;
 int FUNC_4 (int *,char const*,int const,int,int*,int) ;
 int FUNC_5 (TYPE_1__* const,int *,char const*,int const,int,int*) ;





 int FUNC_6 (int const) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(FIO_prefs_t* const VAR_1,
                              cRess_t VAR_2,
                              const char* VAR_3, const char* VAR_4,
                              int VAR_5)
{
    UTIL_time_t const VAR_6 = FUNC_8();
    clock_t const VAR_7 = FUNC_9();
    U64 VAR_8 = 0;
    U64 VAR_9 = 0;
    U64 const VAR_10 = FUNC_7(VAR_4);
    FUNC_0(5, "%s: %u bytes \n", VAR_4, (unsigned)VAR_10);


    switch (VAR_1->compressionType) {
        default:
        case 128:
            VAR_9 = FUNC_5(VAR_1, &VAR_2, VAR_4, VAR_10, VAR_5, &VAR_8);
            break;

        case 132:



            (void)VAR_5;
            FUNC_1(20, "zstd: %s: file cannot be compressed as gzip (zstd compiled without ZSTD_GZCOMPRESS) -- ignored \n",
                            VAR_4);

            break;

        case 129:
        case 130:



            (void)VAR_5;
            FUNC_1(20, "zstd: %s: file cannot be compressed as xz/lzma (zstd compiled without ZSTD_LZMACOMPRESS) -- ignored \n",
                            VAR_4);

            break;

        case 131:



            (void)VAR_5;
            FUNC_1(20, "zstd: %s: file cannot be compressed as lz4 (zstd compiled without ZSTD_LZ4COMPRESS) -- ignored \n",
                            VAR_4);

            break;
    }


    FUNC_0(2, "\r%79s\r", "");
    FUNC_0(2,"%-20s :%6.2f%%   (%6llu => %6llu bytes, %s) \n",
        VAR_4,
        (double)VAR_9 / (VAR_8+(!VAR_8) ) * 100,
        (unsigned long long)VAR_8, (unsigned long long) VAR_9,
         VAR_3);


    { clock_t const VAR_11 = FUNC_9();
        double const VAR_12 = (double)(VAR_11 - VAR_7) / VAR_0;
        U64 const VAR_13 = FUNC_6(VAR_6);
        double const VAR_14 = (double)VAR_13 / 1000000000;
        double const VAR_15 = (VAR_12 / VAR_14) * 100;
        FUNC_0(4, "%-20s : Completed in %.2f sec  (cpu load : %.0f%%)\n",
                        VAR_4, VAR_14, VAR_15);
    }
    return 0;
}

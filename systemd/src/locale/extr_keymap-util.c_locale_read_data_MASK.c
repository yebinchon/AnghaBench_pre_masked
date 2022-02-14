
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct stat {int st_mtim; } ;
typedef int sd_bus_message ;
struct TYPE_4__ {scalar_t__ locale_mtime; int * locale; int * locale_cache; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int *,char*,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *,char*,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,struct stat*) ;
 scalar_t__ FUNC_11 (int *) ;

int FUNC_12(Context *VAR_18, sd_bus_message *VAR_19) {
        struct stat VAR_20;
        int VAR_21;


        if (VAR_19) {
                if (VAR_19 == VAR_18->locale_cache)
                        return 0;

                FUNC_9(VAR_18->locale_cache);
                VAR_18->locale_cache = FUNC_8(VAR_19);
        }

        VAR_21 = FUNC_10("/etc/locale.conf", &VAR_20);
        if (VAR_21 < 0 && VAR_17 != VAR_0)
                return -VAR_17;

        if (VAR_21 >= 0) {
                usec_t VAR_22;


                VAR_22 = FUNC_11(&VAR_20.st_mtim);
                if (VAR_18->locale_mtime != VAR_1 && VAR_22 == VAR_18->locale_mtime)
                        return 0;

                VAR_18->locale_mtime = VAR_22;
                FUNC_1(VAR_18);

                VAR_21 = FUNC_7(((void*)0), "/etc/locale.conf",
                                   "LANG", &VAR_18->locale[VAR_2],
                                   "LANGUAGE", &VAR_18->locale[VAR_3],
                                   "LC_CTYPE", &VAR_18->locale[VAR_6],
                                   "LC_NUMERIC", &VAR_18->locale[VAR_12],
                                   "LC_TIME", &VAR_18->locale[VAR_15],
                                   "LC_COLLATE", &VAR_18->locale[VAR_5],
                                   "LC_MONETARY", &VAR_18->locale[VAR_10],
                                   "LC_MESSAGES", &VAR_18->locale[VAR_9],
                                   "LC_PAPER", &VAR_18->locale[VAR_13],
                                   "LC_NAME", &VAR_18->locale[VAR_11],
                                   "LC_ADDRESS", &VAR_18->locale[VAR_4],
                                   "LC_TELEPHONE", &VAR_18->locale[VAR_14],
                                   "LC_MEASUREMENT", &VAR_18->locale[VAR_8],
                                   "LC_IDENTIFICATION", &VAR_18->locale[VAR_7]);
                if (VAR_21 < 0)
                        return VAR_21;
        } else {
                int VAR_23;

                VAR_18->locale_mtime = VAR_1;
                FUNC_1(VAR_18);


                for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
                        const char *VAR_24;

                        VAR_24 = FUNC_6(VAR_23);
                        FUNC_0(VAR_24);

                        VAR_21 = FUNC_3(&VAR_18->locale[VAR_23], FUNC_2(FUNC_4(VAR_24)));
                        if (VAR_21 < 0)
                                return VAR_21;
                }
        }

        FUNC_5(VAR_18->locale);
        return 0;
}

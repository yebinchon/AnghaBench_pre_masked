
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int ts_relative ;
typedef int ts_absolute ;
struct TYPE_10__ {char const* type; char const* path; scalar_t__ usage; scalar_t__ usage_exclusive; scalar_t__ limit; scalar_t__ limit_exclusive; int mtime; int crtime; scalar_t__ read_only; scalar_t__ name; } ;
typedef TYPE_1__ sd_bus ;
typedef int bs_exclusive ;
typedef int bs ;
typedef TYPE_1__ ImageStatusInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char*,int,scalar_t__) ;
 char* FUNC_4 (char*,int,int ) ;
 char* FUNC_5 (char*,int,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,char*,scalar_t__,char*) ;
 int FUNC_11 (char*,char const*,...) ;
 int FUNC_12 (char) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(sd_bus *VAR_4, ImageStatusInfo *VAR_5) {
        char VAR_6[VAR_2];
        char VAR_7[VAR_1];
        char VAR_8[VAR_0];
        char VAR_9[VAR_0];
        const char *VAR_10, *VAR_11, *VAR_12, *VAR_13;

        FUNC_2(VAR_4);
        FUNC_2(VAR_5);

        if (VAR_5->name) {
                FUNC_6(VAR_5->name, VAR_3);
                FUNC_12('\n');
        }

        if (VAR_5->type)
                FUNC_11("\t    Type: %s\n", VAR_5->type);

        if (VAR_5->path)
                FUNC_11("\t    Path: %s\n", VAR_5->path);

        (void) FUNC_7(VAR_4, VAR_5->name);
        (void) FUNC_8(VAR_4, VAR_5->name);
        (void) FUNC_9(VAR_4, VAR_5->name);

        FUNC_10(VAR_4, "GetImageOSRelease", VAR_5->name, "\t      OS: ");

        FUNC_11("\t      RO: %s%s%s\n",
               VAR_5->read_only ? FUNC_0() : "",
               VAR_5->read_only ? "read-only" : "writable",
               VAR_5->read_only ? FUNC_1() : "");

        VAR_10 = FUNC_5(VAR_6, sizeof(VAR_6), VAR_5->crtime);
        VAR_11 = FUNC_4(VAR_7, sizeof(VAR_7), VAR_5->crtime);
        if (VAR_10 && VAR_11)
                FUNC_11("\t Created: %s; %s\n", VAR_11, VAR_10);
        else if (VAR_11)
                FUNC_11("\t Created: %s\n", VAR_11);

        VAR_10 = FUNC_5(VAR_6, sizeof(VAR_6), VAR_5->mtime);
        VAR_11 = FUNC_4(VAR_7, sizeof(VAR_7), VAR_5->mtime);
        if (VAR_10 && VAR_11)
                FUNC_11("\tModified: %s; %s\n", VAR_11, VAR_10);
        else if (VAR_11)
                FUNC_11("\tModified: %s\n", VAR_11);

        VAR_12 = FUNC_3(VAR_8, sizeof(VAR_8), VAR_5->usage);
        VAR_13 = VAR_5->usage_exclusive != VAR_5->usage ? FUNC_3(VAR_9, sizeof(VAR_9), VAR_5->usage_exclusive) : ((void*)0);
        if (VAR_12 && VAR_13)
                FUNC_11("\t   Usage: %s (exclusive: %s)\n", VAR_12, VAR_13);
        else if (VAR_12)
                FUNC_11("\t   Usage: %s\n", VAR_12);

        VAR_12 = FUNC_3(VAR_8, sizeof(VAR_8), VAR_5->limit);
        VAR_13 = VAR_5->limit_exclusive != VAR_5->limit ? FUNC_3(VAR_9, sizeof(VAR_9), VAR_5->limit_exclusive) : ((void*)0);
        if (VAR_12 && VAR_13)
                FUNC_11("\t   Limit: %s (exclusive: %s)\n", VAR_12, VAR_13);
        else if (VAR_12)
                FUNC_11("\t   Limit: %s\n", VAR_12);
}

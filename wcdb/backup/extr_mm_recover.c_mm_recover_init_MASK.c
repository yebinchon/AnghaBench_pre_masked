
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fp; int zstrm; int flags; int rc4_template; int (* log ) (int ,char*) ;} ;
typedef TYPE_1__ mm_recover_ctx ;
typedef int (* mm_logfunc ) (int ,char*) ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,unsigned char const*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;

mm_recover_ctx *FUNC_12(const char *VAR_3,
                                const unsigned char *VAR_4,
                                int VAR_5,
                                mm_logfunc VAR_6)
{
    if (!VAR_6)
        VAR_6 = FUNC_3;

    mm_recover_ctx *VAR_7 = (mm_recover_ctx *) FUNC_8(sizeof(mm_recover_ctx));
    if (!VAR_7) {
        VAR_6(VAR_1, "Memory allocation failed.");
        return ((void*)0);
    }
    FUNC_9(VAR_7, 0, sizeof(mm_recover_ctx));
    VAR_7->log = VAR_6;

    if (VAR_4 && VAR_5 > 0)
        FUNC_2(&VAR_7->rc4_template, VAR_5, VAR_4);
    else
        VAR_7->flags |= VAR_0;

    VAR_7->fp = FUNC_5(VAR_3, "rb");
    if (!VAR_7->fp)
        FUNC_1("Cannot open file '%s' for reading: %s", VAR_3,
                     FUNC_11(VAR_2));


    if (FUNC_10(VAR_7) != 0)
        goto bail;

    FUNC_0("Database recover context initialized. [input: %s]", VAR_3);
    return VAR_7;

bail:
    if (VAR_7) {
        FUNC_7(&VAR_7->zstrm);
        if (VAR_7->fp)
            FUNC_4(VAR_7->fp);
        FUNC_6(VAR_7);
    }
    return ((void*)0);
}

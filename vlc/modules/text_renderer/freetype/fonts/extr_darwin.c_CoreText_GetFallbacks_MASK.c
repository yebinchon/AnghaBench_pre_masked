
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_family_t ;
typedef int uni_char_t ;
typedef int uint32_t ;
typedef int littleEndianCodePoint ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int family_map; int p_families; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int UInt8 ;
typedef int * CTFontRef ;
typedef int * CTFontDescriptorRef ;
typedef int * CFStringRef ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int const*,int,int ,int) ;
 int * FUNC_3 (int ,char const*,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,int ) ;
 int * FUNC_7 (int *,int ,int *) ;
 int * FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int ) ;
 int * FUNC_10 (TYPE_1__*,char*,int *,int *,char*) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_16 (TYPE_1__*,char*,char*) ;
 int FUNC_17 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (int) ;
 int * FUNC_21 (int *,char*) ;

vlc_family_t *FUNC_22(filter_t *VAR_3, const char *VAR_4, uni_char_t VAR_5)
{
    filter_sys_t *VAR_6 = VAR_3->p_sys;
    if (FUNC_20(VAR_4 == ((void*)0))) {
        return ((void*)0);
    }

    vlc_family_t *VAR_7 = ((void*)0);
    CFStringRef VAR_8 = ((void*)0);
    CTFontDescriptorRef VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);

    CFStringRef VAR_12 = FUNC_3(VAR_0,
                                                       VAR_4,
                                                       VAR_2);
    CTFontRef VAR_13 = FUNC_7(VAR_12, 0, ((void*)0));
    uint32_t VAR_14 = FUNC_11(VAR_5);
    CFStringRef VAR_15 = FUNC_2(VAR_0,
                                                          (const UInt8 *)&VAR_14,
                                                          sizeof(VAR_14),
                                                          VAR_1,
                                                          0);
    CTFontRef VAR_16 = FUNC_6(VAR_13, VAR_15, FUNC_0(0,1));
    CFStringRef VAR_17 = FUNC_4(VAR_16);


    char *VAR_18 = FUNC_9(VAR_17, VAR_2);
    if (VAR_18 == ((void*)0)) {
        FUNC_17(VAR_3, "Failed to convert font family name CFString to C string");
        goto done;
    }

    FUNC_16(VAR_3, "Will deploy fallback font '%s'", VAR_18);


    VAR_10 = FUNC_12(VAR_18);

    VAR_7 = FUNC_21(&VAR_6->family_map, VAR_10);
    if (VAR_7) {
        goto done;
    }

    VAR_7 = FUNC_10(VAR_3, VAR_10, &VAR_6->p_families, &VAR_6->family_map, VAR_10);
    if (FUNC_20(!VAR_7)) {
        goto done;
    }

    VAR_8 = FUNC_5(VAR_16);
    VAR_9 = FUNC_8(VAR_8, 0.);
    VAR_11 = FUNC_15(VAR_9);


    if (VAR_11 != ((void*)0)) {
        if (FUNC_18("", VAR_11) == 0) {
            goto done;
        }
    } else {
        goto done;
    }

    FUNC_13(VAR_3, VAR_9, FUNC_19(VAR_11), VAR_7);

done:
    FUNC_1(VAR_12);
    FUNC_1(VAR_13);
    FUNC_1(VAR_15);
    FUNC_1(VAR_16);
    FUNC_1(VAR_17);
    FUNC_14(VAR_18);
    FUNC_14(VAR_10);
    FUNC_14(VAR_11);
    if (VAR_8 != ((void*)0))
        FUNC_1(VAR_8);
    if (VAR_9 != ((void*)0))
        FUNC_1(VAR_9);
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int const vlc_family_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int family_map; int p_families; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int * CTFontDescriptorRef ;
typedef int * CTFontCollectionRef ;
typedef int * CFStringRef ;
typedef int * CFMutableDictionaryRef ;
typedef scalar_t__ CFIndex ;
typedef int * CFArrayRef ;


 int * FUNC_0 (int ,void const**,size_t const,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char const*,int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int const* FUNC_11 (TYPE_1__*,char*,int *,int *,char*) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (TYPE_1__*,int *,char*,int const*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_16 (TYPE_1__*,char*,char const*) ;
 int FUNC_17 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_18 (int) ;
 int const* FUNC_19 (int *,char*) ;

const vlc_family_t *FUNC_20(filter_t *VAR_5, const char *VAR_6)
{
    filter_sys_t *VAR_7 = VAR_5->p_sys;

    if (FUNC_18(VAR_6 == ((void*)0))) {
        return ((void*)0);
    }

    char *VAR_8 = FUNC_12(VAR_6);
    if (FUNC_18(!VAR_8)) {
        return ((void*)0);
    }


    vlc_family_t *VAR_9 = FUNC_19(&VAR_7->family_map, VAR_8);
    if (VAR_9) {
        FUNC_14(VAR_8);
        return VAR_9;
    }

    CTFontCollectionRef VAR_10 = ((void*)0);
    CFArrayRef VAR_11 = ((void*)0);


    const size_t VAR_12 = 3;
    CTFontDescriptorRef VAR_13[VAR_12];
    CFMutableDictionaryRef VAR_14[VAR_12];
    CFStringRef VAR_15[VAR_12] = {
        VAR_3,
        VAR_2,
        VAR_4,
    };


    FUNC_16(VAR_5, "Creating new family for '%s'", VAR_6);


    CFStringRef VAR_16 = FUNC_6(VAR_0,
                                                       VAR_6,
                                                       VAR_1);
    for (size_t VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
        VAR_14[VAR_17] = FUNC_4(VAR_0, 0, ((void*)0), ((void*)0));
        FUNC_3(VAR_14[VAR_17], VAR_15[VAR_17], VAR_16);
        VAR_13[VAR_17] = FUNC_9(VAR_14[VAR_17]);
    }

    CFArrayRef VAR_18 = FUNC_0(VAR_0,
                                                            (const void **)&VAR_13,
                                                            VAR_12, ((void*)0));

    VAR_10 = FUNC_8(VAR_18, 0);
    if (VAR_10 == ((void*)0)) {
        FUNC_17(VAR_5,"CTFontCollectionCreateWithFontDescriptors (1) failed!");
        goto end;
    }

    VAR_11 = FUNC_7(VAR_10);
    if (VAR_11 == ((void*)0)) {
        FUNC_17(VAR_5, "CTFontCollectionCreateMatchingFontDescriptors (2) failed!");
        goto end;
    }

    CFIndex VAR_19 = FUNC_1(VAR_11);

    char *VAR_20 = ((void*)0);


    VAR_9 = FUNC_11(VAR_5, VAR_8, &VAR_7->p_families, &VAR_7->family_map, VAR_8);
    if (FUNC_18(!VAR_9)) {
        goto end;
    }

    for (CFIndex VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
        CTFontDescriptorRef VAR_22 = FUNC_2(VAR_11, VAR_21);
        VAR_20 = FUNC_15(VAR_22);


        if (VAR_20 == ((void*)0) || *VAR_20 == '\0') {
            FUNC_10(VAR_20);
            continue;
        }

        FUNC_13(VAR_5, VAR_22, VAR_20, VAR_9);
    }

end:
    if (VAR_11 != ((void*)0)) {
        FUNC_5(VAR_11);
    }
    if (VAR_10 != ((void*)0)) {
        FUNC_5(VAR_10);
    }

    for (size_t VAR_23 = 0; VAR_23 < VAR_12; VAR_23++) {
        FUNC_5(VAR_14[VAR_23]);
        FUNC_5(VAR_13[VAR_23]);
    }

    FUNC_5(VAR_18);
    FUNC_5(VAR_16);
    FUNC_14(VAR_8);

    return VAR_9;
}

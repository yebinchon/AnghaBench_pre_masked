
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * CFStringRef ;
typedef int * CFMutableArrayRef ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char const* const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static CFMutableArrayRef FUNC_4(const char *const *VAR_3)
{
    CFMutableArrayRef VAR_4 =
            FUNC_1(VAR_0, 0, &VAR_2);

    for (size_t VAR_5 = 0; VAR_3[VAR_5] != ((void*)0); VAR_5++) {
        CFStringRef VAR_6 =
                FUNC_3(VAR_0, VAR_3[VAR_5], VAR_1);
        if (VAR_6 == ((void*)0)) {

            FUNC_2(VAR_4);
            return ((void*)0);
        }
        FUNC_0(VAR_4, VAR_6);
        FUNC_2(VAR_6);
    }
    return VAR_4;
}

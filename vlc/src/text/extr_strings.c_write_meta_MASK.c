
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_type_t ;
struct vlc_memstream {int dummy; } ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct vlc_memstream*,char*) ;

__attribute__((used)) static int FUNC_3(struct vlc_memstream *VAR_1, input_item_t *VAR_2,
                      vlc_meta_type_t VAR_3)
{
    if (VAR_2 == ((void*)0))
        return VAR_0;

    char *VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 == ((void*)0))
        return VAR_0;

    FUNC_2(VAR_1, VAR_4);
    FUNC_0(VAR_4);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (const char ** VAR_0, int VAR_1)
{
    libvlc_instance_t *VAR_2;

    FUNC_5 ("Testing libvlc_(audio|video)_filter_list_get()\n");

    VAR_2 = FUNC_2 (VAR_1, VAR_0);
    FUNC_0 (VAR_2 != ((void*)0));

    FUNC_6 (FUNC_1 (VAR_2));
    FUNC_6 (FUNC_4 (VAR_2));

    FUNC_3 (VAR_2);
}

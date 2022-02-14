
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_sem_t ;
struct input_preparser_callbacks_t {int on_preparse_ended; } ;
struct TYPE_5__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int *,int,struct input_preparser_callbacks_t const*,int *,int,TYPE_1__*) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(libvlc_instance_t *VAR_4, int VAR_5,
                                        int VAR_6)
{
    FUNC_8 ("test_input_metadata_timeout: timeout: %d, wait_and_cancel: %d ms\n",
         VAR_5, VAR_6);

    int VAR_7, VAR_8[2];
    VAR_7 = FUNC_10(VAR_8);
    FUNC_1(VAR_7 == 0 && VAR_8[1] >= 0);

    char VAR_9[FUNC_7("fd://") + 11];
    FUNC_6(VAR_9, "fd://%u", (unsigned) VAR_8[1]);
    input_item_t *VAR_10 = FUNC_2(VAR_9, "test timeout", 0,
                                              VAR_0);
    FUNC_1(VAR_10 != ((void*)0));

    vlc_sem_t VAR_11;
    FUNC_12 (&VAR_11, 0);
    const struct input_preparser_callbacks_t VAR_12 = {
        .on_preparse_ended = VAR_3,
    };
    VAR_7 = FUNC_5(VAR_4->p_libvlc_int, VAR_10,
                                   VAR_2 |
                                   VAR_1,
                                   &VAR_12, &VAR_11, VAR_5, VAR_4);
    FUNC_1(VAR_7 == 0);

    if (VAR_6 > 0)
    {
        FUNC_14( FUNC_0(VAR_6) );
        FUNC_4(VAR_4->p_libvlc_int, VAR_4);

    }
    FUNC_13(&VAR_11);

    FUNC_3(VAR_10);
    FUNC_11(&VAR_11);
    FUNC_9(VAR_8[0]);
    FUNC_9(VAR_8[1]);
}

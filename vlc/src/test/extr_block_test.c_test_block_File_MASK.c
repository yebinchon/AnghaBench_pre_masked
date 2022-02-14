
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_1__ block_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,char,scalar_t__) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_12(bool VAR_2)
{
    FILE *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_6 ("testfile.txt", "wb+e");
    FUNC_0 (VAR_3 != ((void*)0));

    VAR_4 = FUNC_7 (VAR_1, VAR_3);
    FUNC_0 (VAR_4 != VAR_0);
    VAR_4 = FUNC_4 (VAR_3);
    FUNC_0 (VAR_4 != VAR_0);

    block_t *VAR_5 = FUNC_1(FUNC_5(VAR_3), VAR_2);
    FUNC_3 (VAR_3);

    FUNC_0 (VAR_5 != ((void*)0));
    FUNC_0 (VAR_5->i_buffer == FUNC_11 (VAR_1));
    FUNC_0 (!FUNC_8 (VAR_5->p_buffer, VAR_1, VAR_5->i_buffer));
    if (VAR_2)
        FUNC_9(VAR_5->p_buffer, 'A', VAR_5->i_buffer);
    FUNC_2 (VAR_5);

    FUNC_10 ("testfile.txt");
}

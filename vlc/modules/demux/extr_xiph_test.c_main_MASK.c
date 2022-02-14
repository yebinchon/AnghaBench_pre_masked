
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct params_s {int lavc; int packets_count; int** packets; int* packets_sizes; int * p_append; scalar_t__ i_append; void* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int*,int,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;

int FUNC_4(void)
{
    struct params_s VAR_14;

    VAR_14.lavc = 0;
    VAR_14.codec = VAR_2;


    FUNC_0("0", VAR_7, VAR_11, 0, VAR_1);
    FUNC_0("1", VAR_7, VAR_11, 1, VAR_1);
    FUNC_0("2", VAR_7, VAR_11, 2, VAR_1);
    FUNC_0("3", VAR_7, VAR_11, 6, VAR_1);
    FUNC_0("lavc0", VAR_7, VAR_11, 0, VAR_1);
    FUNC_0("lavc1", VAR_7, VAR_11, 1, VAR_1);
    FUNC_0("lavc2", VAR_7, VAR_11, 6, VAR_1);
    FUNC_0("lavc3", VAR_7, VAR_13, 0, VAR_1);
    FUNC_0("lavc4", VAR_7, VAR_13, 1, VAR_1);
    VAR_14.lavc = 1;
    FUNC_0("lavc5", VAR_7, VAR_13, 37, VAR_1);
    VAR_14.codec = 0;
    VAR_14.lavc = 0;
    FUNC_0("lavc6", VAR_7, VAR_13, 37, VAR_1);


    VAR_14.packets_count = 0;
    FUNC_0("0", VAR_5, VAR_11, 0, VAR_1);
    VAR_14.packets_count = 1;
    FUNC_0("1", VAR_5, VAR_11, 1, VAR_1);
    VAR_14.packets_count = 3;
    FUNC_0("2", VAR_5, VAR_12, 11, VAR_1);


    VAR_14.packets_count = 3;
    VAR_14.codec = VAR_2;
    FUNC_0("lavc0", VAR_6, VAR_13, 37, VAR_1);
    VAR_14.packets_count = 0;
    FUNC_0("lavc1", VAR_6, VAR_13, 35, VAR_1);
    FUNC_0("lavc2", VAR_6, VAR_13, 0, VAR_1);


    VAR_14.packets[0] = &VAR_11[1];
    VAR_14.packets_sizes[0] = 5;
    VAR_14.packets_count = 1;
    FUNC_0("0", VAR_9, VAR_11, 6, VAR_1);
    VAR_14.packets_sizes[0] = 0;
    FUNC_0("1", VAR_9, VAR_11, 1, VAR_1);


    VAR_14.packets_count = 3;
    VAR_14.packets[0] = &VAR_12[3];
    VAR_14.packets_sizes[0] = 5;
    VAR_14.packets[1] = &VAR_12[8];
    VAR_14.packets_sizes[1] = 1;
    VAR_14.packets[2] = &VAR_12[9];
    VAR_14.packets_sizes[2] = 2;
    FUNC_0("2", VAR_9, VAR_12, 11, VAR_1);
    FUNC_0("3", VAR_9, VAR_12, 7, VAR_0);


    uint8_t VAR_15[265];
    FUNC_3(VAR_15, 0xFF, 265);
    FUNC_0("4", VAR_9, VAR_15, 265, VAR_0);
    VAR_15[0] = 1;
    FUNC_0("5", VAR_9, VAR_15, 265, VAR_0);
    VAR_15[2] = 1;
    VAR_14.packets_count = 2;
    VAR_14.packets[0] = &VAR_15[3];
    VAR_14.packets_sizes[0] = 256;
    VAR_14.packets[1] = &VAR_15[3+256];
    VAR_14.packets_sizes[1] = 6;
    FUNC_0("6", VAR_9, VAR_15, 265, VAR_1);



    VAR_14.packets_count = 3;
    VAR_14.packets[0] = &VAR_13[2];
    VAR_14.packets_sizes[0] = 30;
    VAR_14.packets[1] = &VAR_13[34];
    VAR_14.packets_sizes[1] = 1;
    VAR_14.packets[2] = &VAR_13[37];
    VAR_14.packets_sizes[2] = 0;
    FUNC_0("lavc0", VAR_10, VAR_13, 37, VAR_1);
    FUNC_0("lavc1", VAR_10, VAR_13, 36, VAR_0);
    FUNC_0("lavc2", VAR_10, VAR_13, 31, VAR_0);


    VAR_14.packets_count = VAR_3 + 1;
    FUNC_0("0", VAR_8, VAR_11, 6, VAR_0);
    VAR_14.packets_count = 1;
    VAR_14.packets[0] = &VAR_11[1];
    VAR_14.packets_sizes[0] = 5;
    FUNC_0("1", VAR_8, VAR_11, 6, VAR_1);


    VAR_14.packets_count = 0;
    FUNC_0("2", VAR_8, VAR_12, 11, VAR_0);
    VAR_14.packets_count = 3;
    VAR_14.packets[0] = &VAR_12[3];
    VAR_14.packets_sizes[0] = 5;
    VAR_14.packets[1] = &VAR_12[8];
    VAR_14.packets_sizes[1] = 1;
    VAR_14.packets[2] = &VAR_12[9];
    VAR_14.packets_sizes[2] = 2;
    FUNC_0("3", VAR_8, VAR_12, 11, VAR_1);


    VAR_14.packets_count = 2;
    VAR_14.packets[0] = &VAR_15[3];
    VAR_14.packets_sizes[0] = 256;
    VAR_14.packets[1] = &VAR_15[3+256];
    VAR_14.packets_sizes[1] = 6;
    FUNC_0("4", VAR_8, VAR_15, 265, VAR_1);


    VAR_14.i_append = 0;
    VAR_14.p_append = ((void*)0);
    VAR_14.packets[0] = &VAR_11[1];
    VAR_14.packets_sizes[0] = 5;
    FUNC_0("0", VAR_4, VAR_11, 6, VAR_1);

    VAR_15[0] = 1;
    VAR_15[1] = 5;
    FUNC_2(&VAR_15[2+0], &VAR_11[1], 5);
    FUNC_2(&VAR_15[2+5], &VAR_11[1], 5);
    FUNC_0("1", VAR_4, VAR_15, 12, VAR_1);

    FUNC_1(VAR_14.p_append);
    VAR_14.i_append = 0;
    VAR_14.p_append = ((void*)0);
    for(size_t VAR_16=0; VAR_16<=VAR_3; VAR_16++)
    {
        VAR_14.packets_sizes[0] = 0;
        VAR_15[0] = VAR_16;
        VAR_15[1 + VAR_16] = 0;
        FUNC_0("2", VAR_4, VAR_15, 1 + VAR_16,
            ((VAR_16 < VAR_3) ? VAR_1 : VAR_0) );
    }

    FUNC_1(VAR_14.p_append);

    return 0;
}

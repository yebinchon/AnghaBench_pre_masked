
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp4mux_trackinfo_t ;
typedef int bo_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static bo_t *FUNC_5(mp4mux_trackinfo_t *VAR_0)
{
    bo_t *VAR_1;
    bo_t *VAR_2;

    VAR_1 = FUNC_4("wave");
    if(VAR_1)
    {
        VAR_2 = FUNC_4("frma");
        if(VAR_2)
        {
            FUNC_2(VAR_2, "mp4a");
            FUNC_3(VAR_1, VAR_2);
        }

        VAR_2 = FUNC_4("mp4a");
        if(VAR_2)
        {
            FUNC_1(VAR_2, 0);
            FUNC_3(VAR_1, VAR_2);
        }

        VAR_2 = FUNC_0(VAR_0);
        FUNC_3(VAR_1, VAR_2);

        VAR_2 = FUNC_4("srcq");
        if(VAR_2)
        {
            FUNC_1(VAR_2, 0x40);
            FUNC_3(VAR_1, VAR_2);
        }


        FUNC_1(VAR_1, 8);
        FUNC_1(VAR_1, 0);
    }
    return VAR_1;
}

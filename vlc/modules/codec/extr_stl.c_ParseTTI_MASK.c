
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_justify; int i_accumulating; void* i_end; void* i_start; } ;
typedef TYPE_1__ stl_sg_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const) ;
 int FUNC_2 (TYPE_1__*,int const) ;
 void* FUNC_3 (int const*,double) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;

 int const VAR_5 ;

 int const VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_4 (TYPE_1__*,int*,int*,char const*) ;

__attribute__((used)) static bool FUNC_5(stl_sg_t *VAR_9, const uint8_t *VAR_10, const char *VAR_11, double VAR_12)
{
    uint8_t VAR_13[VAR_0];
    uint8_t VAR_14 = 0;


    uint8_t VAR_15 = VAR_10[3];
    if(VAR_15 > 0xef && VAR_15 != 0xff)
        return 0;

    if(VAR_10[15] != 0x00)
        return 0;

    if(VAR_10[14] > 0x00)
        VAR_9->i_justify = VAR_10[14];



    VAR_9->i_accumulating = (VAR_10[4] == 0x01 || VAR_10[4] == 0x02);

    VAR_9->i_start = FUNC_3( &VAR_10[5], VAR_12 );
    VAR_9->i_end = FUNC_3( &VAR_10[9], VAR_12 );


    for (size_t VAR_16 = VAR_7; VAR_16 < VAR_8; VAR_16++)
    {
        const uint8_t VAR_17 = VAR_10[VAR_16];
        switch(VAR_17)
        {
            case 128:
                VAR_13[VAR_14++] = '\n';
                FUNC_4(VAR_9, VAR_13, &VAR_14, VAR_11);

                FUNC_0(VAR_9);
                break;

            case 129:
                FUNC_4(VAR_9, VAR_13, &VAR_14, VAR_11);
                FUNC_0(VAR_9);
                return 1;

            default:
                if(VAR_17 <= VAR_6)
                {
                    FUNC_4(VAR_9, VAR_13, &VAR_14, VAR_11);
                    FUNC_2(VAR_9, VAR_17);
                }
                else if((VAR_17 >= VAR_2 && VAR_17 <= VAR_3) ||
                    VAR_17 >= VAR_4)
                {
                    VAR_13[VAR_14++] = VAR_17;
                }
                else if(VAR_17 >= VAR_5 && VAR_17 <= VAR_1)
                {
                    FUNC_4(VAR_9, VAR_13, &VAR_14, VAR_11);
                    FUNC_1(VAR_9, VAR_17);
                }
                break;
        }
    }

    FUNC_4(VAR_9, VAR_13, &VAR_14, VAR_11);

    return 0;
}
